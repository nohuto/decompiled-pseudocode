/*
 * XREFs of sub_1405E0E68 @ 0x1405E0E68
 * Callers:
 *     sub_1409B07D4 @ 0x1409B07D4 (sub_1409B07D4.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140584510 @ 0x140584510 (sub_140584510.c)
 */

__int64 __fastcall sub_1405E0E68(__int64 a1, _RTL_BALANCED_NODE *a2)
{
  volatile LONG *v2; // r12
  __int64 v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // r14
  signed __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  BOOLEAN v9; // r8
  int v10; // esi
  unsigned __int64 v11; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  bool v15; // zf

  v2 = (volatile LONG *)(a1 + 1648);
  v4 = a1 + 1656;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1648));
  v6 = (unsigned __int64)a2[1].Children[0];
  v7 = *(_QWORD *)v4;
  v8 = v5;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v7 )
    v7 ^= v4;
  v9 = 0;
  v10 = *(_BYTE *)(v4 + 8) & 1;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( (int)sub_140584510(v6, v7) < 0 )
      {
        v11 = *(_QWORD *)v7;
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_16;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_16:
          v9 = 0;
          break;
        }
      }
      else
      {
        v11 = *(_QWORD *)(v7 + 8);
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_10;
          v11 ^= v7;
        }
        if ( !v11 )
        {
LABEL_10:
          v9 = 1;
          break;
        }
      }
      v7 = v11;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7, v9, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v15 = ((unsigned int)result & *(_DWORD *)(v14 + 20)) == 0;
        *(_DWORD *)(v14 + 20) &= result;
        if ( v15 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v8);
  return result;
}
