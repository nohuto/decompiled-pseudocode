/*
 * XREFs of sub_14022CD50 @ 0x14022CD50
 * Callers:
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 * Callees:
 *     sub_140286EC0 @ 0x140286EC0 (sub_140286EC0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14022CD50(__int64 *BugCheckParameter2, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rbx
  ULONG_PTR v9; // r14
  volatile LONG *v10; // r15
  unsigned __int64 v11; // rbp
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // eax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  bool v18; // zf

  v4 = *BugCheckParameter2;
  v9 = 0LL;
  v10 = (volatile LONG *)(*BugCheckParameter2 + 72);
  v11 = ExAcquireSpinLockExclusive(v10);
  if ( (*(_DWORD *)(v4 + 56) & 0x20) == 0 )
  {
    v9 = (ULONG_PTR)BugCheckParameter2;
    sub_140286EC0((ULONG_PTR)BugCheckParameter2);
    BugCheckParameter2[14] = a4;
  }
  v12 = *((_DWORD *)BugCheckParameter2 + 12);
  *((_WORD *)BugCheckParameter2 + 16) |= 1u;
  v13 = v12 & 0x3FFFFFFF;
  BugCheckParameter2[1] = a2;
  *((_DWORD *)BugCheckParameter2 + 12) = v13;
  if ( v9 && a3 <= 1 )
  {
    if ( a3 == 1 )
      v15 = v13 | 0x40000000;
    else
      v15 = v13 | 0x80000000;
    *((_DWORD *)BugCheckParameter2 + 12) = v15;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v10);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v18 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= result;
        if ( v18 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return result;
}
