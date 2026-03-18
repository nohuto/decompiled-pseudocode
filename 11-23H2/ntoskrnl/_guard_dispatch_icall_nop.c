/*
 * XREFs of _guard_dispatch_icall_nop @ 0x14041A550
 * Callers:
 *     SymCryptParallelHashProcess @ 0x1403F6520 (SymCryptParallelHashProcess.c)
 *     SymCryptParallelHashProcess_serial @ 0x1403F67E0 (SymCryptParallelHashProcess_serial.c)
 *     SymCryptParallelHashSetNextWork @ 0x1403F6968 (SymCryptParallelHashSetNextWork.c)
 *     SymCryptHashAppendInternal @ 0x140402EC8 (SymCryptHashAppendInternal.c)
 *     SymCryptHashCommonPaddingMd4Style @ 0x140402FB8 (SymCryptHashCommonPaddingMd4Style.c)
 *     SymCryptFdefIntToModElement @ 0x140403E64 (SymCryptFdefIntToModElement.c)
 *     SymCryptFdefIntToModulus @ 0x140403EEC (SymCryptFdefIntToModulus.c)
 *     SymCryptFdefModElementGetValue @ 0x1404041E8 (SymCryptFdefModElementGetValue.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14041A570 (_guard_xfg_dispatch_icall_nop.c)
 *     KeGuardDispatchICall @ 0x140B137A0 (KeGuardDispatchICall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall guard_dispatch_icall_nop()
{
  __int64 (*v0)(void); // rax

  return v0();
}
