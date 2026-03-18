/*
 * XREFs of ?OnFirstActivationAttempted@ForegroundLaunch@@YAXPEAX@Z @ 0x1C00FFF74
 * Callers:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00FFDF4 (_anonymous_namespace_--RemoveForegroundActivate.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0076DBC (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 */

void __fastcall ForegroundLaunch::OnFirstActivationAttempted(ForegroundLaunch *this, void *a2)
{
  unsigned int v3; // eax
  ForegroundLaunch **v4; // r8
  int v5; // edx
  char *v6; // rbx
  __int64 v7; // r8
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v9, (struct _EX_PUSH_LOCK *)&unk_1C03377D0);
  v3 = 5;
  v4 = (ForegroundLaunch **)&unk_1C03360D0;
  v5 = 1;
  while ( *v4 != this )
  {
    ++v3;
    v4 += 2;
    if ( v3 >= 0xF )
      goto LABEL_4;
  }
  v6 = (char *)&unk_1C0336080 + 16 * v3;
  if ( *((_DWORD *)v6 + 3) == 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        (_DWORD)v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        20,
        (__int64)&WPP_f102d90fc8853948a2c0f4157c8d628a_Traceguids,
        (char)this);
    }
    LockProcessByClientId(this, (PEPROCESS *)&Object);
    PsSetProcessPriorityByClass(Object, 0LL, v7);
    if ( Object )
      ObfDereferenceObject(Object);
  }
  *(_OWORD *)v6 = 0LL;
LABEL_4:
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
}
