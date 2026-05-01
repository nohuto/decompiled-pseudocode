/*
 * XREFs of sub_1800106C4 @ 0x1800106C4
 * Callers:
 *     sub_18000FCC0 @ 0x18000FCC0 (sub_18000FCC0.c)
 *     sub_18000FFC4 @ 0x18000FFC4 (sub_18000FFC4.c)
 * Callees:
 *     sub_18000DD90 @ 0x18000DD90 (sub_18000DD90.c)
 *     sub_1800117B0 @ 0x1800117B0 (sub_1800117B0.c)
 */

char __fastcall sub_1800106C4(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  void *v8; // rcx
  _WORD *v9; // rcx
  char v10; // al
  __int64 v11; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a4 < 0xA )
    sub_1800117B0(retaddr);
  v8 = *(void **)(a1 + 48);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( v8 )
    sub_18000DD90(v8);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = a2 + a3;
  *(_QWORD *)(a1 + 40) = a2 + a4;
  v9 = (_WORD *)(a2 + 2);
  *(_BYTE *)(a1 + 57) = 0;
  if ( a3 < 0xA )
    goto LABEL_14;
  if ( *(_WORD *)a2 || (v10 = 0, *v9 > *(_WORD *)a1) )
    v10 = 1;
  *(_BYTE *)(a1 + 57) = v10;
  if ( *(_WORD *)a2
    || *v9 != *(_WORD *)a1
    || *(_WORD *)(a2 + 4) != *(_WORD *)(a1 + 2)
    || *(_BYTE *)(a2 + 8) != *(_BYTE *)(a1 + 4)
    || *(_WORD *)(a2 + 6) != *(_WORD *)(a1 + 6)
    || (LOBYTE(v11) = *(_BYTE *)(a1 + 8), *(_BYTE *)(a2 + 9) != (_BYTE)v11) )
  {
LABEL_14:
    *(_WORD *)a2 = 0;
    *v9 = *(_WORD *)a1;
    *(_WORD *)(a2 + 4) = *(_WORD *)(a1 + 2);
    *(_BYTE *)(a2 + 8) = *(_BYTE *)(a1 + 4);
    *(_WORD *)(a2 + 6) = *(_WORD *)(a1 + 6);
    *(_BYTE *)(a2 + 9) = *(_BYTE *)(a1 + 8);
    v11 = *(_QWORD *)(a1 + 24) + 10LL;
    *(_QWORD *)(a1 + 32) = v11;
  }
  return v11;
}
