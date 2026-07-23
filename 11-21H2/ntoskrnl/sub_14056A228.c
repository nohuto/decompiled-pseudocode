/*
 * XREFs of sub_14056A228 @ 0x14056A228
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_1403D8548 @ 0x1403D8548 (sub_1403D8548.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14056A228(__int64 a1, int a2, char a3)
{
  char v5; // bp
  char *v6; // rbx
  char *PoolWithTag; // rax
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned __int8 v12; // r11
  unsigned int v13; // edi
  __int64 v14; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v17; // r8
  int v18; // eax
  bool v19; // zf

  if ( a3 )
    return 3221225506LL;
  if ( a2 != 16 )
    return 3221225476LL;
  v5 = *(_BYTE *)(a1 + 8);
  v6 = 0LL;
  if ( v5 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0xA0uLL, 0x41435050u);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
      *(_QWORD *)a1 = 0LL;
      return 3221225626LL;
    }
    memset(PoolWithTag, 0, 0xA0uLL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( !sub_1403D8548((__int64)KeGetCurrentPrcb()) )
  {
    *(_QWORD *)a1 = 0LL;
    v13 = -1073741637;
    goto LABEL_20;
  }
  if ( v5 )
  {
    v14 = *(_QWORD *)(v10 + 34968);
    if ( v14 )
    {
      *(_QWORD *)a1 = v14;
      v13 = -1073741302;
      goto LABEL_20;
    }
    *(_QWORD *)(v10 + 34968) = v6;
    *(_QWORD *)(v10 + 34976) = v6 + 40;
    *(_QWORD *)a1 = v6;
    v6 = 0LL;
    goto LABEL_19;
  }
  *(_QWORD *)a1 = 0LL;
  if ( *(_QWORD *)(v10 + 34968) )
  {
LABEL_19:
    v13 = 0;
    goto LABEL_20;
  }
  v13 = -1073741664;
LABEL_20:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= v12 && CurrentIrql <= v12 && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = *((_QWORD *)CurrentPrcb + 4375);
        v18 = ~(unsigned __int16)(v11 << (CurrentIrql + 1));
        v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
        *(_DWORD *)(v17 + 20) &= v18;
        if ( v19 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v13;
}
