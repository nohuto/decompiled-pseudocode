/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0
 * Callers:
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18004F148 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x180050990 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180053434 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021A420 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18021E3F8 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180025E3C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x18004A1F8 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18004F220 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180050DC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x180051730 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x1800517B0 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180051C60 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x180052380 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x180052BA0 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180070568 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800CE7E8 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800D933C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NXZ @ 0x180104284 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1781982525@@@details@wil@@QEAA_NX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801FDC90 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801FE380 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180228A1C (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // r15
  LARGE_INTEGER v5; // rbx
  LARGE_INTEGER v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rax
  bool v11; // zf
  char v12; // si
  int v13; // esi
  __int64 v14; // rdx
  int v15; // ecx
  char v16; // al
  __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 Elapsed; // rax
  bool v24; // r12
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  bool IsExpressionValueValid; // al
  struct CExpressionValue *v29; // rax
  CBaseExpression *v30; // rcx
  _QWORD *v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  struct SubchannelMaskInfo *v34; // rdx
  int v35; // eax
  int v36; // eax
  unsigned int v37; // ecx
  CExpressionValue *v38; // rax
  struct CExpressionValue *v39; // rax
  __int64 v40; // rcx
  bool v41; // r12
  struct CExpressionValue *v42; // rsi
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int64 v45; // rdx
  unsigned int TracingCookie; // eax
  HRESULT v47; // eax
  unsigned int v48; // ecx
  int v49; // r12d
  HANDLE EventW; // rsi
  __int64 v51; // rax
  struct CResource *v52; // rdx
  int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  __int64 v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rdx
  __int64 v59; // rax
  bool v61[8]; // [rsp+38h] [rbp-D0h] BYREF
  LARGE_INTEGER v62; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+48h] [rbp-C0h]
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+58h] [rbp-B0h]
  LARGE_INTEGER v66; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v67; // [rsp+68h] [rbp-A0h]
  _BYTE Name[72]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-50h] BYREF
  int v70; // [rsp+C0h] [rbp-48h]
  char v71; // [rsp+C4h] [rbp-44h]

  v4 = 0LL;
  v5.QuadPart = 0LL;
  v6.QuadPart = 0LL;
  *a4 = 0;
  v7 = a3;
  v8 = *((_QWORD *)this + 41);
  v66.QuadPart = (LONGLONG)a4;
  v11 = (*(_DWORD *)(v8 + 4) & 0x20000000) == 0;
  v67 = a3;
  PerformanceCount.QuadPart = 0LL;
  v62.QuadPart = 0LL;
  if ( !v11 || CCommonRegistryData::LogExpressionPerfStats )
  {
    v12 = 1;
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 88LL;
    if ( QueryPerformanceCounter(&PerformanceCount) )
      v6 = PerformanceCount;
    PerformanceCount = v6;
  }
  else
  {
    v12 = 0;
  }
  LODWORD(v63) = *((_DWORD *)a2 + 4);
  LODWORD(v65) = *((_DWORD *)this + 72);
  if ( !*((_QWORD *)this + 37) )
    *((_QWORD *)this + 37) = v7;
  (*(void (__fastcall **)(CBaseExpression *, bool *))(*(_QWORD *)this + 280LL))(this, v61);
  if ( *((_BYTE *)this + 148) && !v61[0] )
  {
    v13 = 0;
    goto LABEL_98;
  }
  *((_QWORD *)this + 21) = v7;
  if ( v12 )
  {
    if ( (*((_BYTE *)this + 216) & 2) != 0 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
      v15 = *(_DWORD *)(*((_QWORD *)this + 41) + 4LL);
      ++*(_DWORD *)(v14 + 452);
      if ( (v15 & 0x20000000) != 0 )
        ++*(_DWORD *)(v14 + 456);
    }
  }
  if ( v4 )
  {
    if ( QueryPerformanceCounter(&v62) )
      v5 = v62;
    v62 = v5;
  }
  v16 = *((_BYTE *)this + 232);
  if ( (v16 & 2) == 0 )
  {
    v17 = 0LL;
    if ( *((_DWORD *)this + 66) )
    {
      while ( 1 )
      {
        v18 = *((_QWORD *)this + 30);
        v19 = *((_QWORD *)this + 21);
        v61[1] = 0;
        v20 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v18 + 8 * v17), a2, v19, &v61[1]);
        v13 = v20;
        if ( v20 < 0 )
          break;
        CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(*((_QWORD *)this + 30) + 8 * v17));
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *((_DWORD *)this + 66) )
        {
          v16 = *((_BYTE *)this + 232);
          goto LABEL_25;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x320u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_18032C888, 2u, v13, 0x4B3u, 0LL);
      goto LABEL_94;
    }
LABEL_25:
    v7 = v67;
    *((_BYTE *)this + 232) = v16 | 2;
  }
  if ( !(_DWORD)v65 )
    CBaseExpression::NotifyAnimationStarted(this);
  v13 = (*(__int64 (__fastcall **)(CBaseExpression *, struct CExpressionValueStack *, __int64, LARGE_INTEGER))(*(_QWORD *)this + 256LL))(
          this,
          a2,
          v7,
          v66);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, &dword_18032C888, 2u, v13, 0x4BAu, 0LL);
LABEL_94:
    v57 = *((_DWORD *)a2 + 4);
    if ( v57 > (unsigned int)v63 )
    {
      v58 = v57 - (unsigned int)v63;
      do
      {
        --v57;
        --v58;
      }
      while ( v58 );
      *((_DWORD *)a2 + 4) = v57;
    }
    goto LABEL_98;
  }
  if ( v5.QuadPart )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v62);
    ++*(_DWORD *)(v4 + 4);
    *(_QWORD *)(v4 + 32) += Elapsed;
    v5.QuadPart = 0LL;
    v62.QuadPart = 0LL;
  }
  v24 = v13 == 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_1781982525>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1781982525>::GetImpl'::`2'::impl) )
  {
    if ( v13 != 1 )
    {
      if ( !*((_DWORD *)a2 + 4) )
      {
        CBaseExpression::EnsureExpressionIsUnregistered(this);
        v13 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_18032C888, 2u, -2147467259, 0x4D6u, 0LL);
        goto LABEL_94;
      }
      goto LABEL_38;
    }
  }
  else if ( v13 != 1 )
  {
LABEL_38:
    v29 = CExpressionValueStack::PeekStackValue(a2, 0);
    IsExpressionValueValid = CBaseExpression::IsExpressionValueValid(v30, v29);
    goto LABEL_39;
  }
  IsExpressionValueValid = 0;
LABEL_39:
  if ( v13 == 1 || !IsExpressionValueValid )
  {
    v31 = (_QWORD *)*((_QWORD *)this + 23);
    v70 = 18;
    v69 = 0LL;
    v71 = 0;
    memset(&Name[8], 0, 64);
    if ( !v31 || (v31 = (_QWORD *)v31[2]) == 0LL )
    {
      v13 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v31, &dword_18032C888, 2u, -2147024890, 0x4E5u, 0LL);
      goto LABEL_91;
    }
    v32 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _BYTE *))(*v31 + 136LL))(
            v31,
            *((unsigned int *)this + 48),
            &Name[8]);
    v13 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_18032C888, 2u, v32, 0x4E7u, 0LL);
      goto LABEL_91;
    }
    v34 = (struct SubchannelMaskInfo *)*((_QWORD *)this + 25);
    if ( v34 )
    {
      if ( *((_BYTE *)v34 + 4) )
      {
        v35 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&Name[8], v34);
        v13 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_18032C888, 2u, v35, 0x4EDu, 0LL);
LABEL_91:
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v69);
          goto LABEL_94;
        }
      }
    }
    if ( v70 != *((_DWORD *)this + 38) )
    {
      v13 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v33, &dword_18032C888, 2u, -2147024809, 0x4F2u, 0LL);
      goto LABEL_91;
    }
    if ( v24 )
    {
      v36 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)&Name[8]);
      v13 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, &dword_18032C888, 2u, v36, 0x4F7u, 0LL);
        goto LABEL_91;
      }
    }
    else
    {
      v38 = CExpressionValueStack::PeekStackValue(a2, 0);
      CExpressionValue::CopyFrom(v38, (const struct CExpressionValue *)&Name[8]);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v69);
  }
  if ( *((_DWORD *)a2 + 4) != (_DWORD)v63 + 1 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_18032C888, 2u, -2147467259, 0x50Bu, 0LL);
    goto LABEL_94;
  }
  if ( v4 )
  {
    v5.QuadPart = 0LL;
    if ( QueryPerformanceCounter(&v66) )
      v5 = v66;
    v62 = v5;
  }
  v39 = CExpressionValueStack::PeekStackValue(a2, 0);
  v40 = *((_QWORD *)this + 41);
  v41 = 0;
  v42 = v39;
  if ( (*(_DWORD *)(v40 + 4) & 0x20000000) != 0 )
    v41 = (unsigned __int8)CExpressionValue::operator==((char *)this + 72) == 0;
  switch ( *((_DWORD *)v42 + 18) )
  {
    case 0xB:
      v45 = *((_QWORD *)v42 + 8);
      *((_DWORD *)this + 36) = 11;
      *((_BYTE *)this + 148) = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 136, v45);
      break;
    case 0x11:
      *((_BYTE *)this + 72) = *(_BYTE *)v42;
      *((_DWORD *)this + 36) = 17;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x12:
      *((_DWORD *)this + 18) = *(_DWORD *)v42;
      *((_DWORD *)this + 36) = 18;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x23:
      *((_DWORD *)this + 36) = 35;
      *((_QWORD *)this + 9) = *(_QWORD *)v42;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x2A:
      *((_DWORD *)this + 36) = 42;
      *((_DWORD *)this + 18) = *(_DWORD *)v42;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x34:
      *((_DWORD *)this + 36) = 52;
      *((_QWORD *)this + 9) = *(_QWORD *)v42;
      *((_DWORD *)this + 20) = *((_DWORD *)v42 + 2);
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x45:
      *((_DWORD *)this + 36) = 69;
      goto LABEL_69;
    case 0x46:
      *((_DWORD *)this + 36) = 70;
      goto LABEL_69;
    case 0x47:
      *((_DWORD *)this + 36) = 71;
LABEL_69:
      v43 = *(_OWORD *)v42;
      *((_BYTE *)this + 148) = 1;
      *(_OWORD *)((char *)this + 72) = v43;
      break;
    case 0x68:
      *((_DWORD *)this + 36) = 104;
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v42;
      *((_QWORD *)this + 11) = *((_QWORD *)v42 + 2);
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x109:
      *((_DWORD *)this + 36) = 265;
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v42;
      *(_OWORD *)((char *)this + 88) = *((_OWORD *)v42 + 1);
      *(_OWORD *)((char *)this + 104) = *((_OWORD *)v42 + 2);
      v44 = *((_OWORD *)v42 + 3);
      *((_BYTE *)this + 148) = 1;
      *(_OWORD *)((char *)this + 120) = v44;
      break;
    default:
      break;
  }
  if ( v41 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v47 = StringCchPrintfW((unsigned __int16 *)&Name[8], 0x3CuLL, (size_t *)L"DwmExpression_SetValue_%d", TracingCookie);
    v49 = v47;
    v13 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x253u, 0LL);
      goto LABEL_86;
    }
    EventW = CreateEventW(0LL, 1, 0, (LPCWSTR)&Name[8]);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (*((_BYTE *)this + 216) & 3) == 3 )
  {
    v51 = *((_QWORD *)this + 23);
    if ( !v51 || (v52 = *(struct CResource **)(v51 + 16)) == 0LL )
    {
      v13 = -2147024890;
      v49 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, -2147024890, 0x264u, 0LL);
      goto LABEL_86;
    }
    v53 = CBaseExpression::SetOutputValueOnTarget(this, v52);
    v49 = v53;
    v13 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x265u, 0LL);
LABEL_86:
      MilInstrumentationCheckHR_MaybeFailFast(v55, &dword_18032C888, 2u, v49, 0x518u, 0LL);
      goto LABEL_94;
    }
  }
  if ( v5.QuadPart )
  {
    v56 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v62);
    ++*(_DWORD *)(v4 + 20);
    *(_QWORD *)(v4 + 64) += v56;
  }
  --*((_DWORD *)a2 + 4);
  v13 = 0;
LABEL_98:
  if ( v6.QuadPart )
  {
    v59 = QpcStopwatch::GetElapsed((QpcStopwatch *)&PerformanceCount);
    ++*(_DWORD *)v4;
    *(_QWORD *)(v4 + 24) += v59;
  }
  return (unsigned int)v13;
}
