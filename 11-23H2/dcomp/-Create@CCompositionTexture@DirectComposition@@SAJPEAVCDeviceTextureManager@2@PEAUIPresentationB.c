/*
 * XREFs of ?Create@CCompositionTexture@DirectComposition@@SAJPEAVCDeviceTextureManager@2@PEAUIPresentationBuffer@@PEAUIPresentationSurface@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUID3D11Texture2D@@PEAPEAV12@@Z @ 0x18009FDBC
 * Callers:
 *     ?CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEAPEAVCCompositionTexture@2@@Z @ 0x1800987B0 (-CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCCompositionTexture@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionTexture@DirectComposition@@@Z @ 0x18009FB3C (--0-$com_ptr_t@VCCompositionTexture@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@PE.c)
 *     ??0CCompositionTexture@DirectComposition@@AEAA@PEAVCDeviceTextureManager@1@PEAUIPresentationBuffer@@PEAUIPresentationSurface@@AEAV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUID3D11Texture2D@@@Z @ 0x18009FB78 (--0CCompositionTexture@DirectComposition@@AEAA@PEAVCDeviceTextureManager@1@PEAUIPresentationBuff.c)
 *     ?Initialize@CCompositionTexture@DirectComposition@@IEAAJXZ @ 0x1800A00BC (-Initialize@CCompositionTexture@DirectComposition@@IEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CCompositionTexture::Create(
        void (__fastcall ***a1)(_QWORD),
        __int64 a2,
        __int64 a3,
        void **a4,
        __int64 a5,
        DirectComposition::CCompositionTexture **a6)
{
  __int64 v10; // rax
  DirectComposition::CCompositionTexture *v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // eax
  DirectComposition::CCompositionTexture *v17[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = (__int64)operator new(0x50uLL);
  if ( v10 )
    v10 = DirectComposition::CCompositionTexture::CCompositionTexture(v10, a1, a2, a3, a4, a5);
  wil::com_ptr_t<DirectComposition::CCompositionTexture,wil::err_returncode_policy>::com_ptr_t<DirectComposition::CCompositionTexture,wil::err_returncode_policy>(
    v17,
    v10);
  v11 = v17[0];
  if ( v17[0] )
  {
    v15 = DirectComposition::CCompositionTexture::Initialize(v17[0]);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v17[0] = 0LL;
      v12 = 0;
      *a6 = v11;
      goto LABEL_9;
    }
    v14 = (unsigned int)v15;
    v13 = 61LL;
  }
  else
  {
    v12 = -2147024882;
    v13 = 58LL;
    v14 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\compositiontexture.cpp",
    (const char *)v14);
LABEL_9:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)v17);
  return v12;
}
