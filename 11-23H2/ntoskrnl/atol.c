/*
 * XREFs of atol @ 0x1403D9280
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1403B62F4 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x1403D9260 (atoi.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     RamdiskStart @ 0x140B9B590 (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x1403D8E08 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX((unsigned __int8 *)Str, 0LL, 0xAu, 1);
  else
    return 0;
}
