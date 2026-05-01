/*
 * XREFs of ??1ImmersiveShellComponentsConfiguration@@UEAA@XZ @ 0x1803AFCF0
 * Callers:
 *     ??_GImmersiveShellComponentsConfiguration@@UEAAPEAXI@Z @ 0x1803AFE14 (--_GImmersiveShellComponentsConfiguration@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@AEAAXXZ @ 0x18022BD9C (-_Tidy@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndI.c)
 *     ??1ComponentCreator@@QEAA@XZ @ 0x1803AFCB8 (--1ComponentCreator@@QEAA@XZ.c)
 */

void __fastcall ImmersiveShellComponentsConfiguration::~ImmersiveShellComponentsConfiguration(
        ImmersiveShellComponentsConfiguration *this)
{
  ComponentCreator::~ComponentCreator((ImmersiveShellComponentsConfiguration *)((char *)this + 96));
  std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)this + 72);
  std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)this + 48);
  std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::_Tidy((__int64)this + 24);
  winrt::impl::root_implements<SnapLayoutProvider,IInspectable>::~root_implements<SnapLayoutProvider,IInspectable>((__int64)this + 8);
}
