/*
 * XREFs of ?ShouldCreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x1803B0F30
 * Callers:
 *     <none>
 * Callees:
 *     ?at@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@_K@Z @ 0x1803B1510 (-at@-$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V-$allocator@UClassIdAndInfo.c)
 */

__int64 __fastcall ImmersiveShellComponentsConfiguration::ShouldCreateComponent(
        ImmersiveShellComponentsConfiguration *this,
        unsigned int a2,
        int *a3,
        struct _GUID *a4)
{
  struct _GUID *v6; // rax

  v6 = (struct _GUID *)std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::at((char *)this + 24, a2);
  *a3 = 1;
  *a4 = *v6;
  return 0LL;
}
