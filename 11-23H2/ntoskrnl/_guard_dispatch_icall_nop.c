/*
 * XREFs of _guard_dispatch_icall_nop @ 0x14041A8E0
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403F6700 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403F69C0 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403F6B48 (SymCryptParallelHashSetNextWork.c)
 *     SymCryptHashAppendInternal @ 0x1404030A8 (SymCryptHashAppendInternal.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x140403198 (SymCryptHashCommonPaddingMd4Style.c)
 *     SymCryptFdefIntToModElement @ 0x140404044 (SymCryptFdefIntToModElement.c)
 *     SymCryptFdefIntToModulus @ 0x1404040CC (SymCryptFdefIntToModulus.c)
 *     SymCryptFdefModElementGetValue @ 0x1404043C8 (SymCryptFdefModElementGetValue.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14041A900 (_guard_xfg_dispatch_icall_nop.c)
 *     KeGuardDispatchICall @ 0x140B137A0 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
