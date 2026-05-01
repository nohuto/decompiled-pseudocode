/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801D834C
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@WRL@Microsoft@@WBI@EAAPEAXI@Z @ 0x18020FFD0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_18020FFD0.c)
 * Callees:
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18017DBE0 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

CImmersiveShellComponentWithSite *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,ILauncherTipContextMenu,ILauncherTipContextMenuSettingChangeListener,ILauncherTipContextMenuMigration>::`scalar deleting destructor'(
        CImmersiveShellComponentWithSite *a1,
        char a2)
{
  *((_DWORD *)a1 + 29) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
