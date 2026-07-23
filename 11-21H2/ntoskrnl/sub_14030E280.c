/*
 * XREFs of sub_14030E280 @ 0x14030E280
 * Callers:
 *     sub_1406EBA90 @ 0x1406EBA90 (sub_1406EBA90.c)
 *     sub_1407B97B0 @ 0x1407B97B0 (sub_1407B97B0.c)
 *     sub_14096D000 @ 0x14096D000 (sub_14096D000.c)
 *     sub_14096D778 @ 0x14096D778 (sub_14096D778.c)
 *     sub_140972F98 @ 0x140972F98 (sub_140972F98.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 * Callees:
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

unsigned __int64 __fastcall sub_14030E280(__int64 a1, int a2)
{
  unsigned __int64 v2; // rdi
  _QWORD *v5; // r15
  __int64 v6; // rbx
  _DWORD *v7; // rbp
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r9

  v2 = 0LL;
  v5 = 0LL;
  v6 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( (*(_BYTE *)(v6 + 1848) & 7) == 2 )
    v7 = &unk_140C53D00;
  else
    v7 = (_DWORD *)(v6 + 1856);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v12 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    sub_140461A66(v7, CurrentIrql);
  else
    sub_14030F870(v7, CurrentIrql);
  v7[1] = 0;
  v9 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v9 )
  {
    do
    {
      v11 = *(_QWORD *)v9;
      if ( (a2 & *(_DWORD *)(v9 + 64)) != 0 )
      {
        *(_QWORD *)v9 = v2;
        v2 = v9;
        if ( v5 )
          *v5 = v11;
        else
          *(_QWORD *)(a1 + 56) = v11 | *(_DWORD *)(a1 + 56) & 0xF;
      }
      else
      {
        v5 = (_QWORD *)v9;
      }
      v9 = v11;
    }
    while ( v11 );
  }
  sub_14030FA80(v6 + 1664, CurrentIrql);
  return v2;
}
