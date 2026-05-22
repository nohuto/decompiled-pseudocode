/*
 * XREFs of ?AdapterFromLUID@@YAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1800A543C
 * Callers:
 *     ?CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUSharedDevice@12345@@Z @ 0x1800A57D8 (-CreateNewDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@AEAAJU_LUID@@PEAPEAUShared.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AdapterFromLUID(struct _LUID a1, struct IDXGIAdapter1 **a2)
{
  HRESULT v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = CreateDXGIFactory1(&GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(void *, struct _LUID, GUID *, struct IDXGIAdapter1 **))(*(_QWORD *)v9 + 208LL))(
           v9,
           a1,
           &GUID_29038f61_3839_4626_91fd_086879011a05,
           a2);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 19LL;
  }
  else
  {
    v6 = 18LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtsharedd3ddevicepool.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v9);
  return v5;
}
