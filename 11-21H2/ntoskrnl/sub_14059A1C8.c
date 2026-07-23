/*
 * XREFs of sub_14059A1C8 @ 0x14059A1C8
 * Callers:
 *     sub_14096E06C @ 0x14096E06C (sub_14096E06C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14059A35C @ 0x14059A35C (sub_14059A35C.c)
 */

__int64 __fastcall sub_14059A1C8(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // r14
  KIRQL v5; // al
  _RTL_BALANCED_NODE *v6; // rcx
  unsigned __int64 v7; // rbp
  char v8; // al
  int v9; // esi
  _RTL_BALANCED_NODE *v10; // rdx
  unsigned __int64 v11; // rax
  _RTL_BALANCED_NODE *v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v16; // r9
  bool v17; // zf

  v2 = (volatile LONG *)(a1 + 232);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v6 = *(_RTL_BALANCED_NODE **)a2;
  v7 = v5;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && v6 )
    v6 = (_RTL_BALANCED_NODE *)(a2 ^ (unsigned __int64)v6);
  v8 = *(_BYTE *)(a2 + 8);
  v9 = v8 & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v6->Children[0] )
        {
          v10 = v6;
          if ( v9 )
            v6 = (_RTL_BALANCED_NODE *)((unsigned __int64)v6->Children[0] ^ (unsigned __int64)v6);
          else
            v6 = v6->Children[0];
          v10->Children[0] = 0LL;
        }
        v11 = (unsigned __int64)v6->Children[1];
        if ( !v11 )
          break;
        v12 = v6;
        if ( v9 )
          v6 = (_RTL_BALANCED_NODE *)(v11 ^ (unsigned __int64)v6);
        else
          v6 = v6->Children[1];
        v12->Children[1] = 0LL;
      }
      v13 = v6->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v9 && v13 )
        v13 ^= (unsigned __int64)v6;
      sub_14059A35C(v6, (PRTL_RB_TREE)(a1 + 256));
      if ( !v13 )
        break;
      v6 = (_RTL_BALANCED_NODE *)v13;
    }
    v8 = *(_BYTE *)(a2 + 8);
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( (v8 & 1) != 0 )
    *(_BYTE *)(a2 + 8) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v17 = ((unsigned int)result & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= result;
        if ( v17 )
          result = sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
