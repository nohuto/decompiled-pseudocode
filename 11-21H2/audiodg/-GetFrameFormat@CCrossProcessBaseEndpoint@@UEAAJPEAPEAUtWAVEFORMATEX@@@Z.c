/*
 * XREFs of ?GetFrameFormat@CCrossProcessBaseEndpoint@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140025D40
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140025F08 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140089C70 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseEndpoint::GetFrameFormat(
        CCrossProcessBaseEndpoint *this,
        struct tWAVEFORMATEX **a2)
{
  int v2; // ebx

  if ( !*((_DWORD *)this + 14) )
  {
    v2 = -2005139437;
    goto LABEL_7;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_7;
  }
  v2 = CloneWaveFormat((const struct tWAVEFORMATEX *)(*((_QWORD *)this + 10) + 180LL), a2);
  if ( v2 < 0 )
LABEL_7:
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::GetFrameFormat", 0x1DFu, v2);
  return (unsigned int)v2;
}
