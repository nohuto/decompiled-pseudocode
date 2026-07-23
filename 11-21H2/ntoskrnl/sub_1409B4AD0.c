/*
 * XREFs of sub_1409B4AD0 @ 0x1409B4AD0
 * Callers:
 *     PsFreeSiloContextSlot @ 0x1409AB6D0 (PsFreeSiloContextSlot.c)
 *     PsUnregisterSiloMonitor @ 0x1409B1B50 (PsUnregisterSiloMonitor.c)
 *     sub_140AFF540 @ 0x140AFF540 (sub_140AFF540.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1409B4AD0(unsigned int a1)
{
  unsigned int v1; // edi
  _RTL_BITMAP *v2; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // edi

  v1 = a1;
  if ( a1 >= 0x20 )
  {
    v1 = a1 - 32;
    v2 = &stru_140C1BD40;
    if ( a1 - 32 >= 0x100 )
      return 3221225485LL;
  }
  else
  {
    v2 = &stru_140C1BD30;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1BD28, 0LL);
  if ( _bittest64((const signed __int64 *)v2->Buffer, v1) )
  {
    _bittestandreset((signed __int32 *)v2->Buffer, v1);
    v4 = 0;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1BD28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C1BD28);
  sub_1402AFC00((ULONG_PTR)&qword_140C1BD28);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v4;
}
