/*
 * XREFs of ?AddNewComposeTopContent@CDesktopTree@@QEAAJPEAVIBitmapResource@@AEBVCShape@@AEBVCMILMatrix@@@Z @ 0x180016F54
 * Callers:
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B8310 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix.c)
 * Callees:
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x180017000 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 *     ??0CComposeTop@@QEAA@XZ @ 0x180017098 (--0CComposeTop@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x180087ED0 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??1CComposeTop@@QEAA@XZ @ 0x18019DB30 (--1CComposeTop@@QEAA@XZ.c)
 */

__int64 __fastcall CDesktopTree::AddNewComposeTopContent(
        CDesktopTree *this,
        struct IBitmapResource *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4)
{
  struct CShape **v4; // rsi
  struct CShape *v6; // rdi
  CComposeTop *v9; // rax
  unsigned int v10; // ecx
  CComposeTop *v11; // rbx
  CComposeTop *v12; // rdi
  unsigned int v13; // ebx
  CComposeTop *v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  unsigned int v20; // ecx
  struct CShape *v21; // [rsp+60h] [rbp+8h] BYREF

  v4 = (struct CShape **)((char *)this + 4744);
  v6 = (struct CShape *)*((_QWORD *)this + 593);
  if ( v6 )
    goto LABEL_7;
  v9 = (CComposeTop *)operator new(0xA8uLL);
  if ( v9 )
    v11 = CComposeTop::CComposeTop(v9);
  else
    v11 = 0LL;
  if ( v4 == &v21 )
  {
    if ( !v11 )
      goto LABEL_6;
    CComposeTop::~CComposeTop(v11);
    v15 = v11;
  }
  else
  {
    v12 = *v4;
    *v4 = v11;
    if ( !v12 )
      goto LABEL_6;
    CComposeTop::~CComposeTop(v12);
    v15 = v12;
  }
  operator delete(v15, 0xA8uLL);
LABEL_6:
  v6 = *v4;
  if ( !*v4 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x71u, 0LL);
    return v13;
  }
LABEL_7:
  v13 = 0;
  if ( !ShapeBoundsEmpty(a3) )
  {
    if ( *(_QWORD *)v6 != GetCurrentFrameId() )
    {
      v16 = *((_QWORD *)v6 + 2);
      *((_QWORD *)v6 + 2) = 0LL;
      if ( v16 )
        std::default_delete<CShape>::operator()();
      *(_QWORD *)v6 = GetCurrentFrameId();
    }
    v17 = CShape::CopyShape(a3, 0LL, &v21);
    v13 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x33u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v13, 0x76u, 0LL);
    }
    else
    {
      v19 = *((_QWORD *)v6 + 2);
      *((_QWORD *)v6 + 2) = v21;
      if ( v19 )
        std::default_delete<CShape>::operator()();
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=((char *)v6 + 8, a2);
      *(_OWORD *)((char *)v6 + 24) = *(_OWORD *)a4;
      *(_OWORD *)((char *)v6 + 40) = *((_OWORD *)a4 + 1);
      *(_OWORD *)((char *)v6 + 56) = *((_OWORD *)a4 + 2);
      *(_OWORD *)((char *)v6 + 72) = *((_OWORD *)a4 + 3);
      *((_DWORD *)v6 + 22) = *((_DWORD *)a4 + 16);
      *(_OWORD *)((char *)v6 + 92) = *(_OWORD *)a4;
      *(_OWORD *)((char *)v6 + 108) = *((_OWORD *)a4 + 1);
      *(_OWORD *)((char *)v6 + 124) = *((_OWORD *)a4 + 2);
      *(_OWORD *)((char *)v6 + 140) = *((_OWORD *)a4 + 3);
      *((_DWORD *)v6 + 39) = *((_DWORD *)a4 + 16);
      CMILMatrix::Invert((struct CShape *)((char *)v6 + 92));
    }
  }
  return v13;
}
