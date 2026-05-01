/*
 * XREFs of _lambda_9bfc867a9c7100a4740d0e4b48179e18_::__lambda_9bfc867a9c7100a4740d0e4b48179e18_ @ 0x1805D8368
 * Callers:
 *     _CLauncherTipContextMenu::_EnsureMenu_::_1_::dtor$2 @ 0x1805DB00C (_CLauncherTipContextMenu--_EnsureMenu_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D9F70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801D9F70.c)
 */

__int64 __fastcall lambda_9bfc867a9c7100a4740d0e4b48179e18_::__lambda_9bfc867a9c7100a4740d0e4b48179e18_(
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
