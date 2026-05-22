/*
 * XREFs of ?EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceTextureManager@2@@Z @ 0x1800A0AAC
 * Callers:
 *     ?CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionTexture@@@Z @ 0x1800A08F0 (-CreateCompositionTexture@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAPEAUIDCompositionText.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098584 (--1-$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@Z @ 0x180098700 (-Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@.c)
 *     ??$_Emplace@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@_N@1@$$QEAPEAUID3D11Device5@@$$QEAPEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800A0564 (--$_Emplace@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@-$_Tree@V-$_Tmap_tr.c)
 *     ??$_Find_lower_bound@PEAUID3D11Device5@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@AEBQEAUID3D11Device5@@@Z @ 0x1800A0640 (--$_Find_lower_bound@PEAUID3D11Device5@@@-$_Tree@V-$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceT.c)
 *     ??4?$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800A07A8 (--4-$com_ptr_t@VCDeviceTextureManager@DirectComposition@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$QueryInterface@UIDXGIResource@@@IUnknown@@QEAAJPEAPEAUIDXGIResource@@@Z @ 0x1800E94BC (--$QueryInterface@UIDXGIResource@@@IUnknown@@QEAAJPEAPEAUIDXGIResource@@@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::EnsureDeviceTextureManager(
        DirectComposition::CDevice *this,
        struct ID3D11Texture2D *a2,
        struct DirectComposition::CDeviceTextureManager **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  struct ID3D11Device5 *v9; // r10
  struct DirectComposition::CDeviceTextureManager *v10; // rbx
  int v11; // eax
  unsigned __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct DirectComposition::CDeviceTextureManager *v19; // [rsp+88h] [rbp+38h] BYREF

  v14 = 0LL;
  v5 = IUnknown::QueryInterface<IDXGIResource>(a2, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = *v14;
    v13 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, GUID *, unsigned __int64 *))(v7 + 48))(
           v14,
           &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
           &v13);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x162,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
        (const char *)(unsigned int)v8);
LABEL_5:
      wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v13);
      goto LABEL_14;
    }
    v19 = 0LL;
    v15 = v13;
    std::_Tree<std::_Tmap_traits<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *,std::less<ID3D11Device5 *>,std::allocator<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>,0>>::_Find_lower_bound<ID3D11Device5 *>(
      (__int64 *)this + 90,
      (__int64)v16,
      &v15);
    if ( *(_BYTE *)(v17 + 25) || (unsigned __int64)v9 < *(_QWORD *)(v17 + 32) || v17 == *((_QWORD *)this + 90) )
    {
      v19 = 0LL;
      v11 = DirectComposition::CDeviceTextureManager::Create(this, v9, &v19);
      v6 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x16E,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>((__int64 *)&v19);
        goto LABEL_5;
      }
      v10 = v19;
      v15 = v13;
      std::_Tree<std::_Tmap_traits<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *,std::less<ID3D11Device5 *>,std::allocator<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>,0>>::_Emplace<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *>(
        (__int64 *)this + 90,
        (__int64)v16);
    }
    else
    {
      wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::operator=(
        (__int64 *)&v19,
        *(void (__fastcall ****)(_QWORD))(v17 + 40));
      v10 = v19;
    }
    v19 = 0LL;
    *a3 = v10;
    wil::com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>::~com_ptr_t<DirectComposition::CDeviceTextureManager,wil::err_returncode_policy>((__int64 *)&v19);
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v13);
    v6 = 0;
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x160,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
    (const char *)(unsigned int)v5);
LABEL_14:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v14);
  return v6;
}
