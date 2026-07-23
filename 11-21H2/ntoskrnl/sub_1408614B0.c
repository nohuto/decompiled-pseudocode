/*
 * XREFs of sub_1408614B0 @ 0x1408614B0
 * Callers:
 *     sub_14081A830 @ 0x14081A830 (sub_14081A830.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408614B0(__int64 a1, int a2, _QWORD *a3)
{
  const wchar_t *v4; // rbx
  const wchar_t *v5; // rax
  unsigned int v6; // eax
  unsigned __int64 v7; // rdi
  _WORD *Pool2; // rax
  _WORD *v9; // rsi
  __int64 result; // rax

  if ( a2 < 0 )
    return 3221225659LL;
  if ( a2 <= 1 )
  {
    v4 = L"acpiapic";
    v5 = L"acpiapic";
    do
      ++v5;
    while ( *v5 );
    v6 = (_DWORD)v5 - (unsigned int)L"acpiapic" + 2;
    goto LABEL_6;
  }
  if ( a2 != 3 )
    return 3221225659LL;
  v4 = L"0";
  v6 = 4;
LABEL_6:
  v7 = v6;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, v6 + 2LL, 1886150984LL);
  v9 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, v4, (unsigned int)v7);
  result = 0LL;
  v9[v7 >> 1] = 0;
  *a3 = v9;
  return result;
}
