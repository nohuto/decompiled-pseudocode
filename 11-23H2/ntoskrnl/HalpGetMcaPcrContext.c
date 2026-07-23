/*
 * XREFs of HalpGetMcaPcrContext @ 0x1403804D4
 * Callers:
 *     HalpCmciInitializeErrorPacket @ 0x140380284 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x140380348 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x140380438 (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x140380484 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaStuckErrorCheck @ 0x140503DFC (HalpMcaStuckErrorCheck.c)
 *     HalpMceHandlerCore @ 0x140504068 (HalpMceHandlerCore.c)
 *     HalpMceInitializeErrorPacket @ 0x140A8AADC (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C62540)(a1);
}
