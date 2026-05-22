/*
 * XREFs of ?SendHeadReport@SpatialRimDeviceCollection@@UEAAJKAEBUHeadInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x1800DB180
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAULegacyInputInfo@@@Z @ 0x1800CDE1C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendHeadReport(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct Windows::UI::Input::Spatial::Internal::HeadInputDataMsg *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15[12]; // [rsp+30h] [rbp-BE8h] BYREF
  char v16; // [rsp+60h] [rbp-BB8h]
  __int128 v17; // [rsp+B70h] [rbp-A8h]
  __int128 v18; // [rsp+B80h] [rbp-98h]
  __int128 v19; // [rsp+B90h] [rbp-88h]
  __int128 v20; // [rsp+BA0h] [rbp-78h]
  __int128 v21; // [rsp+BB0h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+C18h] [rbp+0h]

  memset_0(v15, 0, 0xBC0uLL);
  v15[6] = 3008;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 8, 0x20000, a2, (__int64)v15);
  if ( v6 < 0 )
  {
    v7 = 796LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *(_OWORD *)a3;
  v10 = *((_QWORD *)this + 2);
  v11 = *((_OWORD *)a3 + 1);
  v16 = 1;
  v17 = v9;
  v12 = *((_OWORD *)a3 + 2);
  v18 = v11;
  v13 = *((_OWORD *)a3 + 3);
  v19 = v12;
  v14 = *((_OWORD *)a3 + 4);
  v20 = v13;
  v21 = v14;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 24LL))(v10, v15);
  if ( v6 < 0 )
  {
    v7 = 802LL;
    goto LABEL_3;
  }
  return 0LL;
}
