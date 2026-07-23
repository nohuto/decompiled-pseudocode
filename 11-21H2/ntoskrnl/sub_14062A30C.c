/*
 * XREFs of sub_14062A30C @ 0x14062A30C
 * Callers:
 *     sub_14062BA64 @ 0x14062BA64 (sub_14062BA64.c)
 *     sub_14062C2E4 @ 0x14062C2E4 (sub_14062C2E4.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F78C @ 0x14045F78C (sub_14045F78C.c)
 *     sub_14062A198 @ 0x14062A198 (sub_14062A198.c)
 *     sub_14062B56C @ 0x14062B56C (sub_14062B56C.c)
 */

__int64 __fastcall sub_14062A30C(
        PEX_SPIN_LOCK SpinLock,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        char a6)
{
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf

  while ( 1 )
  {
    v10 = a4;
    if ( a4 > 0x40000 )
      v10 = 0x40000LL;
    if ( (a6 & 2) != 0 )
      sub_14062A198((__int64)SpinLock, a3, v10);
    result = sub_14062B56C(SpinLock, a2, a3, v10);
    a4 -= v10;
    if ( !a4 )
      break;
    v12 = *a5;
    ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v12);
    a3 += v10;
    a2 += v10;
    *a5 = sub_14045F78C(SpinLock);
  }
  return result;
}
