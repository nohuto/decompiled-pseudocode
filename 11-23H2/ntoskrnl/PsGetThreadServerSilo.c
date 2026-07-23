/*
 * XREFs of PsGetThreadServerSilo @ 0x14028C420
 * Callers:
 *     EtwpTraceIo @ 0x1402146F0 (EtwpTraceIo.c)
 *     EtwTracePageFault @ 0x1404675D6 (EtwTracePageFault.c)
 *     EtwpTraceIoInit @ 0x140468570 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405FEEA0 (EtwpTraceRedirectedIo.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FCB00 (ObpReferenceCurrentDeviceMap.c)
 *     IopGetThreadActiveConsoleId @ 0x140947CAC (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020BFF0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1624) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1624));
}
