/*
 * XREFs of ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180233D94
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180264D88 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C904 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EC838 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x180119D50 (--B-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x18022794C (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802279BC (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180227B94 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x180228140 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 *     ??$?4VCExpressionForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForce@@@Z @ 0x18022FDB4 (--$-4VCExpressionForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForc.c)
 *     ??$?4VCScalarForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScalarForce@@@12@@Z @ 0x18022FE54 (--$-4VCScalarForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCScalarFo.c)
 *     ??1?$ComPtr@VCScalarForce@@@WRL@Microsoft@@QEAA@XZ @ 0x1802302CC (--1-$ComPtr@VCScalarForce@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x180232014 (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x1802345D0 (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x18023C60C (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18026E610 (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x180274550 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x1802757A0 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x180275974 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180275AE8 (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::SelectInertiaModifierForAxis(
        __int64 a1,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  __int64 v5; // r13
  __int64 (__fastcall ***v6)(_QWORD); // rsi
  struct CExpressionValueStack *v9; // r14
  __int64 v10; // rbx
  int v11; // r12d
  __int64 v12; // rax
  int IsAnyConditionSatisfied; // eax
  __int64 v14; // rcx
  unsigned int v15; // r14d
  int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // r14d
  int v20; // r14d
  struct CBaseExpression *v21; // rbx
  __int64 v22; // rax
  CMotion *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  CMotion *v26; // rax
  int ForceForAxis; // eax
  __int64 v28; // rcx
  __int64 (__fastcall ***v29)(_QWORD); // rax
  LPVOID v31; // r14
  CMotion *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  struct IAccelerator *v37; // rax
  __int64 v38; // rcx
  struct IAccelerator *v39; // rbx
  int v40; // xmm1_4
  int v41; // xmm0_4
  __int64 v42; // rax
  CScalarForce *v43; // rax
  struct CBaseExpression *v44; // rax
  struct CBaseExpression *v45; // rbx
  CMotion *v46; // rax
  unsigned int v47; // [rsp+20h] [rbp-40h]
  __int64 (__fastcall ***v48)(_QWORD); // [rsp+30h] [rbp-30h] BYREF
  __int64 v49; // [rsp+38h] [rbp-28h] BYREF
  struct IAccelerator *v50; // [rsp+40h] [rbp-20h] BYREF
  int v51; // [rsp+48h] [rbp-18h]
  struct CBaseExpression *v52; // [rsp+A0h] [rbp+40h] BYREF
  struct CExpressionValueStack *v53; // [rsp+B0h] [rbp+50h]
  unsigned __int64 v54; // [rsp+B8h] [rbp+58h]

  v54 = a4;
  v53 = a3;
  v5 = (int)a2;
  v6 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v9 = a3;
  if ( !(unsigned __int8)InteractionSourceManager::IsInertiaEnabledForAxis(a1 + 200, a2) )
    goto LABEL_35;
  v10 = *(_QWORD *)(a1 + 8 * v5 + 384);
  v11 = 0;
  v12 = v5;
  if ( v10 )
  {
    CConditionalExpression::Reset(*(CConditionalExpression **)(a1 + 8 * v5 + 384));
    LOBYTE(v52) = 0;
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(
                                (CConditionalExpression *)v10,
                                v9,
                                a4,
                                (bool *)&v52);
    v15 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      v47 = 3732;
      goto LABEL_52;
    }
    v12 = v5;
    v9 = v53;
    v11 = (_BYTE)v52 != 0;
  }
  if ( (unsigned int)v5 > 1 )
  {
    if ( !v11 )
      goto LABEL_35;
  }
  else if ( !v11 )
  {
    v10 = *(_QWORD *)(a1 + 408);
    if ( v10 )
    {
      CConditionalExpression::Reset(*(CConditionalExpression **)(a1 + 408));
      LOBYTE(v52) = 0;
      IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(
                                  (CConditionalExpression *)v10,
                                  v9,
                                  a4,
                                  (bool *)&v52);
      v15 = IsAnyConditionSatisfied;
      if ( IsAnyConditionSatisfied < 0 )
      {
        v47 = 3755;
        goto LABEL_52;
      }
      if ( (_BYTE)v52 )
      {
        v11 = 2;
        v16 = 3;
        goto LABEL_15;
      }
    }
LABEL_35:
    v29 = v48;
    v15 = 0;
    v48 = 0LL;
    v6 = v29;
    goto LABEL_36;
  }
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v12 + 416) + 4LL * *(int *)(v10 + 380));
LABEL_15:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
  CInteractionTracker::GetAnimationForAxis((__int64 *)a1, v5, &v49);
  v18 = v49;
  if ( (*(_BYTE *)(v10 + 232) & 4) != 0 )
  {
    LODWORD(v50) = *(_DWORD *)(v10 + 208);
    HIDWORD(v50) = *(_DWORD *)(v49 + 192);
    v51 = v16;
    CConditionalExpression::SetDebugTargetInfo(v10, &v50);
  }
  v19 = v16 - 1;
  if ( !v19 )
  {
    IsAnyConditionSatisfied = CConditionalExpression::GetValue(
                                (MatrixSubchannelMaskInfo **)v10,
                                v53,
                                (wchar_t *)v54,
                                (float *)&v52);
    v15 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied >= 0 )
    {
      v37 = (struct IAccelerator *)operator new(0x28uLL);
      v39 = v37;
      if ( !v37 )
      {
        v50 = 0LL;
        v15 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147024882, 0xEDAu, 0LL);
        Microsoft::WRL::ComPtr<CScalarForce>::~ComPtr<CScalarForce>(&v50);
        goto LABEL_36;
      }
      *((_DWORD *)v37 + 2) = 0;
      *(_QWORD *)v37 = &CSpringAccelerator::`vftable';
      v50 = v37;
      ((void (__fastcall *)(struct IAccelerator *))CSpringAccelerator::`vftable')(v37);
      v40 = *(_DWORD *)(a1 + 560);
      v41 = *(_DWORD *)(a1 + 556);
      *((_DWORD *)v39 + 4) = *(_DWORD *)(a1 + 544);
      v42 = *(_QWORD *)v39;
      *((_DWORD *)v39 + 5) = v41;
      *((_DWORD *)v39 + 6) = v40;
      (*(void (__fastcall **)(struct IAccelerator *))(v42 + 32))(v39);
      v43 = (CScalarForce *)operator new(0x70uLL);
      if ( v43 )
      {
        v44 = CScalarForce::CScalarForce(v43, v39);
        v52 = v44;
        v45 = v44;
        if ( v44 )
          (**(void (__fastcall ***)(struct CBaseExpression *))v44)(v44);
      }
      else
      {
        v45 = 0LL;
        v52 = 0LL;
      }
      v46 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 328LL))(v18);
      CMotion::GetCurrentVelocity(v46);
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 328LL))(v18);
      CScalarForce::Initialize(v45, (_DWORD)v5 == 2);
      *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 328LL))(v18) + 104) = 1114636288;
      Microsoft::WRL::ComPtr<IScalarForce>::operator=<CScalarForce>(&v48, (__int64 (__fastcall ****)(_QWORD))&v52);
      Microsoft::WRL::ComPtr<CScalarForce>::~ComPtr<CScalarForce>(&v52);
      Microsoft::WRL::ComPtr<CScalarForce>::~ComPtr<CScalarForce>(&v50);
      goto LABEL_35;
    }
    v47 = 3796;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, IsAnyConditionSatisfied, v47, 0LL);
    goto LABEL_36;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v31 = operator new(0x90uLL);
    if ( v31 )
    {
      v32 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 328LL))(v18);
      CMotion::GetCurrentVelocity(v32);
      (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 328LL))(v18);
      v35 = CExpressionForce::CExpressionForce(v31, v33, v34, v10, v5);
    }
    else
    {
      v35 = 0LL;
    }
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CExpressionForce>(&v48, v35);
    *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 328LL))(v18) + 104) = 1101004800;
    if ( !v48 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024882, 0xEFDu, 0LL);
      goto LABEL_36;
    }
    goto LABEL_35;
  }
  if ( v20 != 1 )
  {
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147467259, 0xF2Au, 0LL);
    goto LABEL_36;
  }
  v52 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v52);
  CConditionalExpression::GetSampledConditionAnimation((CConditionalExpression *)v10, &v52);
  if ( (unsigned int)Microsoft::WRL::ComPtr<CBaseExpression>::operator int Microsoft::WRL::Details::BoolStruct::*(&v52) == -1 )
    goto LABEL_34;
  v21 = v52;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CBaseExpression *, __int64))(*(_QWORD *)v52 + 56LL))(v52, 112LL) )
    goto LABEL_34;
  if ( v21 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v21 + 8LL))(v21);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v48);
  v22 = *(_QWORD *)v18;
  if ( v11 != 1 )
  {
    v26 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(v22 + 328))(v18);
    CMotion::GetCurrentVelocity(v26);
    (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 328LL))(v18);
    ForceForAxis = CNaturalAnimation::GetForceForAxis(v21, (unsigned int)v5);
    v15 = ForceForAxis;
    if ( ForceForAxis < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, ForceForAxis, 0xF1Eu, 0LL);
      goto LABEL_28;
    }
    goto LABEL_32;
  }
  v23 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(v22 + 328))(v18);
  CMotion::GetCurrentVelocity(v23);
  (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 328LL))(v18);
  v24 = CNaturalAnimation::GetForceForAxis(v21, 0LL);
  v15 = v24;
  if ( v24 >= 0 )
  {
LABEL_32:
    *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 328LL))(v18) + 104) = 1114636288;
    if ( v21 )
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v21 + 16LL))(v21);
LABEL_34:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v52);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xF15u, 0LL);
LABEL_28:
  if ( v21 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v21 + 16LL))(v21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v52);
LABEL_36:
  *a5 = v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v49);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v48);
  return v15;
}
