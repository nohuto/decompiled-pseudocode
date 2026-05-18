/*
 * XREFs of sub_1800DADD4 @ 0x1800DADD4
 * Callers:
 *     sub_1800DB0F0 @ 0x1800DB0F0 (sub_1800DB0F0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180017028 @ 0x180017028 (sub_180017028.c)
 *     sub_18001F54C @ 0x18001F54C (sub_18001F54C.c)
 *     sub_1800DAFBC @ 0x1800DAFBC (sub_1800DAFBC.c)
 *     sub_1800DBB6C @ 0x1800DBB6C (sub_1800DBB6C.c)
 */

__int64 __fastcall sub_1800DADD4(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  _DWORD *v12; // r8
  _DWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 2;
  if ( v6 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = sub_18001F54C(a1, v6 + 1);
  v10 = sub_180017028(v9);
  v11 = sub_18001090C(v10);
  v12 = (_DWORD *)v11;
  v13 = (_DWORD *)(v11 + 4 * ((a2 - v3) >> 2));
  *v13 = *a3;
  v14 = a1[1];
  v15 = *a1;
  if ( a2 != v14 )
  {
    sub_1800DAFBC(v15, a2, v11);
    v14 = a1[1];
    v12 = v13 + 1;
    v15 = a2;
  }
  sub_1800DAFBC(v15, v14, v12);
  sub_1800DBB6C(a1, v11, v8, v9);
  return v11 + 4 * ((a2 - v3) >> 2);
}
