/*
 * XREFs of sub_1402EF0CC @ 0x1402EF0CC
 * Callers:
 *     ntoskrnl_36 @ 0x1402EEBC0 (ntoskrnl_36.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     sub_140398000 @ 0x140398000 (sub_140398000.c)
 *     sub_14063F338 @ 0x14063F338 (sub_14063F338.c)
 * Callees:
 *     sub_1402EF254 @ 0x1402EF254 (sub_1402EF254.c)
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     sub_140346770 @ 0x140346770 (sub_140346770.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

char __fastcall sub_1402EF0CC(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  char v8; // r14
  unsigned __int8 CurrentIrql; // bl
  unsigned int v11; // ecx
  unsigned int v12; // ebp
  char *v13; // r10
  int v14; // r10d
  __int64 v16; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // edx
  bool v21; // zf
  int v22; // [rsp+78h] [rbp+20h] BYREF

  v8 = 0;
  v22 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v16 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( a4 >= (unsigned __int16)word_140D05000 )
    a4 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
  LOWORD(v11) = a4;
  if ( a4 < (unsigned __int16)word_140D05000 )
  {
    v12 = a5;
    while ( 1 )
    {
      v13 = (char *)qword_140D31700[(unsigned __int16)v11];
      if ( v13 == (char *)&unk_140D3DDC0 + 280 * (unsigned __int16)v11 )
        v13 = 0LL;
      if ( (unsigned __int8)sub_140346770(a1, v13, v12) )
        break;
      v11 = sub_14030B3F0(a4, &v22);
      if ( v11 >= (unsigned __int16)word_140D05000 )
        goto LABEL_10;
    }
    sub_1402EF254(a1, a2, a3, v14, v12);
    v8 = 1;
  }
LABEL_10:
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *((_QWORD *)CurrentPrcb + 4375);
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
