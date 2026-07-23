/*
 * XREFs of WheaRegisterInUsePageOfflineNotification @ 0x140A08D90
 * Callers:
 *     HvlRegisterWheaErrorNotification @ 0x140930FF0 (HvlRegisterWheaErrorNotification.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall WheaRegisterInUsePageOfflineNotification(PFN_IN_USE_PAGE_OFFLINE_NOTIFY Callback, PVOID Context)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rdi
  _QWORD *v10; // rax

  if ( !byte_140CE1AD0 )
    return -1073741823;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x61656857u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  PoolWithTag[2] = Callback;
  PoolWithTag[3] = Context;
  v7 = sub_140347C10((__int64)&qword_140D00C28, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140D00C28, 0LL);
  v9 = v7;
  if ( v8 )
    sub_14029F120(&qword_140D00C28, v7, (__int64)&qword_140D00C28);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = (_QWORD *)qword_140D00C38;
  if ( *(PVOID **)qword_140D00C38 != &qword_140D00C30 )
    __fastfail(3u);
  v6[1] = qword_140D00C38;
  *v6 = &qword_140D00C30;
  *v10 = v6;
  qword_140D00C38 = (__int64)v6;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D00C28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D00C28);
  sub_1402AFC00((ULONG_PTR)&qword_140D00C28);
  return 0;
}
