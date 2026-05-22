/*
 * XREFs of ?Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@Z @ 0x180098700
 * Callers:
 *     ?EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceTextureManager@2@@Z @ 0x1800A0AAC (-EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800983E4 (--0-$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ??0CDeviceTextureManager@DirectComposition@@QEAA@PEAVCDevice@1@PEAUID3D11Device5@@@Z @ 0x180098420 (--0CDeviceTextureManager@DirectComposition@@QEAA@PEAVCDevice@1@PEAUID3D11Device5@@@Z.c)
 *     ??1?$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098584 (--1-$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?Initialize@CDeviceTextureManager@DirectComposition@@AEAAJXZ @ 0x180098A88 (-Initialize@CDeviceTextureManager@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CDeviceTextureManager::Create(
        struct DirectComposition::CDevice *a1,
        struct ID3D11Device5 *a2,
        struct DirectComposition::CDeviceTextureManager **a3)
{
  DirectComposition::CDeviceTextureManager *v6; // rax
  struct DirectComposition::CDeviceTextureManager *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DirectComposition::CDeviceTextureManager *v14; // [rsp+48h] [rbp+20h] BYREF

  v6 = (DirectComposition::CDeviceTextureManager *)operator new(0x68uLL);
  if ( v6 )
    v6 = DirectComposition::CDeviceTextureManager::CDeviceTextureManager(v6, a1, a2);
  wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>(
    &v14,
    (void (__fastcall ***)(_QWORD))v6);
  v7 = v14;
  if ( v14 )
  {
    v11 = DirectComposition::CDeviceTextureManager::Initialize(v14);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v14 = 0LL;
      v8 = 0;
      *a3 = v7;
      goto LABEL_9;
    }
    v10 = (unsigned int)v11;
    v9 = 24LL;
  }
  else
  {
    v8 = -2147024882;
    v9 = 21LL;
    v10 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\devicetexturemanager.cpp",
    (const char *)v10);
LABEL_9:
  wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>((__int64 *)&v14);
  return v8;
}
