/*
 * XREFs of ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180236944
 * Callers:
 *     ?DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801149AC (-DrawShadows@CProjectedShadowScene@@QEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x1801148BC (-SetBlurRadius@CProjectedShadow@@QEAAXM@Z.c)
 *     ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x18011490A (-SetShadowOpacity@CProjectedShadow@@QEAAXM@Z.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180114AC6 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ??2CProjectedShadow@@SAPEAX_K@Z @ 0x18019E0E4 (--2CProjectedShadow@@SAPEAX_K@Z.c)
 *     ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x18023270C (--0CProjectedShadow@@QEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x180234C3C (-Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCP.c)
 *     ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x180234FF8 (-SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z.c)
 *     ??$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@?$map@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBQEAVCProjectedShadowCaster@@@Z @ 0x180235DE0 (--$_Try_emplace@AEBQEAVCProjectedShadowCaster@@$$V@-$map@PEAVCProjectedShadowCaster@@V-$com_ptr_.c)
 *     ??0?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProjectedShadow@@@Z @ 0x180235EAC (--0-$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCProjectedShadow@@@.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18023610C (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x180236154 (-CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x180236194 (-CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180236374 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ?FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@@Z @ 0x18023642C (-FindReceiverEntry@CProjectedShadowScene@@AEBAPEAUReceiverEntry@1@PEBVCProjectedShadowReceiver@@.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x1802364F8 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1802366BC (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1802368A0 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z @ 0x180237684 (-UpdateReceiverEntry@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAUReceiverEntry@1@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAVCProjectedShadowCaster@@@Z @ 0x1802378B0 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180261004 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1802AA6D0 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 */

__int64 __fastcall CProjectedShadowScene::PrepareShadows(
        struct CComposition **this,
        struct CDrawingContext *a2,
        struct CProjectedShadowReceiver *a3)
{
  const struct CVisualTree *v3; // r13
  struct CVisual *v7; // rax
  struct CComposition *v8; // rdx
  CVisual *v9; // rax
  __int64 **TreeData; // rax
  __int64 **ReceiverEntry; // r14
  CProjectedShadowScene *v12; // rcx
  int updated; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 result; // rax
  struct CComposition *v17; // rcx
  struct CComposition *v18; // rbx
  struct CCompositionLight *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  float z; // xmm6_4
  float v23; // xmm7_4
  const struct CVisualTree *v24; // rdx
  CProjectedShadowScene *v25; // rcx
  float v26; // xmm0_4
  CProjectedShadow *v27; // r15
  CProjectedShadow *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  struct CCompositionLight *v36; // r12
  const struct CVisualTree *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  const struct CVisualTree *v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct CMILMatrix *v43; // [rsp+28h] [rbp-E0h]
  struct CMILMatrix *v44; // [rsp+28h] [rbp-E0h]
  unsigned int v45; // [rsp+28h] [rbp-E0h]
  CVisual *v46; // [rsp+38h] [rbp-D0h]
  __int64 v47[3]; // [rsp+40h] [rbp-C8h] BYREF
  struct CCompositionLight *v48; // [rsp+58h] [rbp-B0h]
  struct CComposition *v49; // [rsp+60h] [rbp-A8h]
  __int128 v50; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v51; // [rsp+78h] [rbp-90h]
  __int128 v52; // [rsp+88h] [rbp-80h]
  __int128 v53; // [rsp+98h] [rbp-70h]
  int v54; // [rsp+A8h] [rbp-60h]
  __int128 v55; // [rsp+ACh] [rbp-5Ch] BYREF
  __int128 v56; // [rsp+BCh] [rbp-4Ch]
  __int128 v57; // [rsp+CCh] [rbp-3Ch]
  __int128 v58; // [rsp+DCh] [rbp-2Ch]
  int v59; // [rsp+ECh] [rbp-1Ch]
  _OWORD v60[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v61; // [rsp+138h] [rbp+30h]
  _OWORD v62[4]; // [rsp+148h] [rbp+40h] BYREF
  int v63; // [rsp+188h] [rbp+80h]
  _OWORD v64[4]; // [rsp+198h] [rbp+90h] BYREF
  int v65; // [rsp+1D8h] [rbp+D0h]
  _OWORD v66[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v67; // [rsp+228h] [rbp+120h]
  struct D2D_VECTOR_4F v68; // [rsp+238h] [rbp+130h] BYREF
  char v69[16]; // [rsp+248h] [rbp+140h] BYREF
  char v70[64]; // [rsp+258h] [rbp+150h] BYREF
  int v71; // [rsp+2E0h] [rbp+1D8h]
  struct CProjectedShadowCaster *v73; // [rsp+2F0h] [rbp+1E8h] BYREF

  v3 = (const struct CVisualTree *)*((_QWORD *)a2 + 991);
  v46 = (CVisual *)*((_QWORD *)a3 + 8);
  if ( CProjectedShadowScene::IsEmptyProjection((CProjectedShadowScene *)this)
    || (v7 = (struct CVisual *)(*(__int64 (__fastcall **)(struct CComposition *))(*(_QWORD *)this[12] + 200LL))(this[12]),
        !CProjectedShadowScene::IsValidVisual(v3, v7)) )
  {
    CProjectedShadowScene::ClearShadows((CProjectedShadowScene *)this, 1);
    return 0LL;
  }
  else
  {
    if ( this[13] )
    {
      v9 = (CVisual *)(*(__int64 (__fastcall **)(struct CComposition *))(*(_QWORD *)this[12] + 200LL))(this[12]);
      TreeData = CVisual::FindTreeData(v9, v3);
      v8 = this[13];
      if ( v8 <= (struct CComposition *)TreeData[34] )
        v8 = (struct CComposition *)TreeData[34];
    }
    else
    {
      v8 = (struct CComposition *)*((_QWORD *)this[2] + 62);
    }
    this[13] = v8;
    ReceiverEntry = CProjectedShadowScene::FindReceiverEntry((CProjectedShadowScene *)this, a3);
    updated = CProjectedShadowScene::UpdateReceiverEntry(
                v12,
                a2,
                (struct CProjectedShadowScene::ReceiverEntry *)ReceiverEntry);
    v15 = updated;
    if ( updated < 0 )
    {
      v45 = 819;
LABEL_43:
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, updated, v45);
    }
    else
    {
      result = 0LL;
      if ( !*((_BYTE *)ReceiverEntry + 100) )
        return result;
      v17 = this[8];
      v49 = v17;
      v18 = *(struct CComposition **)v17;
      while ( v18 != v17 )
      {
        v71 = result + 1;
        if ( (int)result + 1 > 5 )
          break;
        v73 = (struct CProjectedShadowCaster *)*((_QWORD *)v18 + 2);
        v19 = (struct CCompositionLight *)*((_QWORD *)v73 + 8);
        v48 = v19;
        if ( v19 == v46 )
          goto LABEL_34;
        v15 = CProjectedShadowScene::UpdateCasterEntry(
                (CProjectedShadowScene *)this,
                v3,
                (struct CComposition *)((char *)v18 + 16));
        if ( (v15 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v15, 0x34Fu);
          return v15;
        }
        if ( !*((_BYTE *)v18 + 168) )
          goto LABEL_34;
        v65 = 0;
        updated = CVisual::CalcSrcToDestVisualTransform(v3, v20, (__int64)v19, v46, (__int64)v64);
        v15 = updated;
        if ( updated < 0 )
        {
          v45 = 856;
          goto LABEL_43;
        }
        *(_OWORD *)&v47[1] = _xmm;
        z = CMILMatrix::Transform4DVector((CMILMatrix *)v64, &v68, (const struct D2D_VECTOR_4F *)&v47[1])->z;
        v23 = CProjectedShadowScene::CalculateOpacity((CProjectedShadowScene *)this, z);
        v26 = CProjectedShadowScene::CalculateBlurRadius((CProjectedShadowScene *)this, z);
        if ( COERCE_FLOAT(LODWORD(v23) & _xmm) >= 0.0000011920929
          && CProjectedShadowScene::IsCasterInBetweenLightAndReceiver(
               v25,
               v24,
               (struct CComposition *)((char *)v18 + 16),
               (const struct CProjectedShadowScene::ReceiverEntry *)ReceiverEntry,
               LODWORD(v26)) )
        {
          v27 = *(CProjectedShadow **)(*(_QWORD *)std::map<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>::_Try_emplace<CProjectedShadowCaster * const &,>(
                                                    (__int64 *)ReceiverEntry + 1,
                                                    (__int64)v69,
                                                    (unsigned __int64 *)&v73)
                                     + 40LL);
          if ( !v27 )
          {
            v28 = (CProjectedShadow *)CProjectedShadow::operator new();
            if ( v28 )
              v28 = CProjectedShadow::CProjectedShadow(v28, this[2]);
            wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>(
              v47,
              (__int64)v28);
            v27 = (CProjectedShadow *)v47[0];
            v29 = CProjectedShadow::Initialize(
                    (CProjectedShadow *)v47[0],
                    (struct CProjectedShadowScene *)this,
                    v73,
                    a3);
            v15 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0LL, v29, 0x36Au);
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v47);
              return v15;
            }
            v31 = std::map<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>::_Try_emplace<CProjectedShadowCaster * const &,>(
                    (__int64 *)ReceiverEntry + 1,
                    (__int64)v70,
                    (unsigned __int64 *)&v73);
            v32 = *(_QWORD *)v31;
            v33 = *(_QWORD *)(*(_QWORD *)v31 + 40LL);
            v47[1] = v33;
            *(_QWORD *)(v32 + 40) = v27;
            if ( v27 )
            {
              (*(void (__fastcall **)(CProjectedShadow *))(*(_QWORD *)v27 + 8LL))(v27);
              v33 = v47[1];
            }
            if ( v33 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v47);
          }
          CProjectedShadow::SetShadowOpacity(v27, v23);
          CProjectedShadow::SetBlurRadius(v27, v26);
          v35 = *((_QWORD *)v27 + 13);
          if ( v35 < (unsigned __int64)this[13]
            || v35 < (unsigned __int64)ReceiverEntry[3]
            || v35 < *((_QWORD *)v18 + 3) )
          {
            v36 = v48;
            v67 = 0;
            updated = CVisual::CalcSrcToDestVisualTransform(v3, v34, (__int64)v46, v48, (__int64)v66);
            v15 = updated;
            if ( updated < 0 )
            {
              v45 = 892;
              goto LABEL_43;
            }
            v37 = this[12];
            v63 = 0;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v37, v46, (struct CVisual *)v62, v43);
            v15 = updated;
            if ( updated < 0 )
            {
              v45 = 895;
              goto LABEL_43;
            }
            v50 = v64[0];
            v54 = v65;
            v51 = v64[1];
            v52 = v64[2];
            v53 = v64[3];
            CMILMatrix::Multiply((CMILMatrix *)&v50, (const struct CMILMatrix *)v62, v38, v39);
            v40 = this[12];
            v61 = 0;
            v62[0] = v50;
            v63 = v54;
            v62[1] = v51;
            v62[2] = v52;
            v62[3] = v53;
            updated = ShadowHelpers::GetProjectionOntoVisualMatrix(v3, v40, v36, (struct CVisual *)v60, v44);
            v15 = updated;
            if ( updated < 0 )
            {
              v45 = 899;
              goto LABEL_43;
            }
            v55 = v66[0];
            v59 = v67;
            v56 = v66[1];
            v57 = v66[2];
            v58 = v66[3];
            CMILMatrix::Multiply((CMILMatrix *)&v55, (const struct CMILMatrix *)v60, v41, v42);
            v60[0] = v55;
            v61 = v59;
            v60[1] = v56;
            v60[2] = v57;
            v60[3] = v58;
            CProjectedShadow::SetTransforms(
              v27,
              (const struct CMILMatrix *)v64,
              (const struct CMILMatrix *)v62,
              (const struct CMILMatrix *)v60);
          }
        }
        else
        {
LABEL_34:
          std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::erase(
            ReceiverEntry + 1,
            &v73);
        }
        v18 = *(struct CComposition **)v18;
        LODWORD(result) = v71;
        v17 = v49;
      }
    }
    return v15;
  }
}
