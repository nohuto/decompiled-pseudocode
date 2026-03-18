/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800422CC
 * Callers:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180049EFC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ @ 0x1800508CC (-FlushQueuedStateChanges@CExpressionManager@@AEAAXXZ.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180042824 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x1800429A4 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x18011456C (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     ?LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@@@Z @ 0x1801FC3C0 (-LogAnimationEnded@CAnimationLoggingManager@@QEAAX_KPEAVCResource@@IIW4AnimationEndedReasonType@.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1802289B0 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 *     ?GetPathData@CPathData@@QEBA?AV?$span@$$CBE$0?0@gsl@@XZ @ 0x1802289CC (-GetPathData@CPathData@@QEBA-AV-$span@$$CBE$0-0@gsl@@XZ.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  unsigned int v4; // esi
  int v5; // edi
  const struct SubchannelMaskInfo *v6; // r8
  unsigned int v7; // xmm0_4
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int16 v17; // cx
  void *v18; // rax
  unsigned int v19; // eax
  __int64 v21; // rax
  unsigned int v22; // ecx
  int v23; // edi
  int v24; // edi
  int v25; // edi
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int16 v28; // ax
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rax
  struct CAnimationLoggingManager *AnimationLoggingManagerNoRef; // rax
  __int64 v36; // r8
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // rax
  __int128 v46; // xmm0
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  __int64 v49; // rax
  unsigned int v50; // [rsp+20h] [rbp-E0h]
  void *v51; // [rsp+28h] [rbp-D8h]
  __int64 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int128 v54; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int128 v56; // [rsp+80h] [rbp-80h]
  __int128 v57; // [rsp+90h] [rbp-70h]
  __int128 v58; // [rsp+A0h] [rbp-60h]
  __int128 v59; // [rsp+B0h] [rbp-50h]
  __int128 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+D0h] [rbp-30h]
  __int128 v62; // [rsp+E0h] [rbp-20h]
  __int128 v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp+0h] BYREF
  int v65; // [rsp+108h] [rbp+8h]
  char v66; // [rsp+10Ch] [rbp+Ch]
  _DWORD v67[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v68; // [rsp+150h] [rbp+50h] BYREF
  int v69; // [rsp+158h] [rbp+58h]
  char v70; // [rsp+15Ch] [rbp+5Ch]

  v4 = 0;
  memset_0(v67, 0, sizeof(v67));
  v5 = 18;
  v68 = 0LL;
  v69 = 18;
  v70 = 0;
  if ( a2 == 1 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 8LL, a1);
    if ( (*(_BYTE *)(a1 + 232) & 4) != 0 )
    {
      AnimationLoggingManagerNoRef = CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)a1);
      CAnimationLoggingManager::LogAnimationEnded(
        AnimationLoggingManagerNoRef,
        *(_QWORD *)(a1 + 168),
        v36,
        *(unsigned int *)(a1 + 208),
        *(_DWORD *)(a1 + 192),
        0);
    }
  }
  else if ( a2 == 2 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 9LL, a1);
  }
  if ( CNotificationResource::ShouldNotify((CNotificationResource *)a1) )
  {
    memset_0(&v60, 0, 0x40uLL);
    v64 = 0LL;
    v65 = 18;
    v66 = 0;
    if ( (a2 != 8 || (*(_BYTE *)(a1 + 216) & 2) != 0 && *(_BYTE *)(a1 + 148))
      && a2 != 16
      && CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)v67) )
    {
      v6 = *(const struct SubchannelMaskInfo **)(a1 + 200);
      if ( v6 )
      {
        v37 = CBaseExpression::MergeValueWithMask(
                (const struct CExpressionValue *)v67,
                (const struct CExpressionValue *)(a1 + 72),
                v6,
                (struct CExpressionValue *)&v60);
        v4 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x680u, 0LL);
          goto LABEL_25;
        }
      }
      else if ( *(_DWORD *)(a1 + 152) != 11 )
      {
        CExpressionValue::CopyFrom((CExpressionValue *)&v60, (const struct CExpressionValue *)(a1 + 72));
      }
      v5 = v69;
      v7 = v60;
    }
    else
    {
      v67[0] = 0;
      v7 = 0;
      LODWORD(v60) = 0;
      v69 = 18;
      v70 = 1;
      v65 = 18;
      v66 = 1;
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1240LL);
    v9 = *(_QWORD *)(v8 + 40);
    if ( v5 > 69 )
    {
      v23 = v5 - 70;
      if ( !v23 )
      {
        v29 = *(_QWORD *)(a1 + 48);
        if ( v29 )
          v30 = *(_DWORD *)(v29 + 76);
        else
          v30 = 0;
        v31 = v30;
        v17 = 5;
        v52 = v31;
        v53 = *(unsigned int *)(a1 + 64);
        v18 = &unk_18032C39A;
        v54 = v60;
        goto LABEL_22;
      }
      v24 = v23 - 1;
      if ( v24 )
      {
        v25 = v24 - 33;
        if ( !v25 )
        {
          v32 = *(_QWORD *)(a1 + 48);
          if ( v32 )
            v33 = *(_DWORD *)(v32 + 76);
          else
            v33 = 0;
          v34 = v33;
          v17 = 7;
          v52 = v34;
          v53 = *(unsigned int *)(a1 + 64);
          v18 = &unk_18032C3A6;
          v54 = v60;
          v55 = v61;
          goto LABEL_22;
        }
        if ( v25 != 161 )
        {
LABEL_54:
          v4 = -2147024809;
          v50 = 1804;
          goto LABEL_55;
        }
        v26 = *(_QWORD *)(a1 + 48);
        if ( v26 )
          v27 = *(_DWORD *)(v26 + 76);
        else
          v27 = 0;
        v52 = v27;
        v53 = *(unsigned int *)(a1 + 64);
        v56 = v60;
        v57 = v61;
        v51 = &unk_18032C3AC;
        v28 = 8;
        v58 = v62;
        v59 = v63;
LABEL_44:
        v19 = CoreUICallSend(v9, &v52, 2LL, 0LL, v28, v51);
LABEL_23:
        LODWORD(v8) = 0x80000000;
        v4 = v19;
        if ( (int)(v19 + 0x80000000) >= 0 && v19 != -2018375675 )
        {
          v50 = 1811;
LABEL_55:
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v4, v50, 0LL);
          goto LABEL_25;
        }
        v4 = 0;
LABEL_25:
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v64);
        goto LABEL_26;
      }
      v49 = *(_QWORD *)(a1 + 48);
      v46 = v60;
      if ( v49 )
        v48 = *(_DWORD *)(v49 + 76);
      else
        v48 = 0;
      v52 = v48;
      v53 = *(unsigned int *)(a1 + 64);
      v28 = 6;
      v51 = &unk_18032C3A0;
    }
    else
    {
      if ( v5 != 69 )
      {
        v10 = v5 - 11;
        if ( !v10 )
        {
          CPathData::GetPathData(*(_QWORD *)(a1 + 136), &v52);
          v43 = *(_QWORD *)(a1 + 48);
          if ( v43 )
            v44 = *(_DWORD *)(v43 + 76);
          else
            v44 = 0;
          *(_QWORD *)&v54 = v44;
          *((_QWORD *)&v54 + 1) = *(unsigned int *)(a1 + 64);
          v19 = CoreUICallSend(v9, &v54, 2LL, 0LL, 9, &unk_18032C3B2);
          goto LABEL_23;
        }
        v11 = v10 - 6;
        if ( !v11 )
        {
          v41 = *(_QWORD *)(a1 + 48);
          if ( v41 )
            v42 = *(_DWORD *)(v41 + 76);
          else
            v42 = 0;
          v52 = v42;
          v53 = *(unsigned int *)(a1 + 64);
          v19 = CoreUICallSend(
                  v9,
                  &v52,
                  2LL,
                  0LL,
                  0,
                  &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_xfzN1g4V75qd4Cs8kloSCpvtObo);
          goto LABEL_23;
        }
        v12 = v11 - 1;
        if ( !v12 )
        {
          v21 = *(_QWORD *)(a1 + 48);
          if ( v21 )
            v22 = *(_DWORD *)(v21 + 76);
          else
            v22 = 0;
          v52 = v22;
          v53 = *(unsigned int *)(a1 + 64);
          v19 = CoreUICallSend(v9, &v52, 2LL, 0LL, 1, &unk_18032C384);
          goto LABEL_23;
        }
        v13 = v12 - 17;
        if ( !v13 )
        {
          v39 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)&v54 = __PAIR64__(DWORD1(v60), v7);
          if ( v39 )
            v40 = *(_DWORD *)(v39 + 76);
          else
            v40 = 0;
          v52 = v40;
          v53 = *(unsigned int *)(a1 + 64);
          v19 = CoreUICallSend(v9, &v52, 2LL, 0LL, 2, &unk_18032C388);
          goto LABEL_23;
        }
        if ( v13 == 17 )
        {
          v14 = *(_QWORD *)(a1 + 48);
          if ( v14 )
            v15 = *(_DWORD *)(v14 + 76);
          else
            v15 = 0;
          DWORD2(v54) = DWORD2(v60);
          v16 = v15;
          v17 = 3;
          v52 = v16;
          v53 = *(unsigned int *)(a1 + 64);
          v18 = &unk_18032C38E;
          *(_QWORD *)&v54 = v60;
LABEL_22:
          v19 = CoreUICallSend(v9, &v52, 2LL, 0LL, v17, v18);
          goto LABEL_23;
        }
        goto LABEL_54;
      }
      v45 = *(_QWORD *)(a1 + 48);
      v46 = v60;
      if ( v45 )
        v47 = *(_DWORD *)(v45 + 76);
      else
        v47 = 0;
      v52 = v47;
      v53 = *(unsigned int *)(a1 + 64);
      v51 = &unk_18032C394;
      v28 = 4;
    }
    v54 = v46;
    goto LABEL_44;
  }
LABEL_26:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v68);
  return v4;
}
