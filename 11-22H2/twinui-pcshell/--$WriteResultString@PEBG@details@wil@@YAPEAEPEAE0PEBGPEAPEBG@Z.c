/*
 * XREFs of ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18004596C
 * Callers:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18038F63C (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 * Callees:
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x180045950 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     memcpy_s @ 0x1800B56CC (memcpy_s.c)
 */

char *__fastcall wil::details::WriteResultString<unsigned short const *>(
        unsigned __int16 *Destination,
        const unsigned __int16 *a2,
        wil::details *a3,
        unsigned __int16 **a4)
{
  rsize_t v7; // rax
  const void *v8; // r8
  __int64 v9; // r10
  rsize_t v10; // r10
  rsize_t v11; // rsi

  if ( Destination != a2
    && a3
    && *(_WORD *)a3
    && (v7 = wil::details::ResultStringSize(a3, a2), v10 = v9 - (_QWORD)Destination, v11 = v7, v10 >= v7) )
  {
    memcpy_s(Destination, v10, v8, v7);
    if ( a4 )
      *a4 = Destination;
    return (char *)Destination + v11;
  }
  else
  {
    if ( a4 )
      *a4 = 0LL;
    return (char *)Destination;
  }
}
