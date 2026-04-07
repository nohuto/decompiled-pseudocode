/*
 * XREFs of ?_DCompositionGetFrameId@CCompFrameStats@@CAJW4COMPOSITION_FRAME_ID_TYPE@@PEA_K@Z @ 0x180002E0C
 * Callers:
 *     ?WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z @ 0x180002D7C (-WaitForCompletedFrameStats@CCompFrameStats@@IEAA_N_KI@Z.c)
 *     ?CurrentFrameId@CCompFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z @ 0x180002DE0 (-CurrentFrameId@CCompFrameStats@@UEBA_KW4COMPOSITION_FRAME_ID_TYPE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompFrameStats::_DCompositionGetFrameId(unsigned int a1, __int64 a2)
{
  HMODULE ModuleHandleA; // rax

  ModuleHandleA = (HMODULE)qword_1801423F8;
  if ( qword_1801423F8 == -1 )
  {
    ModuleHandleA = GetModuleHandleA("DComp.dll");
    if ( ModuleHandleA )
      ModuleHandleA = (HMODULE)GetProcAddress(ModuleHandleA, "DCompositionGetFrameId");
    qword_1801423F8 = (__int64)ModuleHandleA;
  }
  if ( ModuleHandleA )
    return ((__int64 (__fastcall *)(_QWORD, __int64))ModuleHandleA)(a1, a2);
  else
    return 2147942527LL;
}
