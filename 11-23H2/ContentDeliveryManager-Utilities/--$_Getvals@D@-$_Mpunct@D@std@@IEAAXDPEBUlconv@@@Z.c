/*
 * XREFs of ??$_Getvals@D@?$_Mpunct@D@std@@IEAAXDPEBUlconv@@@Z @ 0x18001C10C
 * Callers:
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18001E72C (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x1800064AC (--_U@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall std::_Mpunct<char>::_Getvals<char>(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rdi
  size_t v8; // rdi
  _BYTE *v9; // rax
  __int64 v10; // rdx
  const wchar_t *v11; // r14
  __int64 v12; // rdi
  size_t v13; // rdi
  _BYTE *v14; // rax
  signed __int64 v15; // rdx
  const char *v16; // rdi
  size_t v17; // rbx
  _BYTE *v18; // rax
  signed __int64 v19; // rdx
  _BYTE *result; // rax

  if ( *(_BYTE *)(a1 + 68) )
    v5 = *(_BYTE **)(a3 + 24);
  else
    v5 = *(_BYTE **)(a3 + 32);
  v6 = -1LL;
  v7 = -1LL;
  do
    ++v7;
  while ( v5[v7] );
  v8 = v7 + 1;
  v9 = operator new[](v8);
  if ( v8 )
  {
    v10 = v9 - v5;
    do
    {
      v5[v10] = *v5;
      ++v5;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(a1 + 32) = v9;
  v11 = &word_180106C60;
  if ( *(_BYTE *)(a3 + 86) <= 4u )
    v11 = *(const wchar_t **)(a3 + 64);
  v12 = -1LL;
  do
    ++v12;
  while ( *((_BYTE *)v11 + v12) );
  v13 = v12 + 1;
  v14 = operator new[](v13);
  if ( v13 )
  {
    v15 = v14 - (_BYTE *)v11;
    do
    {
      *((_BYTE *)v11 + v15) = *(_BYTE *)v11;
      v11 = (const wchar_t *)((char *)v11 + 1);
      --v13;
    }
    while ( v13 );
  }
  *(_QWORD *)(a1 + 40) = v14;
  v16 = "-";
  if ( *(_BYTE *)(a3 + 87) <= 4u )
    v16 = *(const char **)(a3 + 72);
  do
    ++v6;
  while ( v16[v6] );
  v17 = v6 + 1;
  v18 = operator new[](v17);
  if ( v17 )
  {
    v19 = v18 - v16;
    do
    {
      v16[v19] = *v16;
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  *(_QWORD *)(a1 + 48) = v18;
  *(_BYTE *)(a1 + 24) = **(_BYTE **)(a3 + 40);
  result = *(_BYTE **)(a3 + 48);
  *(_BYTE *)(a1 + 25) = *result;
  return result;
}
