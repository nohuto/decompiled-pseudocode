/*
 * XREFs of sub_140645CF0 @ 0x140645CF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140645CF0()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf
  signed __int32 v8; // eax
  bool v9; // cc
  __int64 result; // rax

  do
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C10B80);
    v1 = qword_140D04C80;
    v2 = v0;
    qword_140D04C80 = *(_QWORD *)qword_140D04C80;
    KeReleaseSpinLockFromDpcLevel(&qword_140C10B80);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v5 = *((_QWORD *)CurrentPrcb + 4375);
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
          *(_DWORD *)(v5 + 20) &= v6;
          if ( v7 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    _InterlockedExchange((volatile __int32 *)(v1 + 8), 0);
    sub_14042A5E0(v1, *(_QWORD *)(v1 + 32));
    v8 = _InterlockedExchangeAdd(&dword_140D04C78, 0xFFFFFFFF);
    v9 = v8 <= 1;
    result = (unsigned int)(v8 - 1);
  }
  while ( !v9 );
  return result;
}
