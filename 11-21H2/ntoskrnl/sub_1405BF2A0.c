/*
 * XREFs of sub_1405BF2A0 @ 0x1405BF2A0
 * Callers:
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_140969850 @ 0x140969850 (sub_140969850.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140981F58 @ 0x140981F58 (sub_140981F58.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405BF2A0(__int64 a1, __int64 a2, __int64 a3)
{
  volatile LONG *v6; // r14
  KIRQL v7; // al
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf

  if ( (ULONG_PTR *)a1 != &StartContext )
  {
    v6 = (volatile LONG *)(a1 + 200);
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 200));
    v8 = *(unsigned __int64 **)(a1 + 24);
    v9 = v7;
    if ( v8 )
    {
      v10 = a2 & 0x3FFFFFFFFFFFFFFFLL;
      do
      {
        v11 = v8[3] & 0x3FFFFFFFFFFFFFFFLL;
        if ( v10 >= v11 )
        {
          if ( v10 < v11 + v8[4] )
            break;
          v8 = (unsigned __int64 *)v8[1];
        }
        else
        {
          v8 = (unsigned __int64 *)*v8;
        }
      }
      while ( v8 );
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v8);
    *(_QWORD *)(a1 + 16720) -= a3;
    *(_BYTE *)(a1 + 12) = 1;
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v14 = *((_QWORD *)CurrentPrcb + 4375);
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    sub_140981F58(a1);
    ExFreePoolWithTag(v8, 0);
  }
}
