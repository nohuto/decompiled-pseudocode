/*
 * XREFs of ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18004ECFC
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x18004EC20 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800F0360 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18000D86C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180013D94 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x180038584 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800385B8 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180045570 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18004EEDC (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureCVIResource(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2)
{
  __int64 i; // rax
  float v5; // xmm1_4
  __int64 *v6; // rsi
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  float v13; // xmm1_4
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  CCachedVisualImageProxy *v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  unsigned int v23; // eax
  __m128i v24; // xmm0
  int v25; // eax
  float v26; // xmm0_4
  unsigned int *v27; // rcx
  CBaseObject *v28; // rcx
  struct tagRECT v29; // [rsp+40h] [rbp-30h] BYREF
  float v30[4]; // [rsp+50h] [rbp-20h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v30[i] = (float)*(&a2->left + i);
  v5 = *((float *)this + 90);
  v29 = 0LL;
  if ( v5 != 1.0 )
  {
    v23 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v23 = a2->bottom - a2->top;
    v24 = _mm_cvtsi32_si128(v23);
    v25 = 0;
    LODWORD(v26) = _mm_cvtepi32_ps(v24).m128_u32[0];
    if ( a2->right - a2->left >= 0 )
      v25 = a2->right - a2->left;
    v27 = (unsigned int *)*((_QWORD *)this + 40);
    *(double *)&v29.right = (float)(v26 * v5);
    *(double *)&v29.left = (float)((float)v25 * v5);
    CVisual::SetInterpolationMode(v27, 1u);
  }
  v6 = (__int64 *)((char *)this + 296);
  if ( *((_QWORD *)this + 37) )
    goto LABEL_11;
  v7 = 0;
  if ( a2->bottom - a2->top >= 0 )
    v7 = a2->bottom - a2->top;
  v8 = 0;
  if ( a2->right - a2->left >= 0 )
    v8 = a2->right - a2->left;
  if ( (int)CDesktopManager::GetCVIFromCache(v8, v7, (struct CCachedVisualImageProxy **)this + 37) >= 0
    || (v9 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
               (CBaseObject **)this + 37),
        v10 = v9,
        v9 >= 0) )
  {
LABEL_11:
    v11 = CCachedVisualImageProxy::Update(
            *v6,
            (__int64)v30,
            (__int64)&v29,
            0LL,
            0LL,
            *(_QWORD *)(*((_QWORD *)this + 40) + 16LL),
            0);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x113u);
    }
    else
    {
      v12 = a2->right - a2->left;
      v13 = *((float *)this + 90);
      v29.left = -32000;
      v29.top = -32000;
      v14 = 0;
      if ( v12 >= 0 )
        v14 = v12;
      v15 = a2->bottom - a2->top;
      v29.right = (int)(float)((float)v14 * v13) - 32000;
      v16 = 0;
      if ( v15 >= 0 )
        v16 = v15;
      v17 = (CCachedVisualImageProxy *)*v6;
      v29.bottom = (int)(float)((float)v16 * v13) - 32000;
      v18 = CCachedVisualImageProxy::Snapshot(v17, &v29);
      v10 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x122u);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            Microsoft_Windows_Dwm_Udwm_Provider_Context,
            (__int64)&UdwmTransitionCVISnapshot_Info,
            v19,
            1,
            (__int64)v30);
        v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 5)
                                                              + 16LL)
                                                + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                     + 5)
                                                                   + 16LL));
        v10 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x126u);
        }
        else
        {
          v21 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
          v10 = v21;
          if ( v21 >= 0 )
            return v10;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x12Au);
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x109u);
  }
  if ( *v6 )
  {
    CBaseObject::Release((CBaseObject *)*v6);
    *v6 = 0LL;
  }
  v28 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v28 )
  {
    CBaseObject::Release(v28);
    *((_QWORD *)this + 38) = 0LL;
  }
  return v10;
}
