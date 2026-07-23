/*
 * XREFs of FsRtlInitializeLargeMcb @ 0x140202160
 * Callers:
 *     FsRtlInitializeMcb @ 0x14092E0F0 (FsRtlInitializeMcb.c)
 * Callees:
 *     FsRtlInitializeBaseMcbEx @ 0x1402021D0 (FsRtlInitializeBaseMcbEx.c)
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

void __stdcall FsRtlInitializeLargeMcb(PLARGE_MCB Mcb, POOL_TYPE PoolType)
{
  __int64 v3; // rax
  _QWORD *v4; // rax

  FsRtlInitializeBaseMcbEx(&Mcb->BaseMcb, PoolType, 1u);
  v3 = sub_140202234(&stru_140CE2580);
  Mcb->GuardedMutex = (PKGUARDED_MUTEX)v3;
  if ( !v3 )
    RtlRaiseStatus(-1073741670);
  *(_DWORD *)v3 = 1;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_DWORD *)(v3 + 16) = 0;
  *(_WORD *)(v3 + 24) = 1;
  *(_BYTE *)(v3 + 26) = 6;
  *(_DWORD *)(v3 + 28) = 0;
  v4 = (_QWORD *)(v3 + 32);
  v4[1] = v4;
  *v4 = v4;
}
