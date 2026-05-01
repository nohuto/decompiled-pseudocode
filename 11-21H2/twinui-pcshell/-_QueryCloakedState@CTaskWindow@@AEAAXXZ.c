/*
 * XREFs of ?_QueryCloakedState@CTaskWindow@@AEAAXXZ @ 0x18003D618
 * Callers:
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x18003D580 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18006A330 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800EA0F8 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::_QueryCloakedState(CTaskWindow *this)
{
  HWND v2; // rax
  CApplicationManagerUtility *v3; // rbx
  HWND v4; // rdx
  int pvAttribute; // [rsp+30h] [rbp+8h] BYREF

  v2 = (HWND)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
  v3 = (CApplicationManagerUtility *)v2;
  if ( v2 && DwmGetWindowAttribute(v2, 0xEu, &pvAttribute, 4u) >= 0 && CApplicationManagerUtility::IsValidWindow(v3, v4) )
    *((_BYTE *)this + 64) = (pvAttribute & 2) != 0;
}
