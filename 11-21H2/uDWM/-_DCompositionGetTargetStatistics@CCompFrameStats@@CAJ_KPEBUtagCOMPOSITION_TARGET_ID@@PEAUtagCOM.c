/*
 * XREFs of ?_DCompositionGetTargetStatistics@CCompFrameStats@@CAJ_KPEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180002C84
 * Callers:
 *     ?CollectStats@CCompFrameStats@@IEAAX_K@Z @ 0x180002A1C (-CollectStats@CCompFrameStats@@IEAAX_K@Z.c)
 *     ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180008E80 (-FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TAR.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompFrameStats::_DCompositionGetTargetStatistics(
        __int64 a1,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        struct tagCOMPOSITION_TARGET_STATS *a3)
{
  HMODULE ModuleHandleA; // rax

  ModuleHandleA = (HMODULE)qword_180142408;
  if ( qword_180142408 == -1 )
  {
    ModuleHandleA = GetModuleHandleA("DComp.dll");
    if ( ModuleHandleA )
      ModuleHandleA = (HMODULE)GetProcAddress(ModuleHandleA, "DCompositionGetTargetStatistics");
    qword_180142408 = (__int64)ModuleHandleA;
  }
  if ( ModuleHandleA )
    return ((__int64 (__fastcall *)(__int64, const struct tagCOMPOSITION_TARGET_ID *, struct tagCOMPOSITION_TARGET_STATS *))ModuleHandleA)(
             a1,
             a2,
             a3);
  else
    return 2147942527LL;
}
