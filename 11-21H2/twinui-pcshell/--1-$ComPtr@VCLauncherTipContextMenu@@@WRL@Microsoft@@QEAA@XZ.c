/*
 * XREFs of ??1?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@QEAA@XZ @ 0x1805D838C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CLauncherTipContextMenu_IUnknown__::_1_::dtor$2 @ 0x180216C6B (_Microsoft--WRL--Details--MakeAndInitialize_CLauncherTipContextMenu_IUnknown__--_1_--dtor$2.c)
 *     _CWRLImpWndProc_CLauncherTipContextMenu_::s_WndProcBase_::_1_::dtor$0 @ 0x180239F27 (_CWRLImpWndProc_CLauncherTipContextMenu_--s_WndProcBase_--_1_--dtor$0.c)
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$1 @ 0x1805DB000 (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D9F70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801D9F70.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::~ComPtr<CLauncherTipContextMenu>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,ILauncherTipContextMenu,ILauncherTipContextMenuSettingChangeListener,ILauncherTipContextMenuMigration>::Release(
             result,
             a2);
  }
  return result;
}
