/*
 * XREFs of ?at@?$vector@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@V?$allocator@UClassIdAndInfo@ImmersiveShellComponentsConfiguration@@@std@@@std@@QEAAAEAUClassIdAndInfo@ImmersiveShellComponentsConfiguration@@_K@Z @ 0x18048ADEC
 * Callers:
 *     ?CreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18048A350 (-CreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreatePerMonitorComponent@ImmersiveShellComponentsConfiguration@@UEAAJHIAEBU_GUID@@PEAPEAX@Z @ 0x18048A3F0 (-CreatePerMonitorComponent@ImmersiveShellComponentsConfiguration@@UEAAJHIAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ShouldCreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x18048AB00 (-ShouldCreateComponent@ImmersiveShellComponentsConfiguration@@UEAAJIPEAHPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<ImmersiveShellComponentsConfiguration::ClassIdAndInfo>::at(
        __int64 *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = *a1;
  if ( 0xAAAAAAAAAAAAAAABuLL * ((a1[1] - *a1) >> 3) <= a2 )
  {
    std::_Xout_of_range("invalid vector subscript");
    __debugbreak();
  }
  return v2 + 24 * a2;
}
