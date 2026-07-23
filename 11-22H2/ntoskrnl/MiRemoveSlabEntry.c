/*
 * XREFs of MiRemoveSlabEntry @ 0x1403C1E2C
 * Callers:
 *     MiFreeSlabEntries @ 0x14021F060 (MiFreeSlabEntries.c)
 *     MiDemoteSlabEntry @ 0x1403CCD8C (MiDemoteSlabEntry.c)
 *     MmUpdateSlabRangeType @ 0x140B9B53C (MmUpdateSlabRangeType.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 */

__int64 __fastcall MiRemoveSlabEntry(__int64 a1, _RTL_RB_TREE *a2, __int64 a3)
{
  unsigned __int64 v5; // rbp
  __int64 result; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rdx
  volatile signed __int32 *v10; // r8
  int v11; // ebp
  unsigned __int64 v12; // rcx

  v5 = *(_QWORD *)(a3 + 24) >> 9;
  RtlRbRemoveNode(a2, (PRTL_BALANCED_NODE)a3);
  if ( a2[2].Root == (_RTL_BALANCED_NODE *)a3 )
    a2[2].Root = 0LL;
  if ( a2[2].Min == (_RTL_BALANCED_NODE *)a3 )
    a2[2].Min = 0LL;
  a2[3].Root = (_RTL_BALANCED_NODE *)((char *)a2[3].Root - *(unsigned int *)(a3 + 132));
  if ( (*(_DWORD *)(a3 + 140) & 2) != 0 )
  {
    a2[4].Root = (_RTL_BALANCED_NODE *)((char *)a2[4].Root - 512);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17856), 0xFFFFFFFFFFFFFE00uLL);
    v8 = v5 & 0x1F;
    LOBYTE(v9) = 1;
    v10 = (volatile signed __int32 *)(qword_140C6F440 + 4 * (v5 >> 5));
    result = v8 + 1;
    if ( (unsigned __int64)(v8 + 1) > 0x20 )
    {
      if ( (v5 & 0x1F) == 0 )
        goto LABEL_15;
      v11 = v5 & 0x1F;
      _InterlockedAnd(v10, ~(((1 << (32 - v11)) - 1) << v8));
      result = (unsigned int)(32 - v11);
      ++v10;
      v9 = 1 - result;
      if ( (unsigned __int64)(1 - result) >= 0x20 )
      {
        v12 = v9 >> 5;
        result = -32LL * (v9 >> 5);
        v9 += result;
        do
        {
          *v10++ = 0;
          --v12;
        }
        while ( v12 );
      }
      if ( v9 )
      {
LABEL_15:
        result = (unsigned int)(-1 << v9);
        _InterlockedAnd(v10, result);
      }
    }
    else
    {
      _InterlockedAnd(v10, ~(1 << v8));
    }
  }
  else
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17864), 0xFFFFFFFFFFFFFE00uLL);
  }
  --a2[4].Min;
  return result;
}
