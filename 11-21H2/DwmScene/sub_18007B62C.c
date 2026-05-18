/*
 * XREFs of sub_18007B62C @ 0x18007B62C
 * Callers:
 *     sub_180028F80 @ 0x180028F80 (sub_180028F80.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180030FC8 @ 0x180030FC8 (sub_180030FC8.c)
 *     sub_18007AD28 @ 0x18007AD28 (sub_18007AD28.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18007B62C(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  struct _Mtx_internal_imp_t *v4; // rdi
  int v5; // eax
  _QWORD *v6; // r14
  char *v7; // r15
  char *v8; // rcx
  __int64 v9; // r15
  _QWORD *v10; // rsi
  char *v11; // r14
  char *v12; // rcx

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  v3 = Mtx_lock((_Mtx_t)(a1 + 24));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 104);
  v5 = Mtx_lock((_Mtx_t)(a1 + 104));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  sub_18007AD28(*(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
  v6 = *(_QWORD **)(a1 + 184);
  v7 = (char *)v6[1];
  while ( !v7[25] )
  {
    sub_180030FC8(a1 + 184, a1 + 184, *((char **)v7 + 2));
    v8 = v7;
    v7 = *(char **)v7;
    sub_180010884(v8, 0x30uLL);
  }
  v6[1] = v6;
  *v6 = v6;
  v6[2] = v6;
  *(_QWORD *)(a1 + 192) = 0LL;
  v9 = a1 + 200;
  v10 = *(_QWORD **)(a1 + 200);
  v11 = (char *)v10[1];
  while ( !v11[25] )
  {
    sub_180030FC8(v9, v9, *((char **)v11 + 2));
    v12 = v11;
    v11 = *(char **)v11;
    sub_180010884(v12, 0x30uLL);
  }
  v10[1] = v10;
  *v10 = v10;
  v10[2] = v10;
  *(_QWORD *)(v9 + 8) = 0LL;
  Mtx_unlock(v4);
  return Mtx_unlock(v2);
}
