/*
 * XREFs of ?GetWarpAdapterLUID@@YAJPEAU_LUID@@@Z @ 0x1800A2A68
 * Callers:
 *     ?CreateWARPDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z @ 0x1800A28B0 (-CreateWARPDevice@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUID3D11Device@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetWarpAdapterLUID(struct _LUID *a1)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // [rsp+20h] [rbp-168h] BYREF
  void *ppFactory; // [rsp+28h] [rbp-160h] BYREF
  _BYTE v8[296]; // [rsp+30h] [rbp-158h] BYREF
  struct _LUID v9; // [rsp+158h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v6 = 0LL;
  ppFactory = 0LL;
  v2 = CreateDXGIFactory1(&GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a, &ppFactory);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(void *, GUID *, __int64 *))(*(_QWORD *)ppFactory + 216LL))(
           ppFactory,
           &GUID_29038f61_3839_4626_91fd_086879011a05,
           &v6);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 80LL))(v6, v8);
      v3 = v2;
      if ( v2 >= 0 )
      {
        v3 = 0;
        *a1 = v9;
        goto LABEL_9;
      }
      v4 = 24LL;
    }
    else
    {
      v4 = 21LL;
    }
  }
  else
  {
    v4 = 20LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedd3ddevice.cpp",
    (const char *)(unsigned int)v2);
LABEL_9:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v6);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&ppFactory);
  return v3;
}
