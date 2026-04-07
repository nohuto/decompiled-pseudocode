/*
 * XREFs of ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x180002418
 * Callers:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCRectResourceProxy@@AEBUtagRECT@@@Z @ 0x18000227C (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualIm.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x1800B66D0 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180035D8C (--$CreateProxy@VCCachedVisualImageProxy@@@CCompositor@@IEAAJPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCSizeResourceProxy@@PEAVCVisualProxy@@W4Enum@MilBrushMappingMode@@@Z @ 0x18004326C (-Update@CCachedVisualImageProxy@@QEAAJAEBUMilRectF@@AEBUMilSizeD@@PEBVCRectResourceProxy@@PEBVCS.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::_EnsureResources(CDesktopThumbnailCVI *this)
{
  int v1; // edi
  CBaseObject **v2; // rsi
  __int64 v4; // rax
  int v5; // r10d
  int v6; // r9d
  int v7; // edx
  int v8; // r8d
  int v9; // r11d
  int v10; // ecx
  int v11; // r8d
  CBaseObject *v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rax
  unsigned int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v18[4]; // [rsp+48h] [rbp-38h] BYREF
  float v19[4]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v20[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return (unsigned int)v1;
  v1 = CCompositor::CreateProxy<CCachedVisualImageProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         (char *)this + 24);
  if ( v1 < 0 )
  {
    v16 = 602;
    goto LABEL_14;
  }
  v1 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, _DWORD *))(*(_QWORD *)this + 16LL))(this, v18);
  if ( v1 < 0 )
  {
    v16 = 605;
    goto LABEL_14;
  }
  v1 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int64 *))(*(_QWORD *)this + 24LL))(this, &v17);
  if ( v1 < 0 )
  {
    v16 = 608;
    goto LABEL_14;
  }
  v4 = v17;
  v5 = v18[0];
  v6 = v18[1];
  v7 = v18[2];
  v8 = v18[3];
  v9 = HIDWORD(v17);
  *((_DWORD *)this + 8) = v18[0];
  *((_DWORD *)this + 9) = v6;
  *((_DWORD *)this + 10) = v7;
  *((_DWORD *)this + 11) = v8;
  *((_QWORD *)this + 6) = v4;
  if ( !(_DWORD)v4 || (v10 = v6, !v9) )
  {
    *((_DWORD *)this + 12) = v7 - v5;
    *((_DWORD *)this + 13) = v8 - v6;
    v10 = v6;
  }
  v11 = v8 - v10;
  v12 = *v2;
  v19[1] = (float)v6;
  v19[0] = (float)v5;
  v19[2] = (float)(v7 - v5) + (float)v5;
  *(double *)&v20[1] = (double)v9;
  v19[3] = (float)v11 + (float)v6;
  v13 = _mm_cvtsi32_si128(v4);
  v14 = *((_QWORD *)this + 2);
  v20[0] = *(_OWORD *)&_mm_cvtepi32_pd(v13);
  v1 = CCachedVisualImageProxy::Update(v12, v19, v20, 0LL, 0LL, *(_QWORD *)(v14 + 16), 0);
  if ( v1 < 0 )
  {
    v16 = 640;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, v16, 0LL);
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
  }
  return (unsigned int)v1;
}
