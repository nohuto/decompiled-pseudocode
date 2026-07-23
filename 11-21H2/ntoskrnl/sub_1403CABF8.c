/*
 * XREFs of sub_1403CABF8 @ 0x1403CABF8
 * Callers:
 *     sub_140B55C50 @ 0x140B55C50 (sub_140B55C50.c)
 * Callees:
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     wcsstr @ 0x1403E3540 (wcsstr.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140B56094 @ 0x140B56094 (sub_140B56094.c)
 */

__int64 __fastcall sub_1403CABF8(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  const wchar_t *v5; // rbp
  wchar_t *v6; // r14
  size_t v7; // rdi
  _WORD *v8; // rax
  unsigned int v9; // ebx
  _WORD *v10; // rsi

  v5 = (const wchar_t *)sub_140B56094();
  v6 = wcsstr(v5, L"%1");
  v7 = (char *)v6 - (char *)v5;
  v8 = (_WORD *)sub_1403AA2B8((char *)v6 - (char *)v5 + 2);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    memmove(v8, v5, v7);
    *a2 = v10;
    *a3 = v6 + 2;
    v10[v7 >> 1] = 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
