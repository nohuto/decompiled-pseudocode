/*
 * XREFs of ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18017DBE0
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@WRL@Microsoft@@UEAA@XZ @ 0x1801D7794 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIL.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801D834C (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UI.c)
 * Callees:
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1800D2460 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

void __fastcall CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(
        CImmersiveShellComponentWithSite *this)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponentWithSite *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
