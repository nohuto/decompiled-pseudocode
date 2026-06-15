/*
 * XREFs of ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140088DE4
 * Callers:
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEvent@@2I@Z @ 0x140088AB0 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJPEAUICrossProcessMemory@@_KPEAUICrossProcessEv.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1400188E0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z @ 0x140088EC8 (-IsValidFlags@CCrossProcessBaseEndpoint@@IEAA_NI@Z.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140088F24 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140089C70 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidControlData(CCrossProcessBaseEndpoint *this, struct ControlData *a2)
{
  char v2; // di
  unsigned int v5; // eax
  CCrossProcessBaseEndpoint *v6; // rcx
  unsigned int v7; // r8d
  CCrossProcessBaseEndpoint *v8; // rcx

  v2 = 0;
  if ( *((_DWORD *)a2 + 48) == 1162888004
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)((char *)a2 + 380)) >= 0
    && *((_DWORD *)a2 + 50) == *((unsigned __int16 *)a2 + 198) + 200LL )
  {
    v5 = *((_DWORD *)a2 + 91);
    if ( *((_DWORD *)a2 + 90) < v5
      && v5 <= *((_DWORD *)a2 + 92)
      && CCrossProcessBaseEndpoint::IsValidFlags(this, *((_DWORD *)a2 + 41)) )
    {
      v7 = *(_DWORD *)(*((_QWORD *)this + 10) + 132LL);
      if ( !v7
        || CCrossProcessBaseEndpoint::IsValidQueueIndex(v6, *(_DWORD *)a2, v7)
        && CCrossProcessBaseEndpoint::IsValidQueueIndex(
             v8,
             *((_DWORD *)a2 + 1),
             *(_DWORD *)(*((_QWORD *)this + 10) + 132LL)) )
      {
        return 1;
      }
    }
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidControlData", 0x78Bu, -2147467259);
  return v2;
}
