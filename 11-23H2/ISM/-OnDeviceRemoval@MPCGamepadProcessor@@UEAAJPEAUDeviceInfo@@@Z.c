/*
 * XREFs of ?OnDeviceRemoval@MPCGamepadProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801E3D80
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800C7BA0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 */

__int64 __fastcall MPCGamepadProcessor::OnDeviceRemoval(MPCGamepadProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = MPCInputProviderBase::OnDeviceRemoval(this, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x68,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v4,
      v6);
  return (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 458) + 40LL))(
           *((_QWORD *)this + 458),
           a2);
}
