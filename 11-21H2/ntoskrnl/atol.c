/*
 * XREFs of atol @ 0x1403E0CE0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403DF0F4 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403E0CC0 (atoi.c)
 *     KdInitSystem @ 0x140A70470 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403E0898 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
