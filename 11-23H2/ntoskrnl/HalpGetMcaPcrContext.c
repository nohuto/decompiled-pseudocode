/*
 * XREFs of HalpGetMcaPcrContext @ 0x140380334
 * Callers:
 *     HalpCmciInitializeErrorPacket @ 0x1403800E4 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmciInitProcessor @ 0x1403801A8 (HalpCmciInitProcessor.c)
 *     HalpCmciPollProcessor @ 0x140380298 (HalpCmciPollProcessor.c)
 *     HalpHvInitMcaPcrContext @ 0x1403802E4 (HalpHvInitMcaPcrContext.c)
 *     HalpMcaStuckErrorCheck @ 0x1405038AC (HalpMcaStuckErrorCheck.c)
 *     HalpMceHandlerCore @ 0x140503B18 (HalpMceHandlerCore.c)
 *     HalpMceInitializeErrorPacket @ 0x140A8AADC (HalpMceInitializeErrorPacket.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetMcaPcrContext(__int64 a1)
{
  if ( (a1 & 0x100000000LL) == 0 )
    return HalpMcaPcrContextData + 192LL * (unsigned int)a1;
  LODWORD(a1) = a1 & 0x7FFFFFFF;
  return HalpHvVpMcaPcrContextData + 192LL * (unsigned int)((__int64 (__fastcall *)(__int64))qword_140C62540)(a1);
}
