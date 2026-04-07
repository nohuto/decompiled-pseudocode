/*
 * XREFs of ?ValidateResources@CText@@AEAAJXZ @ 0x180028070
 * Callers:
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x180027ED0 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180028BA0 (-ValidateVisual@CText@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000DD0C (-Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x18000F9E0 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x1800159E8 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AB4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18001A870 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18002433C (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18002726C (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::ValidateResources(CText *this)
{
  int v1; // eax
  CBaseObject *v2; // r13
  signed int v4; // edi
  HDC v5; // r14
  CBaseObject *v6; // rbx
  CBaseObject *v7; // r15
  CBaseObject *v8; // r12
  struct CBaseTransformProxy **v10; // r12
  CBaseObject *v11; // rcx
  CTextCache *v12; // r15
  __int64 v13; // rbx
  HDC v14; // rcx
  COLORREF v15; // edx
  int v16; // eax
  int v17; // r15d
  int right; // ecx
  int bottom; // eax
  LONG v20; // eax
  LONG v21; // ecx
  int v22; // edx
  int v23; // ecx
  HBITMAP Bitmap; // rax
  HBITMAP v25; // rbx
  HBRUSH SolidBrush; // rax
  int v27; // eax
  const struct _MARGINS *v28; // rdx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int updated; // eax
  UINT TextAlign; // eax
  int v36; // r9d
  signed int LastError; // eax
  signed int v38; // eax
  signed int v39; // eax
  signed int v40; // eax
  signed int v41; // eax
  unsigned int format; // [rsp+28h] [rbp-49h]
  struct CPopInstruction *v43; // [rsp+38h] [rbp-39h] BYREF
  struct CDrawImageInstruction *v44; // [rsp+40h] [rbp-31h] BYREF
  struct CBitmapSource *v45; // [rsp+48h] [rbp-29h] BYREF
  struct CPushTransformInstruction *v46; // [rsp+50h] [rbp-21h] BYREF
  UINT align; // [rsp+58h] [rbp-19h]
  struct IWICBitmap *v48; // [rsp+60h] [rbp-11h] BYREF
  HGDIOBJ h; // [rsp+68h] [rbp-9h]
  HGDIOBJ ho; // [rsp+70h] [rbp-1h]
  HGDIOBJ v51; // [rsp+78h] [rbp+7h]
  __int64 v52; // [rsp+80h] [rbp+Fh]
  struct tagRECT rc; // [rsp+88h] [rbp+17h] BYREF

  v1 = *((_DWORD *)this + 22);
  v2 = 0LL;
  v46 = 0LL;
  v43 = 0LL;
  v4 = 0;
  ho = 0LL;
  v5 = 0LL;
  h = 0LL;
  v51 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  align = 0;
  if ( (v1 & 0x1000) == 0 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_3;
  }
  CRenderDataVisual::ClearInstructions(this);
  v10 = (struct CBaseTransformProxy **)((char *)this + 400);
  v11 = (CBaseObject *)*((_QWORD *)this + 50);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *v10 = 0LL;
  }
  if ( !*((_QWORD *)this + 37) )
    goto LABEL_69;
  v12 = (CTextCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
  if ( !v12 )
    goto LABEL_69;
  v5 = (HDC)*((_QWORD *)v12 + 13);
  if ( !v5 )
    goto LABEL_69;
  v13 = *((_QWORD *)this + 16);
  v14 = (HDC)*((_QWORD *)v12 + 13);
  v15 = *((_DWORD *)this + 105);
  v52 = v13;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = v13;
  SetBkColor(v14, v15);
  SetTextColor(v5, *((_DWORD *)this + 104));
  if ( (*((_BYTE *)this + 288) & 2) != 0 )
  {
    TextAlign = GetTextAlign(v5);
    align = SetTextAlign(v5, TextAlign | 0x100);
  }
  v16 = CTextCache::SetFont(v12, (const struct tagLOGFONTW *)((char *)this + 304));
  v4 = v16;
  if ( v16 < 0 )
  {
    format = 289;
LABEL_74:
    v36 = v16;
LABEL_79:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, format);
    v6 = v44;
    v7 = v45;
    v8 = v43;
    v2 = v46;
    goto LABEL_63;
  }
  v17 = *((_BYTE *)this + 288) & 2;
  if ( (*((_BYTE *)this + 288) & 1) != 0 )
  {
    right = *((_DWORD *)this + 102);
    bottom = *((_DWORD *)this + 103);
  }
  else
  {
    SetLastError(0);
    if ( !DrawTextW(v5, *((LPCWSTR *)this + 37), -1, &rc, v17 | 0xC20) )
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      format = 305;
      goto LABEL_76;
    }
    right = rc.right;
    bottom = rc.bottom;
    *((_BYTE *)this + 288) |= 1u;
    *((_DWORD *)this + 102) = right;
    *((_DWORD *)this + 103) = bottom;
  }
  if ( right >= (int)v13 )
    right = v13;
  rc.right = right;
  if ( bottom >= SHIDWORD(v52) )
    bottom = HIDWORD(v52);
  rc.bottom = bottom;
  if ( right <= 0 || bottom <= 0 )
    goto LABEL_69;
  SetLastError(0);
  if ( !DrawTextW(v5, *((LPCWSTR *)this + 37), -1, &rc, v17 | 0x8C24) )
  {
    v38 = GetLastError();
    v4 = v38;
    if ( v38 > 0 )
      v4 = (unsigned __int16)v38 | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    format = 326;
    goto LABEL_78;
  }
  v20 = rc.right;
  v21 = rc.bottom;
  if ( rc.right >= (int)v13 )
    v20 = v13;
  rc.right = v20;
  if ( rc.bottom >= SHIDWORD(v52) )
    v21 = HIDWORD(v52);
  rc.bottom = v21;
  if ( v20 <= rc.left || v21 <= rc.top )
  {
LABEL_69:
    v6 = v44;
    v7 = v45;
    v8 = v43;
    v2 = v46;
    goto LABEL_62;
  }
  SetLastError(0);
  v22 = 0;
  v23 = 0;
  if ( rc.bottom - rc.top >= 0 )
    v22 = rc.bottom - rc.top;
  if ( rc.right - rc.left >= 0 )
    v23 = rc.right - rc.left;
  Bitmap = CreateBitmap(v23, v22, 1u, 0x20u, 0LL);
  ho = Bitmap;
  v25 = Bitmap;
  if ( !Bitmap )
  {
    v39 = GetLastError();
    v4 = v39;
    if ( v39 > 0 )
      v4 = (unsigned __int16)v39 | 0x80070000;
    format = 338;
    goto LABEL_76;
  }
  h = SelectObject(v5, Bitmap);
  SetLastError(0);
  SolidBrush = CreateSolidBrush(*((_DWORD *)this + 105));
  v51 = SolidBrush;
  if ( !SolidBrush )
  {
    v40 = GetLastError();
    v4 = v40;
    if ( v40 > 0 )
      v4 = (unsigned __int16)v40 | 0x80070000;
    format = 344;
    goto LABEL_76;
  }
  FillRect(v5, &rc, SolidBrush);
  SetLastError(0);
  if ( !DrawTextW(v5, *((LPCWSTR *)this + 37), -1, &rc, v17 | 0x8824) )
  {
    v41 = GetLastError();
    v4 = v41;
    if ( v41 > 0 )
      v4 = (unsigned __int16)v41 | 0x80070000;
    format = 351;
LABEL_76:
    if ( v4 >= 0 )
      v4 = -2003304445;
LABEL_78:
    v36 = v4;
    goto LABEL_79;
  }
  GdiFlush();
  v16 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                             + 30)
                                                                                          + 168LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30),
          v25,
          0LL,
          2LL,
          &v48);
  v4 = v16;
  if ( v16 < 0 )
  {
    format = 355;
    goto LABEL_74;
  }
  v16 = CCompositor::CreateProxy<CMatrixTransformProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          (CBaseObject **)this + 50);
  v4 = v16;
  if ( v16 < 0 )
  {
    format = 359;
    goto LABEL_74;
  }
  v16 = CPushTransformInstruction::Create(*v10, &v46);
  v4 = v16;
  if ( v16 < 0 )
  {
    format = 360;
    goto LABEL_74;
  }
  v2 = v46;
  v27 = CRenderDataVisual::AddInstruction(this, v46);
  v4 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x169u);
LABEL_100:
    v7 = v45;
LABEL_102:
    v6 = v44;
LABEL_104:
    v8 = v43;
    goto LABEL_63;
  }
  v29 = CBitmapSource::Create(v48, v28, &v45);
  v4 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x16Bu);
    goto LABEL_100;
  }
  v7 = v45;
  v30 = CDrawImageInstruction::Create(v45, &rc, &v44);
  v4 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x16Du);
    goto LABEL_102;
  }
  v6 = v44;
  v31 = CRenderDataVisual::AddInstruction(this, v44);
  v4 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x16Eu);
    goto LABEL_104;
  }
  v32 = CPopInstruction::Create(&v43);
  v4 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x170u);
    goto LABEL_104;
  }
  v8 = v43;
  v33 = CRenderDataVisual::AddInstruction(this, v43);
  v4 = v33;
  if ( v33 >= 0 )
  {
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
LABEL_62:
    *((_DWORD *)this + 22) &= ~0x1000u;
    v1 = *((_DWORD *)this + 22);
LABEL_3:
    if ( (v1 & 0x8000) != 0 )
    {
      updated = CText::UpdateAlignmentTransform(this);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x17Eu);
        goto LABEL_6;
      }
      *((_DWORD *)this + 22) &= ~0x8000u;
    }
    if ( (*((_BYTE *)this + 92) & 1) != 0 )
      (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
LABEL_6:
    if ( !v5 )
      goto LABEL_7;
    goto LABEL_63;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x171u);
LABEL_63:
  if ( (*((_BYTE *)this + 288) & 2) != 0 )
    SetTextAlign(v5, align);
  if ( h )
    SelectObject(v5, h);
LABEL_7:
  if ( ho )
    DeleteObject(ho);
  if ( v51 )
    DeleteObject(v51);
  if ( v2 )
    CBaseObject::Release(v2);
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v48 )
    ((void (__fastcall *)(struct IWICBitmap *))v48->lpVtbl->Release)(v48);
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v4;
}
