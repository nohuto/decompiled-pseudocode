/*
 * XREFs of ?EnsurePresentationBuffer@CDeviceTextureManager@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAUIPresentationBuffer@@@Z @ 0x180098968
 * Callers:
 *     ?CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEAPEAVCCompositionTexture@2@@Z @ 0x1800987B0 (-CreateCompositionTexture@CDeviceTextureManager@DirectComposition@@QEAAJPEAUID3D11Texture2D@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace@AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@_N@1@AEAPEAUID3D11Texture2D@@$$QEAUPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@Z @ 0x1800980EC (--$_Emplace@AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposit.c)
 *     ??0?$com_ptr_t@UIPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIPresentationBuffer@@@Z @ 0x1800983A8 (--0-$com_ptr_t@UIPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIPresentationBuf.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@@2@AEBQEAUID3D11Texture2D@@@Z @ 0x18009933C (-find@-$_Tree@V-$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDeviceTextureManager::EnsurePresentationBuffer(
        DirectComposition::CDeviceTextureManager *this,
        struct ID3D11Texture2D *a2,
        struct IPresentationBuffer **a3)
{
  __int64 *v3; // rdi
  __int64 v6; // rbx
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64 *, struct ID3D11Texture2D *, __int64); // r15
  int v12; // eax
  unsigned int v13; // edi
  struct IPresentationBuffer *v15; // rax
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  int v17; // [rsp+28h] [rbp-18h]
  int v18; // [rsp+2Ch] [rbp-14h]
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IPresentationBuffer *v21; // [rsp+70h] [rbp+30h] BYREF
  struct ID3D11Texture2D *v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = a2;
  v3 = (__int64 *)((char *)this + 64);
  std::_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>::find(
    (char *)this + 64,
    &v21,
    &v22);
  v6 = (__int64)v21;
  if ( v21 != (struct IPresentationBuffer *)*v3 )
    goto LABEL_6;
  v18 = 0;
  v16 = 0LL;
  v17 = 0;
  std::_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>::_Emplace<ID3D11Texture2D * &,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>(
    v3,
    (__int64)&v19);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v16);
  v7 = (__int64 *)*((_QWORD *)this + 3);
  v6 = v19;
  v8 = *v7;
  v9 = v19 + 40;
  v10 = *(_QWORD *)(v19 + 40);
  *(_QWORD *)(v19 + 40) = 0LL;
  v11 = *(__int64 (__fastcall **)(__int64 *, struct ID3D11Texture2D *, __int64))(v8 + 24);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v12 = v11(v7, v22, v9);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\devicetexturemanager.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  else
  {
LABEL_6:
    ++*(_DWORD *)(v6 + 48);
    wil::com_ptr_t<IPresentationBuffer,wil::err_returncode_policy>::com_ptr_t<IPresentationBuffer,wil::err_returncode_policy>(
      &v21,
      *(_QWORD *)(v6 + 40));
    v15 = v21;
    v21 = 0LL;
    *a3 = v15;
    wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v21);
    return 0LL;
  }
}
