/*
 * XREFs of NtUserGetHDevName @ 0x1C0046FB0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateSharedHandle @ 0x1C0030048 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     DrvGetHdevName @ 0x1C00470C0 (DrvGetHdevName.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall NtUserGetHDevName(unsigned __int64 a1, ULONG64 a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE *v11; // r8
  unsigned __int16 v13[32]; // [rsp+40h] [rbp-58h] BYREF

  memset(v13, 0, sizeof(v13));
  v4 = 0;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v6 = HMValidateSharedHandle(a1, v5);
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 88);
    if ( v8 )
    {
      if ( (unsigned int)DrvGetHdevName(v8, v13) )
      {
        v13[31] = 0;
        if ( (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = (_BYTE *)a2;
        if ( a2 >= MmUserProbeAddress )
          v11 = (_BYTE *)MmUserProbeAddress;
        *v11 = *v11;
        v11[63] = v11[63];
        v8 = RtlStringCchCopyW((unsigned __int16 *)a2, 0x20uLL, v13) >= 0;
        v4 = v8;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v4;
}
