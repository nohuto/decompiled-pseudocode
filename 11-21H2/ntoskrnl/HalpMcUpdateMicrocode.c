/*
 * XREFs of HalpMcUpdateMicrocode @ 0x1403B607C
 * Callers:
 *     HalpMcLoadMicrocodeWorker @ 0x14051EFC0 (HalpMcLoadMicrocodeWorker.c)
 *     HalpLoadMicrocodeSerialized @ 0x14090A314 (HalpLoadMicrocodeSerialized.c)
 *     HalpPostSleepMP @ 0x140A500C0 (HalpPostSleepMP.c)
 *     HalpProcInitSystem @ 0x140A54E70 (HalpProcInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x140A62458 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpMcUpdateMicrocode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx

  v3 = 0;
  if ( HalpMcUpdateMicrocodeFuncEx )
  {
    LODWORD(a2) = KeGetPcr()->Prcb.Number;
    LOBYTE(a3) = HalpMcUpdateSelfHosting;
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64))HalpMcUpdateMicrocodeFuncEx)(1LL, a2, a3);
  }
  return v3;
}
