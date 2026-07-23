/*
 * XREFs of sub_1405E10BC @ 0x1405E10BC
 * Callers:
 *     sub_1409B07D4 @ 0x1409B07D4 (sub_1409B07D4.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140584510 @ 0x140584510 (sub_140584510.c)
 */

signed __int64 __fastcall sub_1405E10BC(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r12
  __int64 v4; // rdi
  signed __int64 v5; // r15
  KIRQL v6; // al
  signed __int64 v7; // rbx
  unsigned __int64 v8; // r14
  int v9; // esi
  int v10; // eax
  signed __int64 v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v14; // edx
  __int64 v15; // r9
  bool v16; // zf

  v2 = (volatile LONG *)(a1 + 1648);
  v4 = a1 + 1656;
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1648));
  v7 = *(_QWORD *)v4;
  v8 = v6;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v7 )
    v7 ^= v4;
  v9 = *(_BYTE *)(v4 + 8) & 1;
  if ( v7 )
  {
    do
    {
      v10 = sub_140584510(a2, v7);
      if ( v10 >= 0 )
      {
        if ( v10 <= 0 )
          break;
        v11 = *(_QWORD *)(v7 + 8);
      }
      else
      {
        v11 = *(_QWORD *)v7;
      }
      if ( v9 && v11 )
        v7 ^= v11;
      else
        v7 = v11;
    }
    while ( v7 );
    if ( v7 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7);
      v5 = v7;
      *(_QWORD *)(v7 + 16) = -1LL;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = (v14 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v14;
        if ( v16 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return v5;
}
