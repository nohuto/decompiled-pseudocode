/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800A8380
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800A5570 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x18010782C (-CreateKeyboardInputInfo@Win32kInterop@@SA-AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@.c)
 *     ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x180123B80 (-GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x1801AAB60 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ??0HeatDisplayOcclusionRect@@QEAA@AEBUtagRECT@@0QEBG@Z @ 0x1801B0CA0 (--0HeatDisplayOcclusionRect@@QEAA@AEBUtagRECT@@0QEBG@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x1800A846C (StringCopyWorkerW.c)
 */

HRESULT __fastcall StringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  HRESULT result; // eax
  size_t v4; // [rsp+20h] [rbp-18h]

  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v4);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
