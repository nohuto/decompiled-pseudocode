/*
 * XREFs of ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x1C000C66C
 * Callers:
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C710 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C000CB7C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

void *__fastcall UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(
        UmfdTls *a1,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  int v7; // r11d
  int v8; // eax
  void *result; // rax

  v7 = a5 + a6;
  if ( a5 + a6 < a5 || (v8 = a4 + v7, a4 + v7 < a4) || v8 + a3 < a3 )
    result = 0LL;
  else
    result = UmfdTls::CommitUMBuffer(a1, v8 + a3, 1);
  *a2 = result;
  return result;
}
