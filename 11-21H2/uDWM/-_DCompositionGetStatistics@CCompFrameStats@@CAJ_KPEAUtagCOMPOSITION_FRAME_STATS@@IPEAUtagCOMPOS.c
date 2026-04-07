/*
 * XREFs of ?_DCompositionGetStatistics@CCompFrameStats@@CAJ_KPEAUtagCOMPOSITION_FRAME_STATS@@IPEAUtagCOMPOSITION_TARGET_ID@@PEAI@Z @ 0x180002CEC
 * Callers:
 *     ?PrimaryTargetId@CCompFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180002910 (-PrimaryTargetId@CCompFrameStats@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z.c)
 *     ?IsMultiMon@CCompFrameStats@@UEBA_NXZ @ 0x1800029B0 (-IsMultiMon@CCompFrameStats@@UEBA_NXZ.c)
 *     ?CollectStats@CCompFrameStats@@IEAAX_K@Z @ 0x180002A1C (-CollectStats@CCompFrameStats@@IEAAX_K@Z.c)
 *     ?FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180008E80 (-FrameTargetData@CCompFrameStats@@UEBA_N_KPEAUtagCOMPOSITION_FRAME_STATS@@PEAUtagCOMPOSITION_TAR.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompFrameStats::_DCompositionGetStatistics(
        __int64 a1,
        struct tagCOMPOSITION_FRAME_STATS *a2,
        unsigned int a3,
        struct tagCOMPOSITION_TARGET_ID *a4,
        unsigned int *a5)
{
  FARPROC ProcAddress; // r11
  HMODULE ModuleHandleA; // rax

  ProcAddress = (FARPROC)qword_180142400;
  if ( qword_180142400 == -1 )
  {
    ModuleHandleA = GetModuleHandleA("DComp.dll");
    if ( ModuleHandleA )
    {
      ProcAddress = GetProcAddress(ModuleHandleA, "DCompositionGetStatistics");
      qword_180142400 = (__int64)ProcAddress;
    }
    else
    {
      ProcAddress = 0LL;
      qword_180142400 = 0LL;
    }
  }
  if ( ProcAddress )
    return ((__int64 (__fastcall *)(__int64, struct tagCOMPOSITION_FRAME_STATS *, _QWORD, struct tagCOMPOSITION_TARGET_ID *, unsigned int *))ProcAddress)(
             a1,
             a2,
             a3,
             a4,
             a5);
  else
    return 2147942527LL;
}
