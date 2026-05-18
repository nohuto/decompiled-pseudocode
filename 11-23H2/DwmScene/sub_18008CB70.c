/*
 * XREFs of sub_18008CB70 @ 0x18008CB70
 * Callers:
 *     sub_18008D634 @ 0x18008D634 (sub_18008D634.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_18001217C @ 0x18001217C (sub_18001217C.c)
 *     sub_18008CD68 @ 0x18008CD68 (sub_18008CD68.c)
 *     sub_18008D550 @ 0x18008D550 (sub_18008D550.c)
 *     sub_18008D588 @ 0x18008D588 (sub_18008D588.c)
 */

__int64 __fastcall sub_18008CB70(__int64 *a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  _WORD *v12; // r8
  _WORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 1;
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    sub_180011B80();
  v8 = v6 + 1;
  v9 = sub_18008D550(a1, v6 + 1);
  v10 = sub_18001217C(v9);
  v11 = sub_18001090C(v10);
  v12 = (_WORD *)v11;
  v13 = (_WORD *)(v11 + 2 * ((a2 - v3) >> 1));
  *v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    sub_18008CD68(v15, a2, v11);
    v14 = a1[1];
    v12 = v13 + 1;
    v15 = a2;
  }
  sub_18008CD68(v15, v14, v12);
  sub_18008D588(a1, v11, v8, v9);
  return v11 + 2 * ((a2 - v3) >> 1);
}
