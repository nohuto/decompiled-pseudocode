/*
 * XREFs of sub_14035B760 @ 0x14035B760
 * Callers:
 *     sub_140683088 @ 0x140683088 (sub_140683088.c)
 *     sub_1406E6FA0 @ 0x1406E6FA0 (sub_1406E6FA0.c)
 * Callees:
 *     sub_14028F718 @ 0x14028F718 (sub_14028F718.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_QWORD *__fastcall sub_14035B760(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v5; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 *v7; // r14
  __int64 *i; // rbx
  int v9; // r8d
  int v10; // edx
  __int64 v12; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  int v16; // eax
  bool v17; // zf

  if ( a2 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 1124), 0x14u);
  else
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1124), 0x14u);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v5 = (signed __int64 *)(a1 + 2144);
  ExAcquirePushLockSharedEx(a1 + 2144, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v7 = (__int64 *)(a1 + 1504);
  for ( i = *(__int64 **)(a1 + 1504); i != v7; i = (__int64 *)*i )
  {
    if ( (*((unsigned __int8 *)i - 544) | *((unsigned __int8 *)i - 466)) != 0x3F )
    {
      v9 = (*((_DWORD *)i + 10) >> 9) & 7;
      if ( a2 )
      {
        v10 = (*((_DWORD *)i + 10) >> 9) & 7;
        v9 = 0;
      }
      else
      {
        v10 = 0;
      }
      if ( v10 != v9 )
        sub_14028F718((__int64)(i - 167), v10, v9);
    }
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  sub_1402AFC00((ULONG_PTR)v5);
  return sub_1402AC800((__int64)CurrentThread);
}
