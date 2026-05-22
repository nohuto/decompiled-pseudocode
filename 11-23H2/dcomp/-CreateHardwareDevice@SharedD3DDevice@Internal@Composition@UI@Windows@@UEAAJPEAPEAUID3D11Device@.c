/*
 * XREFs of ?CreateHardwareDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z @ 0x1800A2830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPrimaryAdapterLUID@@YAJPEAU_LUID@@@Z @ 0x1800A2924 (-GetPrimaryAdapterLUID@@YAJPEAU_LUID@@@Z.c)
 *     ?CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LUID@@PEAPEAUID3D11Device@@@Z @ 0x1800A5B04 (-CreateSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAAJPEAUIUnknown@@U_LU.c)
 *     ?Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ @ 0x1800A60EC (-Instance@SharedD3DDevicePool@Internal@Composition@UI@Windows@@SAPEAV12345@XZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDevice::CreateHardwareDevice(
        struct IUnknown **this,
        struct ID3D11Device **a2)
{
  int PrimaryAdapterLUID; // eax
  unsigned int v5; // ebx
  Windows::UI::Composition::Internal::SharedD3DDevicePool *v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _LUID v9; // [rsp+40h] [rbp+18h] BYREF

  PrimaryAdapterLUID = GetPrimaryAdapterLUID(&v9);
  v5 = PrimaryAdapterLUID;
  if ( PrimaryAdapterLUID >= 0 )
  {
    v7 = Windows::UI::Composition::Internal::SharedD3DDevicePool::Instance();
    return Windows::UI::Composition::Internal::SharedD3DDevicePool::CreateSharedDevice(v7, this[3], v9, a2);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedd3ddevice.cpp",
      (const char *)(unsigned int)PrimaryAdapterLUID);
    return v5;
  }
}
