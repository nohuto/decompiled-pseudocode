/*
 * XREFs of ?find_interface@?$implements@UImmersiveShellComponentsConfiguration@@UIImmersiveShellCreationBehavior@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x18048AE40
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<ImmersiveShellComponentsConfiguration,IImmersiveShellCreationBehavior>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // al
  __int64 v3; // r8

  v2 = winrt::operator==(a2, winrt::impl::guid_v<IImmersiveShellCreationBehavior>);
  return (v3 - 8) & -(__int64)v2;
}
