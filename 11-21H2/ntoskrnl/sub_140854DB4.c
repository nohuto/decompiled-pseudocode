/*
 * XREFs of sub_140854DB4 @ 0x140854DB4
 * Callers:
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_140958F84 @ 0x140958F84 (sub_140958F84.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140854DB4(_QWORD **a1)
{
  _QWORD *v1; // r14
  unsigned int i; // ebp
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx

  v1 = *a1;
  for ( i = 0; v1 != a1; *v5 = v5 )
  {
    v4 = v1;
    v5 = v1;
    v1 = (_QWORD *)*v1;
    v6 = sub_14042A5E0(*(_QWORD *)(*(v4 - 8) + 8LL), 2LL);
    v7 = v4 - 2;
    v5[1] = v5;
    v7[1] = v7;
    *v7 = v7;
    v8 = v4 - 6;
    if ( v6 < 0 )
      i = v6;
    v8[1] = v8;
    *((_WORD *)v4 + 8) = 0;
    *v8 = v8;
    v9 = v4 - 4;
    v9[1] = v9;
    *v9 = v9;
  }
  return i;
}
