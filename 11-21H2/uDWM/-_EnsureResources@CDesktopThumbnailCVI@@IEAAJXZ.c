/*
 * XREFs of ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x1800B37D0
 * Callers:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x1800B2368 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800B273C (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x18000D86C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x1800385B8 (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::_EnsureResources(CDesktopThumbnailCVI *this)
{
  int v1; // edi
  CBaseObject **v2; // rsi
  unsigned int v4; // eax
  int v5; // r8d
  int v6; // r10d
  int v7; // r9d
  __int64 v8; // rax
  int v9; // edx
  __m128i v10; // xmm0
  CBaseObject *v11; // rcx
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v16[4]; // [rsp+48h] [rbp-38h] BYREF
  float v17[4]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return (unsigned int)v1;
  v1 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         (CBaseObject **)this + 3);
  if ( v1 < 0 )
  {
    v4 = 602;
    goto LABEL_14;
  }
  v1 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, _DWORD *))(*(_QWORD *)this + 16LL))(this, v16);
  if ( v1 < 0 )
  {
    v4 = 605;
    goto LABEL_14;
  }
  v1 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int64 *))(*(_QWORD *)this + 24LL))(this, &v15);
  if ( v1 < 0 )
  {
    v4 = 608;
    goto LABEL_14;
  }
  v5 = v16[0];
  v6 = v16[1];
  v7 = HIDWORD(v15);
  *((_DWORD *)this + 10) = v16[2];
  *((_DWORD *)this + 11) = v16[3];
  v8 = v15;
  *((_DWORD *)this + 8) = v5;
  *((_DWORD *)this + 9) = v6;
  *((_QWORD *)this + 6) = v8;
  if ( (_DWORD)v8 && v7 )
  {
    v9 = *((_DWORD *)this + 11);
  }
  else
  {
    *((_DWORD *)this + 12) = *((_DWORD *)this + 10) - v5;
    v9 = *((_DWORD *)this + 11);
    *((_DWORD *)this + 13) = v9 - v6;
  }
  v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 10) - v5);
  v11 = *v2;
  v17[0] = (float)v5;
  v17[2] = _mm_cvtepi32_ps(v10).m128_f32[0] + (float)v5;
  v17[1] = (float)v6;
  *(double *)&v18[1] = (double)v7;
  v17[3] = (float)(v9 - v6) + (float)v6;
  v12 = _mm_cvtsi32_si128(v8);
  v13 = *((_QWORD *)this + 2);
  v18[0] = *(_OWORD *)&_mm_cvtepi32_pd(v12);
  v1 = CCachedVisualImageProxy::Update((__int64)v11, (__int64)v17, (__int64)v18, 0LL, 0LL, *(_QWORD *)(v13 + 16), 0);
  if ( v1 < 0 )
  {
    v4 = 640;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, v4);
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
  }
  return (unsigned int)v1;
}
