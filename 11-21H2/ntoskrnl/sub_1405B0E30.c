/*
 * XREFs of sub_1405B0E30 @ 0x1405B0E30
 * Callers:
 *     sub_14023A710 @ 0x14023A710 (sub_14023A710.c)
 * Callees:
 *     sub_14028CA70 @ 0x14028CA70 (sub_14028CA70.c)
 *     sub_1402EB8BC @ 0x1402EB8BC (sub_1402EB8BC.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405B0E30(__int64 a1, ULONG_PTR *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rdx
  ULONG_PTR v19; // r10
  char v20; // r9
  volatile signed __int32 *v21; // r8
  int v22; // r10d
  unsigned __int64 v23; // rcx
  int v24; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = 48 * a2[3] - 0x220000000000LL;
  v8 = 48 * a2[4] - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2LL;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    a3 = (unsigned int)(-1LL << (CurrentIrql + 1)) & 4 | *(_DWORD *)(a4 + 20);
    v10 = 2LL;
    *(_DWORD *)(a4 + 20) = a3;
  }
  if ( v7 <= v8 )
  {
    v11 = v7 + 24;
    do
    {
      v24 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0x3FuLL) )
      {
        do
          sub_1402F32E0(&v24, v10, a3, a4);
        while ( *(__int64 *)v11 < 0 );
      }
      if ( !v6 )
        v6 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v11 + 16) >> 43) & 0x3FFLL));
      if ( *(_DWORD *)(a1 + 48) <= 3u )
        sub_14033C300(v11 - 24, 0);
      v10 = 2LL;
      v12 = *(_QWORD *)v11 & 0xC000000000000000uLL | 1;
      *(_WORD *)(v11 + 8) = 2;
      *(_QWORD *)v11 = v12;
      *(_BYTE *)(v11 + 10) = *(_BYTE *)(v11 + 10) & 0xF8 | 6;
      _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
      v11 += 48LL;
    }
    while ( v11 - 24 <= v8 );
  }
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= v16;
        if ( v17 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  sub_1402EB8BC(a1, a2[3], 512LL, 0);
  LOBYTE(v18) = 1;
  v19 = a2[3] >> 9;
  v20 = v19 & 0x1F;
  v21 = (volatile signed __int32 *)(qword_140C58DE0 + 4 * (a2[3] >> 14));
  if ( (v19 & 0x1F) + 1 > 0x20 )
  {
    if ( (v19 & 0x1F) == 0 )
      goto LABEL_29;
    v22 = v19 & 0x1F;
    _InterlockedAnd(v21++, ~(((1 << (32 - v22)) - 1) << v20));
    v18 = 1LL - (unsigned int)(32 - v22);
    if ( v18 >= 0x20 )
    {
      v23 = v18 >> 5;
      v18 += -32LL * (v18 >> 5);
      do
      {
        *v21++ = 0;
        --v23;
      }
      while ( v23 );
    }
    if ( v18 )
LABEL_29:
      _InterlockedAnd(v21, -1 << v18);
  }
  else
  {
    _InterlockedAnd(v21, ~(1 << v20));
  }
  sub_14028CA70(a2[3], 1u, 6u);
  ExFreePoolWithTag(a2, 0);
}
