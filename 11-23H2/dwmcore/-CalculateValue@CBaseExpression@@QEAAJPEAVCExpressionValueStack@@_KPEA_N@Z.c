/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004C6A0
 * Callers:
 *     ?UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z @ 0x18004C260 (-UpdateExpressionsWorker@CExpressionManager@@AEAAX_N@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004C6A0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18004E294 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18009A594 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x180231BB4 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x180235808 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180267020 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180015728 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004C6A0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x18004D110 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18004D5C0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ??8CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18004DEE0 (--8CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180050528 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180084080 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18009328C (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18009A5F8 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x18009EA44 (--0CExpressionValue@@QEAA@XZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800D5AC8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800DC82C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?NotifyAnimationStarted@CBaseExpression@@IEAAXXZ @ 0x1800E6100 (-NotifyAnimationStarted@CBaseExpression@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_4043567418@@@details@wil@@QEAA_NXZ @ 0x18011A020 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_4043567418@@@details@wil@@QEAA_NX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180216A18 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180216E8C (--1CExpressionValue@@QEAA@XZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x180216E9C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18023EB38 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x180262D88 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  LARGE_INTEGER v4; // rbx
  LARGE_INTEGER v5; // rdi
  __int64 v7; // rax
  bool v9; // zf
  char v10; // r12
  BOOL v11; // eax
  __int64 v12; // r12
  int v13; // esi
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // r15
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  int v20; // eax
  unsigned int v21; // ecx
  CBaseExpression *v22; // rcx
  char v23; // r12
  __int64 Elapsed; // rax
  _DWORD *v25; // r15
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // rax
  CExpressionValue *v30; // rax
  struct CExpressionValue *v31; // rdx
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rax
  CExpressionValue *v40; // rax
  CExpressionValue *v41; // rcx
  __int64 v42; // rax
  CExpressionValue *v43; // rax
  bool v44; // si
  unsigned int v45; // ecx
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int64 v48; // rdx
  unsigned int TracingCookie; // eax
  int v50; // eax
  unsigned int v51; // ecx
  int v52; // r15d
  HANDLE EventW; // rsi
  __int64 v54; // rax
  struct CResource *v55; // rdx
  int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  __int64 v59; // rax
  unsigned int v60; // edx
  __int64 v61; // r8
  __int64 v62; // rax
  unsigned int v64; // [rsp+20h] [rbp-E0h]
  char v65; // [rsp+30h] [rbp-D0h] BYREF
  bool v66; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v67; // [rsp+38h] [rbp-C8h]
  LARGE_INTEGER v68; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v69; // [rsp+48h] [rbp-B8h]
  __int64 v70; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v72; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER v73; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v74[80]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR Name[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v76; // [rsp+D0h] [rbp-30h]
  __int128 v77; // [rsp+E0h] [rbp-20h]
  __int128 v78; // [rsp+F0h] [rbp-10h]
  __int64 v79; // [rsp+100h] [rbp+0h] BYREF
  int v80; // [rsp+108h] [rbp+8h]
  char v81; // [rsp+10Ch] [rbp+Ch]

  v4.QuadPart = 0LL;
  v5.QuadPart = 0LL;
  *a4 = 0;
  v7 = *((_QWORD *)this + 41);
  v72.QuadPart = (LONGLONG)a4;
  v9 = (*(_DWORD *)(v7 + 4) & 0x40000000) == 0;
  v70 = a3;
  v73.QuadPart = 0LL;
  v68.QuadPart = 0LL;
  v67 = 0LL;
  if ( !v9 || CCommonRegistryData::LogExpressionPerfStats )
  {
    v10 = 1;
    v67 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL) + 88LL;
    v11 = QueryPerformanceCounter(&PerformanceCount);
    a3 = v70;
    if ( v11 )
    {
      v5 = PerformanceCount;
      v73 = PerformanceCount;
    }
  }
  else
  {
    v10 = 0;
  }
  v69 = *((_DWORD *)a2 + 4);
  PerformanceCount.LowPart = *((_DWORD *)this + 72);
  if ( !*((_QWORD *)this + 37) )
    *((_QWORD *)this + 37) = a3;
  (*(void (__fastcall **)(CBaseExpression *, char *))(*(_QWORD *)this + 280LL))(this, &v65);
  if ( *((_BYTE *)this + 148) && !v65 )
  {
    v12 = v67;
    v13 = 0;
    goto LABEL_105;
  }
  *((_QWORD *)this + 21) = v70;
  if ( v10 )
  {
    if ( (*((_BYTE *)this + 216) & 2) != 0 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
      v15 = *(_DWORD *)(*((_QWORD *)this + 41) + 4LL);
      ++*(_DWORD *)(v14 + 452);
      if ( (v15 & 0x40000000) != 0 )
        ++*(_DWORD *)(v14 + 456);
    }
  }
  v16 = v67;
  if ( v67 )
  {
    if ( QueryPerformanceCounter(&v68) )
      v4 = v68;
    v68 = v4;
  }
  if ( (*((_BYTE *)this + 232) & 2) == 0 )
  {
    v17 = 0LL;
    if ( *((_DWORD *)this + 66) )
    {
      while ( 1 )
      {
        v18 = *((_QWORD *)this + 30);
        v19 = *((_QWORD *)this + 21);
        v66 = 0;
        v20 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v18 + 8 * v17), a2, v19, &v66);
        v13 = v20;
        if ( v20 < 0 )
          break;
        CBaseExpression::EnsureExpressionIsUnregistered(*(CBaseExpression **)(*((_QWORD *)this + 30) + 8 * v17));
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= *((_DWORD *)this + 66) )
          goto LABEL_23;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x329u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v28, &dword_18033C0D8, 2u, v13, 0x49Eu, 0LL);
      goto LABEL_100;
    }
LABEL_23:
    *((_BYTE *)this + 232) |= 2u;
    v16 = v67;
  }
  if ( !PerformanceCount.LowPart )
    CBaseExpression::NotifyAnimationStarted(this);
  v13 = (*(__int64 (__fastcall **)(CBaseExpression *, struct CExpressionValueStack *, __int64, LARGE_INTEGER))(*(_QWORD *)this + 256LL))(
          this,
          a2,
          v70,
          v72);
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, &dword_18033C0D8, 2u, v13, 0x4A5u, 0LL);
    goto LABEL_100;
  }
  v23 = 1;
  if ( v4.QuadPart )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v68);
    CExpressionPerformanceCounter::AddDurationSample(v16, 1LL, Elapsed);
    v4.QuadPart = 0LL;
    v68.QuadPart = 0LL;
  }
  v25 = &CExpressionValueStack::s_emptyValue;
  if ( v13 == 1 )
    goto LABEL_37;
  v26 = *((_DWORD *)a2 + 4);
  v23 = 0;
  if ( !v26 )
  {
    CBaseExpression::EnsureExpressionIsUnregistered(this);
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_18033C0D8, 2u, -2147467259, 0x4BEu, 0LL);
LABEL_100:
    v12 = v67;
LABEL_101:
    v60 = *((_DWORD *)a2 + 4);
    if ( v60 > v69 )
    {
      v61 = v60 - v69;
      do
      {
        --v60;
        --v61;
      }
      while ( v61 );
      *((_DWORD *)a2 + 4) = v60;
    }
    goto LABEL_105;
  }
  v29 = (unsigned int)(v26 - 1);
  if ( (unsigned int)v29 < *((_DWORD *)a2 + 12) )
  {
    v31 = (struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v29);
  }
  else
  {
    v30 = CExpressionValue::CExpressionValue((CExpressionValue *)Name);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v30);
    CExpressionValue::~CExpressionValue((CExpressionValue *)Name);
    v31 = (struct CExpressionValue *)&CExpressionValueStack::s_emptyValue;
  }
  if ( !CBaseExpression::IsExpressionValueValid(v22, v31) )
  {
LABEL_37:
    v32 = *((_QWORD *)this + 23);
    v80 = 18;
    v79 = 0LL;
    v81 = 0;
    *(_OWORD *)Name = 0LL;
    v76 = 0LL;
    v77 = 0LL;
    v78 = 0LL;
    if ( !v32 || (v22 = *(CBaseExpression **)(v32 + 16)) == 0LL )
    {
      v13 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, &dword_18033C0D8, 2u, -2147024890, 0x4C8u, 0LL);
      goto LABEL_44;
    }
    v33 = (*(__int64 (__fastcall **)(CBaseExpression *, _QWORD, WCHAR *))(*(_QWORD *)v22 + 136LL))(
            v22,
            *((unsigned int *)this + 48),
            Name);
    v13 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_18033C0D8, 2u, v33, 0x4CAu, 0LL);
      goto LABEL_44;
    }
    v35 = *((_QWORD *)this + 25);
    if ( v35 )
    {
      if ( *(_BYTE *)(v35 + 4) )
      {
        v36 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)Name, (struct SubchannelMaskInfo *)v35);
        v13 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_18033C0D8, 2u, v36, 0x4D0u, 0LL);
LABEL_44:
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v79);
          goto LABEL_100;
        }
      }
    }
    if ( v80 != *((_DWORD *)this + 38) )
    {
      v13 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v34, &dword_18033C0D8, 2u, -2147024809, 0x4D5u, 0LL);
      goto LABEL_44;
    }
    if ( v23 )
    {
      v37 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)Name);
      v13 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, &dword_18033C0D8, 2u, v37, 0x4DAu, 0LL);
        goto LABEL_44;
      }
    }
    else
    {
      v39 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
      if ( (unsigned int)v39 < *((_DWORD *)a2 + 12) )
      {
        v41 = (CExpressionValue *)(*((_QWORD *)a2 + 3) + 80 * v39);
      }
      else
      {
        v40 = CExpressionValue::CExpressionValue((CExpressionValue *)v74);
        CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v40);
        CExpressionValue::~CExpressionValue((CExpressionValue *)v74);
        v41 = (CExpressionValue *)&CExpressionValueStack::s_emptyValue;
      }
      CExpressionValue::CopyFrom(v41, (const struct CExpressionValue *)Name);
    }
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v79);
  }
  if ( *((_DWORD *)a2 + 4) != v69 + 1 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, &dword_18033C0D8, 2u, -2147467259, 0x4EEu, 0LL);
    goto LABEL_100;
  }
  v12 = v67;
  if ( v67 )
  {
    v4.QuadPart = 0LL;
    if ( QueryPerformanceCounter(&v72) )
      v4 = v72;
    v68 = v4;
  }
  v42 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
  if ( (unsigned int)v42 < *((_DWORD *)a2 + 12) )
  {
    v25 = (_DWORD *)(*((_QWORD *)a2 + 3) + 80 * v42);
  }
  else
  {
    v43 = CExpressionValue::CExpressionValue((CExpressionValue *)v74);
    CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v43);
    CExpressionValue::~CExpressionValue((CExpressionValue *)v74);
  }
  v44 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_4043567418>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_4043567418>::GetImpl'::`2'::impl)
    && v25[18] != *((_DWORD *)this + 38) )
  {
    v13 = -2147024809;
    v64 = 565;
LABEL_94:
    v52 = v13;
    MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v13, v64, 0LL);
    goto LABEL_95;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 41) + 4LL) & 0x40000000) != 0 )
    v44 = (unsigned __int8)CExpressionValue::operator==((char *)this + 72) == 0;
  switch ( v25[18] )
  {
    case 0xB:
      v48 = *((_QWORD *)v25 + 8);
      *((_DWORD *)this + 36) = 11;
      *((_BYTE *)this + 148) = 1;
      Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 136, v48);
      break;
    case 0x11:
      *((_BYTE *)this + 72) = *(_BYTE *)v25;
      *((_DWORD *)this + 36) = 17;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x12:
      *((_DWORD *)this + 18) = *v25;
      *((_DWORD *)this + 36) = 18;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x23:
      *((_DWORD *)this + 36) = 35;
      *((_QWORD *)this + 9) = *(_QWORD *)v25;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x2A:
      *((_DWORD *)this + 36) = 42;
      *((_DWORD *)this + 18) = *v25;
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x34:
      *((_DWORD *)this + 36) = 52;
      *((_QWORD *)this + 9) = *(_QWORD *)v25;
      *((_DWORD *)this + 20) = v25[2];
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x45:
      *((_DWORD *)this + 36) = 69;
      goto LABEL_77;
    case 0x46:
      *((_DWORD *)this + 36) = 70;
      goto LABEL_77;
    case 0x47:
      *((_DWORD *)this + 36) = 71;
LABEL_77:
      v46 = *(_OWORD *)v25;
      *((_BYTE *)this + 148) = 1;
      *(_OWORD *)((char *)this + 72) = v46;
      break;
    case 0x68:
      *((_DWORD *)this + 36) = 104;
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v25;
      *((_QWORD *)this + 11) = *((_QWORD *)v25 + 2);
      *((_BYTE *)this + 148) = 1;
      break;
    case 0x109:
      *((_DWORD *)this + 36) = 265;
      *(_OWORD *)((char *)this + 72) = *(_OWORD *)v25;
      *(_OWORD *)((char *)this + 88) = *((_OWORD *)v25 + 1);
      *(_OWORD *)((char *)this + 104) = *((_OWORD *)v25 + 2);
      v47 = *((_OWORD *)v25 + 3);
      *((_BYTE *)this + 148) = 1;
      *(_OWORD *)((char *)this + 120) = v47;
      break;
    default:
      break;
  }
  if ( v44 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v50 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v52 = v50;
    v13 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0x25Cu, 0LL);
      goto LABEL_95;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  if ( (*((_BYTE *)this + 216) & 3) == 3 )
  {
    v54 = *((_QWORD *)this + 23);
    if ( !v54 || (v55 = *(struct CResource **)(v54 + 16)) == 0LL )
    {
      v13 = -2147024890;
      v64 = 621;
      goto LABEL_94;
    }
    v56 = CBaseExpression::SetOutputValueOnTarget(this, v55);
    v52 = v56;
    v13 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x26Eu, 0LL);
LABEL_95:
      MilInstrumentationCheckHR_MaybeFailFast(v58, &dword_18033C0D8, 2u, v52, 0x4FBu, 0LL);
      goto LABEL_101;
    }
  }
  if ( v4.QuadPart )
  {
    v59 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v68);
    CExpressionPerformanceCounter::AddDurationSample(v12, 5LL, v59);
  }
  --*((_DWORD *)a2 + 4);
  v13 = 0;
LABEL_105:
  if ( v5.QuadPart )
  {
    v62 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v73);
    CExpressionPerformanceCounter::AddDurationSample(v12, 0LL, v62);
  }
  return (unsigned int)v13;
}
