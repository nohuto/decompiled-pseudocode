/*
 * XREFs of ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CB20
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C7B0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008CA50 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180211D90 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z @ 0x18000EEE8 (-GetWindowBackgroundTreatmentVisual@CWindowBackgroundTreatment@@SAPEBVCVisual@@PEBV2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x18008D4A8 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x18008D714 (-GetBackdropVisualImage@CVisual@@QEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x18008E708 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z @ 0x1800C8140 (-GetCache@CDrawListCacheSet@@QEAAJIIPEBVIDeviceTarget@@PEAPEAVCDrawListCache@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800D4DD0 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEBAXXZ @ 0x1800D8EF8 (-EtwLogCurrentState@CDrawingContext@@QEBAXXZ.c)
 *     ?InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@PEBVIDeviceTarget@@II@Z @ 0x1800F4C8C (-InvalidateDrawListCaches@CVisual@@QEBAXPEBVCVisualTree@@PEBVIDeviceTarget@@II@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0pffffss_EventWriteTransfer @ 0x1801137C0 (McTemplateU0pffffss_EventWriteTransfer.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801B2C98 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisual::RenderContent(CVisual *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned int v3; // r13d
  unsigned int v7; // r9d
  char v8; // cl
  char v9; // al
  __int64 v10; // r15
  struct CDrawListCache *v11; // rbx
  struct _LIST_ENTRY *v12; // r14
  int v13; // ebp
  const struct IDeviceTarget *v14; // r12
  struct _LIST_ENTRY *v15; // rcx
  int Cache; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  const char *v22; // rbx
  struct CBackdropVisualImage *BackdropVisualImage; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  float v26; // xmm0_4
  float v27; // xmm1_4
  int v28; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct CDrawListCache *v31; // rcx
  CVisual *WindowBackgroundTreatmentVisual; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  const char *v34; // rbp
  const char *v35; // rbx
  char v36; // r14
  __int64 v37; // rcx
  int v38; // edx
  int v39; // ecx
  int v40; // r9d
  unsigned int v41; // [rsp+20h] [rbp-B8h]
  char v42[8]; // [rsp+50h] [rbp-88h] BYREF
  struct CDrawListCache *v43; // [rsp+58h] [rbp-80h] BYREF
  void *v44; // [rsp+68h] [rbp-70h] BYREF
  char v45[8]; // [rsp+70h] [rbp-68h] BYREF
  char v46[8]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v47; // [rsp+80h] [rbp-58h] BYREF
  float v48; // [rsp+88h] [rbp-50h]
  float v49; // [rsp+8Ch] [rbp-4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v3 = CCachedVisualImage::s_CVIEnsureBitmapCount;
  if ( CVisual::HasProtectedContent(this) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 2) + 1274LL) )
    {
      *a3 = 1;
      goto LABEL_15;
    }
    *((_BYTE *)a2 + 7964) = 1;
  }
  if ( *((_QWORD *)this + 32) )
  {
    v8 = *((_BYTE *)this + 272);
    v9 = 0;
    v42[0] = 0;
    if ( (v8 & 1) != 0 )
    {
      v22 = *(const char **)CVisualTreePath::GetDebugString(*((_QWORD *)a2 + 994), &v44);
      BackdropVisualImage = CVisual::GetBackdropVisualImage(this, *((const struct CVisualTreePath **)a2 + 994));
      v24 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v45, "pBVI=0x%p, bviPath=[%s]", BackdropVisualImage, v22);
      v25 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)v46, "Visual-HasBackdropInput-ValidateBVI");
      DwmDbg::Backdrops::LogBrushEtwEvent(v25, this, v24);
      if ( v44 )
        DefaultHeap::Free(v44);
      v26 = *((float *)this + 35);
      v27 = *((float *)this + 36);
      v42[0] = 1;
      v47 = 0LL;
      v48 = v26 + 0.0;
      v49 = v27 + 0.0;
      v28 = CDrawingContext::ValidateBVIEffectInputForRender(a2, &v47, v42);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x636,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
          (const char *)(unsigned int)v28);
LABEL_6:
        v10 = *((_QWORD *)this + 32);
        v11 = 0LL;
        v43 = 0LL;
        if ( !*((_BYTE *)a2 + 8043) )
          goto LABEL_12;
        v12 = (struct _LIST_ENTRY *)*((_QWORD *)a2 + 991);
        v13 = -2003292412;
        v14 = (const struct IDeviceTarget *)*((_QWORD *)a2 + 4);
        if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v12->Flink[11].Blink)(v12) )
        {
          v15 = (struct _LIST_ENTRY *)((char *)this + 336);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(this);
          if ( !TreeDataListHead )
            goto LABEL_37;
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink == TreeDataListHead )
            goto LABEL_37;
          while ( 1 )
          {
            v15 = Flink - 24;
            if ( Flink[2].Flink == v12 )
              break;
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_37;
          }
        }
        if ( v15 )
        {
          Cache = CDrawListCacheSet::GetCache((CDrawListCacheSet *)&v15[1], 0, 0, v14, &v43);
          v13 = Cache;
          if ( Cache >= 0 )
          {
            v11 = v43;
LABEL_12:
            v18 = v10 + *(int *)(*(_QWORD *)(v10 + 64) + 8LL) + 64LL;
            v19 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, char *, struct CDrawListCache *))(*(_QWORD *)v18 + 16LL))(
                    v18,
                    a2,
                    (char *)this + 140,
                    v11);
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_180346338, 3LL, v19, 0x102Bu);
            goto LABEL_13;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, Cache, 0x6FDu);
          v11 = v43;
        }
LABEL_37:
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, &dword_180346338, 3LL, v13, 0x1026u);
LABEL_13:
        if ( v11 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
          {
            CMILRefCountImpl::AddReference((struct CDrawListCache *)((char *)v11 + 8));
            (*(void (__fastcall **)(struct CDrawListCache *))(*(_QWORD *)v43 + 24LL))(v43);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 2, 0xFFFFFFFF) == 1 )
            {
              v31 = v43;
              --*((_DWORD *)v11 + 2);
              (*(void (__fastcall **)(struct CDrawListCache *, __int64))(*(_QWORD *)v31 + 16LL))(v31, 1LL);
            }
          }
        }
        goto LABEL_15;
      }
      v8 = *((_BYTE *)this + 272);
      v9 = v42[0];
    }
    if ( (v8 & 4) != 0 )
    {
      WindowBackgroundTreatmentVisual = CWindowBackgroundTreatment::GetWindowBackgroundTreatmentVisual(this);
      if ( !WindowBackgroundTreatmentVisual
        || (WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(WindowBackgroundTreatmentVisual)) == 0LL )
      {
LABEL_31:
        CVisual::InvalidateDrawListCaches(
          this,
          *((const struct CVisualTree **)a2 + 991),
          *((const struct IDeviceTarget **)a2 + 4),
          v7,
          v41);
        goto LABEL_6;
      }
      v9 = *((_BYTE *)WindowBackgroundTreatmentInternal + 302);
      v42[0] = v9;
    }
    if ( !v9 )
      goto LABEL_6;
    goto LABEL_31;
  }
LABEL_15:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0
    || !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 256LL))(this) )
  {
    return 0LL;
  }
  v34 = &byte_18032C47F;
  v35 = &byte_18032C47F;
  v36 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 204LL) )
  {
    v34 = "Window";
    goto LABEL_67;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 177LL) )
    v34 = "Sprite";
  else
    v36 = 0;
  v37 = *((_QWORD *)this + 32);
  if ( !v37 )
    goto LABEL_67;
  if ( v3 != CCachedVisualImage::s_CVIEnsureBitmapCount )
  {
    v35 = "CVI";
    goto LABEL_67;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 56LL))(v37, 127LL) )
  {
    v35 = "PG";
    goto LABEL_66;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
         *((_QWORD *)this + 32),
         144LL) )
  {
    v35 = "RD";
    goto LABEL_66;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
         *((_QWORD *)this + 32),
         40LL) )
  {
    v35 = "CS";
    goto LABEL_66;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
         *((_QWORD *)this + 32),
         196LL) )
  {
    v35 = "VisBmp";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
              *((_QWORD *)this + 32),
              206LL) )
  {
    v35 = "YCbCr";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
              *((_QWORD *)this + 32),
              173LL) )
  {
    v35 = "Snap";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
              *((_QWORD *)this + 32),
              86LL) )
  {
    v35 = "Ink";
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(
              *((_QWORD *)this + 32),
              64LL) )
  {
    v35 = "GenInk";
  }
  else if ( !v36 )
  {
LABEL_66:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) == 0 )
      return 0LL;
  }
LABEL_67:
  CDrawingContext::EtwLogCurrentState(a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0pffffss_EventWriteTransfer(
      v39,
      v38,
      (_DWORD)this,
      v40,
      *((_DWORD *)this + 44),
      *((_DWORD *)this + 45),
      *((_DWORD *)this + 46),
      (__int64)v34,
      (__int64)v35);
  return 0LL;
}
