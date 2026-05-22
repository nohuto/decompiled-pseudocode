/*
 * XREFs of ?Initialize@CCompositionTexture@DirectComposition@@IEAAJXZ @ 0x1800A00BC
 * Callers:
 *     ?Create@CCompositionTexture@DirectComposition@@SAJPEAVCDeviceTextureManager@2@PEAUIPresentationBuffer@@PEAUIPresentationSurface@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUID3D11Texture2D@@PEAPEAV12@@Z @ 0x18009FDBC (-Create@CCompositionTexture@DirectComposition@@SAJPEAVCDeviceTextureManager@2@PEAUIPresentationB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionTexture::Initialize(DirectComposition::CCompositionTexture *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v7[4]; // [rsp+28h] [rbp-48h] BYREF
  _DWORD v8[12]; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v6 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 4))(
    *((_QWORD *)this + 4),
    &GUID_2bfd280a_9471_4cf1_8d64_c33722820711,
    &v6);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v6);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 32LL))(
         *((_QWORD *)this + 4),
         *((_QWORD *)this + 5));
  if ( v2 < 0 )
  {
    v3 = 27LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\compositiontexture.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 6) + 80LL))(*((_QWORD *)this + 6), v8);
  v5 = *((_QWORD *)this + 4);
  v7[0] = 0;
  v7[1] = 0;
  v7[2] = v8[0];
  v7[3] = v8[1];
  v2 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 56LL))(v5, v7);
  if ( v2 < 0 )
  {
    v3 = 33LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), 3LL);
  if ( v2 < 0 )
  {
    v3 = 36LL;
    goto LABEL_3;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 40LL))(*((_QWORD *)this + 4), 0LL);
  if ( v2 < 0 )
  {
    v3 = 37LL;
    goto LABEL_3;
  }
  return 0LL;
}
