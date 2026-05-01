/*
 * XREFs of ??4?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800482C4
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800481CC (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x1800D0870 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 *     ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1801663B0 (-SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersive.c)
 *     _lambda_00a99e92ff34f3b9a38e1d2a681d0525_::operator() @ 0x18039708C (_lambda_00a99e92ff34f3b9a38e1d2a681d0525_--operator().c)
 *     _lambda_272e15244083584e7f88f2c6a1e1f4d3_::operator() @ 0x1803A7164 (_lambda_272e15244083584e7f88f2c6a1e1f4d3_--operator().c)
 *     ?Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z @ 0x1803C8110 (-Reinitialize@CTaskWindow@@UEAAJAEBUTASKWINDOW_REINIT_DATA@@@Z.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1803C81E8 (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
  }
  return a1;
}
