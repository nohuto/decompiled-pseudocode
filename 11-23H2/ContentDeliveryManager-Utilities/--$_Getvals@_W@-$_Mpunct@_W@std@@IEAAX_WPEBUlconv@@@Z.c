/*
 * XREFs of ??$_Getvals@_W@?$_Mpunct@_W@std@@IEAAX_WPEBUlconv@@@Z @ 0x18000E968
 * Callers:
 *     ?_Init@?$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180014600 (-_Init@-$_Mpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x1800064AC (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180022B24 (memcpy_0.c)
 */

_WORD *__fastcall std::_Mpunct<wchar_t>::_Getvals<wchar_t>(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v5; // rbp
  __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  void *v8; // rbx
  const wchar_t *v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  void *v12; // rbx
  const wchar_t *v13; // rbp
  __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  void *v16; // rbx
  _WORD *result; // rax

  if ( *(_BYTE *)(a1 + 68) )
    v5 = *(_WORD **)(a3 + 104);
  else
    v5 = *(_WORD **)(a3 + 112);
  v6 = -1LL;
  do
    ++v6;
  while ( v5[v6] );
  v7 = v6 + 1;
  v8 = operator new[](saturated_mul(v7, 2uLL));
  memcpy_0(v8, v5, 2 * v7);
  *(_QWORD *)(a1 + 32) = v8;
  v9 = &word_180106C64;
  if ( *(_BYTE *)(a3 + 86) <= 4u )
    v9 = *(const wchar_t **)(a3 + 136);
  v10 = -1LL;
  do
    ++v10;
  while ( v9[v10] );
  v11 = v10 + 1;
  v12 = operator new[](saturated_mul(v11, 2uLL));
  memcpy_0(v12, v9, 2 * v11);
  *(_QWORD *)(a1 + 40) = v12;
  v13 = L"-";
  if ( *(_BYTE *)(a3 + 87) <= 4u )
    v13 = *(const wchar_t **)(a3 + 144);
  v14 = -1LL;
  do
    ++v14;
  while ( v13[v14] );
  v15 = v14 + 1;
  v16 = operator new[](saturated_mul(v15, 2uLL));
  memcpy_0(v16, v13, 2 * v15);
  *(_QWORD *)(a1 + 48) = v16;
  *(_WORD *)(a1 + 24) = **(_WORD **)(a3 + 120);
  result = *(_WORD **)(a3 + 128);
  *(_WORD *)(a1 + 26) = *result;
  return result;
}
