/*
 * XREFs of ?StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18033A4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@ABI@@UIXamlExplorerHostChildWindowStatics@89Internal@Windows@ABI@@UIXamlExplorerHostComponent@89Internal@Windows@ABI@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013FB90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18013FB90.c)
 *     ?WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x18033B324 (-WndProc@GamingOverlayExperienceManager@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall GamingOverlayExperienceManager::StaticWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LONG_PTR WindowLongPtrW; // rax
  volatile int *v9; // rdx
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rdi
  signed __int64 v13; // rax
  signed __int64 v14; // rtt

  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  v10 = (volatile signed __int64 *)WindowLongPtrW;
  if ( Msg == 2 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  }
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  v13 = *(_QWORD *)(WindowLongPtrW + 200);
  while ( v13 >= 0 )
  {
    if ( (_DWORD)v13 != 0x7FFFFFFF )
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange64(v10 + 25, v13 + 1, v13);
      if ( v14 != v13 )
        continue;
    }
    goto LABEL_12;
  }
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v13 + 16), v9);
LABEL_12:
  v11 = GamingOverlayExperienceManager::WndProc((GamingOverlayExperienceManager *)v10, hWnd, Msg, wParam, lParam);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindowStatics,ABI::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostComponent,Microsoft::WRL::FtmBase>::Release((__int64)v10);
  return v11;
}
