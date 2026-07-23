/*
 * XREFs of FsRtlTruncateBaseMcb @ 0x14022BCB0
 * Callers:
 *     FsRtlTruncateLargeMcb @ 0x14022BC70 (FsRtlTruncateLargeMcb.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     sub_14022C700 @ 0x14022C700 (sub_14022C700.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __stdcall FsRtlTruncateBaseMcb(PBASE_MCB Mcb, LONGLONG Vbn)
{
  ULONG PairCount; // esi
  unsigned int v4; // r11d
  __int64 v5; // rax
  _DWORD *Mapping; // r8
  ULONG v7; // esi
  void *PoolWithTag; // rax
  void *v9; // rdi
  ULONG v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  if ( (_DWORD)Vbn )
  {
    if ( Mcb->PairCount && (unsigned __int8)sub_14022C700(Mcb, (unsigned int)(Vbn - 1), &v10) )
    {
      v5 = v10;
      Mapping = Mcb->Mapping;
      if ( Mapping[2 * v10 + 1] == -1 )
      {
        Mcb->PairCount = v10;
      }
      else
      {
        Mcb->PairCount = v10 + 1;
        if ( (unsigned int)v5 < (int)v5 + 1 && (_DWORD)v5 != -1 && Mapping[2 * v5] > v4 )
          Mapping[2 * v5] = v4;
      }
    }
  }
  else
  {
    Mcb->PairCount = 0;
  }
  PairCount = Mcb->PairCount;
  if ( PairCount < Mcb->MaximumPairCount >> 2 && Mcb->MaximumPairCount > 0xF )
  {
    v7 = 2 * PairCount;
    if ( v7 < 0xF )
      v7 = 15;
    if ( v7 == 15 )
    {
      if ( Mcb->PoolType == 1 )
        PoolWithTag = sub_140202234((__int64)&stru_140CE2500);
      else
        PoolWithTag = sub_140202234((__int64)&stru_140CE2480);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)Mcb->PoolType, 8LL * v7, 0x6D695346u);
    }
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, Mcb->Mapping, 8LL * Mcb->PairCount);
      ExFreePoolWithTag(Mcb->Mapping, 0);
      Mcb->Mapping = v9;
      Mcb->MaximumPairCount = v7;
    }
  }
}
