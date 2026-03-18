/*
 * XREFs of PsGetThreadServerSilo @ 0x14028C070
 * Callers:
 *     EtwpTraceIo @ 0x140214710 (EtwpTraceIo.c)
 *     EtwTracePageFault @ 0x140466B76 (EtwTracePageFault.c)
 *     EtwpTraceIoInit @ 0x140467B10 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405FE9C0 (EtwpTraceRedirectedIo.c)
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FC9A0 (ObpReferenceCurrentDeviceMap.c)
 *     IopGetThreadActiveConsoleId @ 0x140947B5C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020C010 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1624) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1624));
}
