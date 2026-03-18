/*
 * XREFs of _tlgCreate1Sz_char @ 0x1C00873D4
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0086CD4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall tlgCreate1Sz_char(_EVENT_DATA_DESCRIPTOR *pDesc, const char *psz)
{
  __int64 v2; // rax
  unsigned int v3; // eax

  if ( psz )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( psz[v2] );
    v3 = v2 + 1;
  }
  else
  {
    psz = a5;
    v3 = 1;
  }
  pDesc->Reserved = 0;
  pDesc->Ptr = (unsigned __int64)psz;
  pDesc->Size = v3;
}
