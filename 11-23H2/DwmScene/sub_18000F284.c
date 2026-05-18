/*
 * XREFs of sub_18000F284 @ 0x18000F284
 * Callers:
 *     sub_18000F7D0 @ 0x18000F7D0 (sub_18000F7D0.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 *     sub_18000D20C @ 0x18000D20C (sub_18000D20C.c)
 *     sub_18000D280 @ 0x18000D280 (sub_18000D280.c)
 *     sub_18000EF98 @ 0x18000EF98 (sub_18000EF98.c)
 *     sub_18000EFC4 @ 0x18000EFC4 (sub_18000EFC4.c)
 *     sub_18000FCBC @ 0x18000FCBC (sub_18000FCBC.c)
 *     sub_18000FDB4 @ 0x18000FDB4 (sub_18000FDB4.c)
 */

void *__fastcall sub_18000F284(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  _DWORD *v14; // rcx
  __int64 *v15; // rbx
  __int64 v16; // rdx
  void *result; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
  v4 = sub_18000EFC4(*(_QWORD *)(a2 + 120));
  v5 = sub_18000EFC4(*(_QWORD *)(a2 + 96)) + v4;
  v6 = sub_18000EFC4(*(_QWORD *)(a2 + 24)) + v5;
  v7 = sub_18000EF98(*(_QWORD *)(a2 + 112)) + v6;
  v8 = sub_18000EF98(*(_QWORD *)(a2 + 88)) + v7;
  v9 = sub_18000EF98(*(_QWORD *)(a2 + 72)) + v8;
  v10 = sub_18000EF98(*(_QWORD *)(a2 + 56)) + v9;
  v11 = sub_18000EF98(*(_QWORD *)(a2 + 48)) + v10;
  v12 = sub_18000EF98(*(_QWORD *)(a2 + 40)) + v11;
  v13 = sub_18000EF98(*(_QWORD *)(a2 + 128)) + v12;
  v14 = *(_DWORD **)(a1 + 152);
  if ( v14 && *v14 == 1 )
  {
    v15 = (__int64 *)(a1 + 160);
    if ( *(_QWORD *)(a1 + 160) >= v13 )
      goto LABEL_7;
  }
  else
  {
    v15 = (__int64 *)(a1 + 160);
  }
  sub_18000FDB4(a1 + 152);
  sub_18000FCBC(a1 + 152, 0LL, v13);
  v14 = *(_DWORD **)(a1 + 152);
LABEL_7:
  v16 = *v15;
  result = v14 + 1;
  v18 = (unsigned __int64)(v14 + 1) & -(__int64)(v14 != 0LL);
  if ( v18 )
  {
    v19 = v18 + v16;
    v20 = sub_18000D280(v18, v18 + v16, *(_WORD **)(a2 + 24), (_QWORD *)(a1 + 24));
    v21 = sub_18000D20C(v20, v19, *(_BYTE **)(a2 + 40), (_QWORD *)(a1 + 40));
    v22 = sub_18000D20C(v21, v19, *(_BYTE **)(a2 + 48), (_QWORD *)(a1 + 48));
    v23 = sub_18000D20C(v22, v19, *(_BYTE **)(a2 + 56), (_QWORD *)(a1 + 56));
    v24 = sub_18000D20C(v23, v19, *(_BYTE **)(a2 + 72), (_QWORD *)(a1 + 72));
    v25 = sub_18000D20C(v24, v19, *(_BYTE **)(a2 + 128), (_QWORD *)(a1 + 128));
    v26 = sub_18000D20C(v25, v19, *(_BYTE **)(a2 + 112), (_QWORD *)(a1 + 112));
    v27 = sub_18000D280(v26, v19, *(_WORD **)(a2 + 120), (_QWORD *)(a1 + 120));
    v28 = sub_18000D20C(v27, v19, *(_BYTE **)(a2 + 88), (_QWORD *)(a1 + 88));
    v29 = (void *)sub_18000D280(v28, v19, *(_WORD **)(a2 + 96), (_QWORD *)(a1 + 96));
    return memset(v29, 0, v19 - (_QWORD)v29);
  }
  return result;
}
