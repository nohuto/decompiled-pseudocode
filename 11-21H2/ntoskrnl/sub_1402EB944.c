/*
 * XREFs of sub_1402EB944 @ 0x1402EB944
 * Callers:
 *     sub_1402EC8A4 @ 0x1402EC8A4 (sub_1402EC8A4.c)
 * Callees:
 *     sub_1402EB9D0 @ 0x1402EB9D0 (sub_1402EB9D0.c)
 */

__int64 __fastcall sub_1402EB944(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 result; // rax

  v4 = (_QWORD *)(a2 + 8);
  v6 = *(_QWORD **)(a2 + 8);
  do
  {
    v9 = (_QWORD *)*v6;
    v10 = v6;
    v6 = v9;
    if ( (_QWORD *)v9[1] != v10 || (v11 = (_QWORD *)v10[1], (_QWORD *)*v11 != v10) )
      __fastfail(3u);
    *v11 = v9;
    v9[1] = v11;
    result = sub_1402EB9D0(a1, v10, a3, a4);
  }
  while ( !(_BYTE)result && v6 != v4 );
  return result;
}
