/*
 * XREFs of sub_18008F0EC @ 0x18008F0EC
 * Callers:
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18008F4E0 @ 0x18008F4E0 (sub_18008F4E0.c)
 *     sub_180091224 @ 0x180091224 (sub_180091224.c)
 *     sub_18009125C @ 0x18009125C (sub_18009125C.c)
 */

__int64 __fastcall sub_18008F0EC(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  __int64 v10; // rdi
  _BYTE *v11; // r14
  _BYTE *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx

  v3 = *a1;
  v6 = a1[1] - *a1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v8 = v6 + 1;
  v9 = sub_180091224(a1, v6 + 1);
  v10 = sub_18001090C(v9);
  v11 = (_BYTE *)(a2 + v10 - v3);
  v12 = (_BYTE *)v10;
  *v11 = *a3;
  v13 = a1[1];
  v14 = *a1;
  if ( a2 != v13 )
  {
    sub_18008F4E0(v14, a2, v10);
    v13 = a1[1];
    v12 = v11 + 1;
    v14 = a2;
  }
  sub_18008F4E0(v14, v13, v12);
  sub_18009125C(a1, v10, v8, v9);
  return a2 + v10 - v3;
}
