/*
 * XREFs of sub_14030BA20 @ 0x14030BA20
 * Callers:
 *     sub_140202010 @ 0x140202010 (sub_140202010.c)
 *     sub_1406BFC4C @ 0x1406BFC4C (sub_1406BFC4C.c)
 *     sub_1406E97B4 @ 0x1406E97B4 (sub_1406E97B4.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_14097CD04 @ 0x14097CD04 (sub_14097CD04.c)
 *     sub_14097EE60 @ 0x14097EE60 (sub_14097EE60.c)
 *     sub_140982DE4 @ 0x140982DE4 (sub_140982DE4.c)
 * Callees:
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

__int64 __fastcall sub_14030BA20(__int64 a1, unsigned __int64 *a2, int a3)
{
  __int64 v5; // rbx
  _DWORD *v6; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  __int64 v9; // r9

  if ( a3 )
  {
    v5 = *((_QWORD *)KeGetCurrentThread() + 23);
    if ( (*(_BYTE *)(v5 + 1848) & 7) == 2 )
      v6 = &unk_140C53D00;
    else
      v6 = (_DWORD *)(v5 + 1856);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v9 + 20) |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      sub_140461A66(v6, CurrentIrql);
    else
      sub_14030F870(v6, CurrentIrql);
    v6[1] = 0;
    *a2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
    result = (unsigned __int64)a2 | *(_DWORD *)(a1 + 56) & 0xF;
    *(_QWORD *)(a1 + 56) = result;
    if ( CurrentIrql != 17 )
      return sub_14030FA80(v5 + 1664, CurrentIrql);
  }
  else
  {
    *a2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
    result = (unsigned __int64)a2 | *(_DWORD *)(a1 + 56) & 0xF;
    *(_QWORD *)(a1 + 56) = result;
  }
  return result;
}
