/*
 * XREFs of SshInitialize @ 0x140B51B2C
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x1407E1360 (ExUnsubscribeWnfStateChange.c)
 *     CmSiRWLockInitialize @ 0x14080E420 (CmSiRWLockInitialize.c)
 *     SSHSupportEtwRegister @ 0x140822BFC (SSHSupportEtwRegister.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1409A2090 (SleepstudyHelperDestroyLibrary.c)
 *     SSHSupportEtwUnregister @ 0x1409A2678 (SSHSupportEtwUnregister.c)
 *     SSHSupportUnregisterPowerSettingCallback @ 0x1409A2694 (SSHSupportUnregisterPowerSettingCallback.c)
 *     SshpSubscribeCallbacks @ 0x140B55460 (SshpSubscribeCallbacks.c)
 *     SshpAlpcInitialize @ 0x140B66D04 (SshpAlpcInitialize.c)
 *     SshpSessionManagerInitialize @ 0x140B754D4 (SshpSessionManagerInitialize.c)
 */

__int64 __fastcall SshInitialize(int a1)
{
  NTSTATUS v1; // ebx
  _RTL_RUN_ONCE *v2; // rax
  _RTL_RUN_ONCE *v3; // rax
  __int64 v4; // rdx

  switch ( a1 )
  {
    case 0:
      CmSiRWLockInitialize(&SshpLibraryListLock);
      qword_140C38B18 = (__int64)&SshpLibraryList;
      v2 = (_RTL_RUN_ONCE *)&unk_140C38B50;
      SshpLibraryList = (__int64)&SshpLibraryList;
      do
      {
        CmSiRWLockInitialize(v2 - 2);
        v3[1].Value = (unsigned __int64)v3;
        v3->Value = (unsigned __int64)v3;
        v2 = v3 + 4;
      }
      while ( v4 != 1 );
      SshpSessionId = 0LL;
      SshpSessionGuid = 0LL;
      SshpInitialized = 1;
      return 0;
    case 1:
      v1 = SshpAlpcInitialize();
      if ( v1 >= 0 )
      {
        SshpSessionManagerInitialize();
        return (unsigned int)v1;
      }
      goto LABEL_15;
    case 3:
      v1 = SSHSupportEtwRegister();
      if ( v1 < 0 )
        goto LABEL_15;
      SshpTraceHandleRegistered = 1;
      v1 = SshpSubscribeCallbacks();
      if ( v1 < 0 )
        goto LABEL_15;
      return 0;
  }
  v1 = -1073741811;
LABEL_15:
  if ( SshpPowerSettingHandleInitialized )
  {
    SSHSupportUnregisterPowerSettingCallback();
    SshpPowerSettingHandleInitialized = 0;
  }
  if ( SshpWnfSubscriptionInitialized )
  {
    ExUnsubscribeWnfStateChange((struct _EX_RUNDOWN_REF *)SshpWnfSubscription);
    SshpWnfSubscriptionInitialized = 0;
  }
  if ( SshpTraceHandleRegistered )
  {
    SSHSupportEtwUnregister();
    SshpTraceHandleRegistered = 0;
  }
  while ( (__int64 *)SshpLibraryList != &SshpLibraryList )
    SleepstudyHelperDestroyLibrary((ULONG *)SshpLibraryList);
  SshpInitialized = 0;
  return (unsigned int)v1;
}
