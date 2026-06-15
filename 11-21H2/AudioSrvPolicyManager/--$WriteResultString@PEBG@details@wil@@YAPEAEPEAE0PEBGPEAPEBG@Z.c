/*
 * XREFs of ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x180004BB4
 * Callers:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180006A2C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180006C4C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180007AFC (memcpy_s.c)
 */

char *__fastcall wil::details::WriteResultString<unsigned short const *>(char *a1, char *a2, _WORD *a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  rsize_t v8; // rdx

  if ( a1 == a2 )
    goto LABEL_10;
  if ( !a3 )
    goto LABEL_10;
  if ( !*a3 )
    goto LABEL_10;
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v7 = 2 * v6 + 2;
  v8 = a2 - a1;
  if ( v8 >= v7 )
  {
    memcpy_s(a1, v8, a3, 2 * v6 + 2);
    if ( a4 )
      *a4 = a1;
    return &a1[v7];
  }
  else
  {
LABEL_10:
    if ( a4 )
      *a4 = 0LL;
    return a1;
  }
}
