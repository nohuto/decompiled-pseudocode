/*
 * XREFs of sub_1402353E4 @ 0x1402353E4
 * Callers:
 *     sub_140235150 @ 0x140235150 (sub_140235150.c)
 * Callees:
 *     sub_14023548C @ 0x14023548C (sub_14023548C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

_DWORD *__fastcall sub_1402353E4(char *a1, unsigned int a2, _WORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // r12
  unsigned int v8; // eax
  unsigned int v9; // r9d
  _WORD *v10; // r8
  _WORD *v11; // rdi
  unsigned __int64 v12; // r14
  char *v13; // rbx
  size_t v14; // rsi
  _DWORD *result; // rax

  v6 = a2;
  v8 = sub_14023548C(a2);
  v11 = v10;
  v12 = (unsigned __int64)v10 + v9;
  v13 = a1;
  if ( (unsigned __int64)v10 < v12 )
  {
    v14 = v8;
    do
    {
      if ( v6 != 3 && v6 != 4 && v6 != 5 || (*v11 & 0xFFF) != 0 || v11 == a3 )
      {
        memmove(v13, v11, v14);
        v13 += v14;
      }
      v11 = (_WORD *)((char *)v11 + v14);
    }
    while ( (unsigned __int64)v11 < v12 );
  }
  result = a5;
  *a5 = (_DWORD)v13 - (_DWORD)a1;
  return result;
}
