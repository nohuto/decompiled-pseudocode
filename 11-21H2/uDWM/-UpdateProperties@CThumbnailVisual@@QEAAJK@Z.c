/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001CBFC
 * Callers:
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180018FF0 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180019200 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?Cloak@CThumbnailData@@QEAAJ_N@Z @ 0x1801023CC (-Cloak@CThumbnailData@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180008C4C (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x18000AF08 (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180014FC4 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18001A1D0 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001ABA4 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x18001C2D0 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001C938 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18001CE70 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x18001CF18 (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x18001D828 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180022F34 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A190 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180035AB8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180036354 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800D3F40 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualIma.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800E3670 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateProperties(CThumbnailVisual *this, unsigned int a2)
{
  int v2; // esi
  int v3; // edi
  int updated; // r14d
  _DWORD *v6; // rax
  int v7; // edx
  int v8; // ecx
  LONG v9; // eax
  LONG v10; // eax
  int BrushForCVI; // eax
  __int64 v12; // rax
  CBaseObject *v14; // rcx
  CBaseObject *v15; // rcx
  CBaseObject *v16; // rcx
  __int64 v17; // rax
  char v18; // al
  double v19; // xmm1_8
  int v20; // r9d
  unsigned int v21; // eax
  CBaseObject *v22; // rcx
  __int64 v23; // rax
  double v24; // xmm1_8
  CBaseObject *v25; // rcx
  CBaseObject *v26; // rcx
  __int64 v27; // r8
  bool v28; // r11
  int v29; // ecx
  int v30; // r9d
  int v31; // eax
  int v32; // ecx
  int v33; // r10d
  int v34; // eax
  __int64 v35; // rdx
  CBaseObject *v36; // rcx
  struct tagPOINT **v37; // r14
  struct tagPOINT v38; // rcx
  struct IDwmWindow *v39; // rax
  __m128i *v40; // rbp
  __int64 v41; // r10
  unsigned int v42; // eax
  unsigned int v43; // r8d
  CBaseObject *v44; // rcx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // rcx
  CBaseObject *v47; // rcx
  CBaseObject *v48; // rcx
  CBaseObject *v49; // rcx
  unsigned int v50; // [rsp+20h] [rbp-38h]
  struct tagPOINT v51; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2;
  v3 = 0;
  updated = CThumbnailVisual::_UpdateAnimatedProperties(this, a2);
  if ( (v2 & 4) != 0 )
  {
    v17 = *((_QWORD *)this + 47);
    if ( v17 )
    {
      v18 = *(_BYTE *)(v17 + 35);
      if ( *((_BYTE *)this + 364) != v18 )
      {
        *((_BYTE *)this + 364) = v18;
        if ( v18 )
        {
          v19 = 0.0;
          *((_QWORD *)this + 43) = *((_QWORD *)this + 24);
        }
        else
        {
          v19 = *((double *)this + 43);
        }
        CVisual::SetOpacity(this, v19);
      }
    }
  }
  if ( updated < 0 && (v2 & 1) != 0 && *((_QWORD *)this + 47) )
  {
    if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
    {
      CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
    }
    else
    {
      v51 = *(struct tagPOINT *)(*((_QWORD *)this + 47) + 40LL);
      CVisual::SetOffset(this, &v51);
    }
    v6 = (_DWORD *)*((_QWORD *)this + 47);
    v7 = v6[13] - v6[11];
    v8 = v6[12] - v6[10];
    v9 = 0;
    if ( v8 >= 0 )
      v9 = v8;
    v51.x = v9;
    v10 = 0;
    if ( v7 >= 0 )
      v10 = v7;
    v51.y = v10;
    BrushForCVI = (*(__int64 (__fastcall **)(CThumbnailVisual *, struct tagPOINT *))(*(_QWORD *)this + 96LL))(
                    this,
                    &v51);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v50 = 321;
      goto LABEL_55;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
    if ( CThumbnailVisual::_IsImmersiveIconic(this) )
      CThumbnailVisual::SetDirtyFlags(this, 0x10000u);
  }
  if ( !*((_BYTE *)this + 364) && updated < 0 && (v2 & 4) != 0 )
  {
    v23 = *((_QWORD *)this + 47);
    if ( v23 )
    {
      if ( (*(_BYTE *)(v23 + 36) & 4) != 0 )
      {
        v24 = (double)*(unsigned __int8 *)(v23 + 72) / 255.0;
        *((double *)this + 43) = v24;
        CVisual::SetOpacity(this, v24);
      }
    }
  }
  if ( (v2 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x4000u);
  if ( (v2 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*(CWindowData **)(*((_QWORD *)this + 47) + 24LL))
     || !AreAllMarginsZero((const struct _MARGINS *)(*(_QWORD *)(*((_QWORD *)this + 47) + 24LL) + 64LL))) )
  {
    v14 = (CBaseObject *)*((_QWORD *)this + 49);
    if ( v14 )
    {
      CBaseObject::Release(v14);
      *((_QWORD *)this + 49) = 0LL;
    }
    v15 = (CBaseObject *)*((_QWORD *)this + 55);
    if ( v15 )
    {
      CBaseObject::Release(v15);
      *((_QWORD *)this + 55) = 0LL;
    }
    v16 = (CBaseObject *)*((_QWORD *)this + 48);
    if ( v16 )
    {
      CBaseObject::Release(v16);
      *((_QWORD *)this + 48) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  }
  if ( (v2 & 8) != 0 )
  {
    v12 = *((_QWORD *)this + 47);
    if ( v12 )
    {
      *((_BYTE *)this + 480) = *(_DWORD *)(v12 + 73) != 0;
      CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
    }
  }
  if ( (v2 & 0x80000) != 0 )
  {
    BrushForCVI = CVisual::MoveToFront(this, 0);
    v3 = BrushForCVI;
    if ( BrushForCVI < 0 )
    {
      v50 = 366;
      goto LABEL_55;
    }
  }
  if ( (v2 & 0x400000) != 0 )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  if ( (v2 & 0xC000000) == 0xC000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
  if ( (v2 & 0x30000000) == 0x30000000 )
    CThumbnailVisual::SetDirtyFlags(this, 0x20000u);
  if ( (v2 & 0xC0000000) == 0xC0000000 )
  {
    CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
    if ( (v2 & 0x40000000) != 0 )
    {
      BrushForCVI = CThumbnailVisual::EnsureVisualBrush(this);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v50 = 389;
        goto LABEL_55;
      }
    }
    else
    {
      v25 = (CBaseObject *)*((_QWORD *)this + 49);
      if ( v25 )
      {
        CBaseObject::Release(v25);
        *((_QWORD *)this + 49) = 0LL;
      }
      v26 = (CBaseObject *)*((_QWORD *)this + 55);
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *((_QWORD *)this + 55) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
    }
  }
  if ( (v2 & 0x100000) != 0 )
  {
    if ( *((_QWORD *)this + 48) && *((_QWORD *)this + 55) )
    {
      v27 = *((_QWORD *)this + 47);
      v28 = 0;
      if ( (*(_BYTE *)(v27 + 36) & 3) == 3 && *((_BYTE *)this + 482) )
      {
        v29 = 0;
        v30 = *(_DWORD *)(v27 + 48) - *(_DWORD *)(v27 + 40);
        if ( *(_DWORD *)(v27 + 64) - *(_DWORD *)(v27 + 56) >= 0 )
          v29 = *(_DWORD *)(v27 + 64) - *(_DWORD *)(v27 + 56);
        v31 = 0;
        if ( v30 >= 0 )
          v31 = *(_DWORD *)(v27 + 48) - *(_DWORD *)(v27 + 40);
        if ( v31 == v29 )
        {
          v32 = 0;
          v33 = *(_DWORD *)(v27 + 52) - *(_DWORD *)(v27 + 44);
          v34 = 0;
          if ( v33 >= 0 )
            v32 = *(_DWORD *)(v27 + 52) - *(_DWORD *)(v27 + 44);
          if ( *(_DWORD *)(v27 + 68) - *(_DWORD *)(v27 + 60) >= 0 )
            v34 = *(_DWORD *)(v27 + 68) - *(_DWORD *)(v27 + 60);
          if ( v32 == v34 )
          {
            if ( v30 < 0 )
              v30 = 0;
            if ( v30 == *((_DWORD *)this + 129) )
            {
              if ( v33 < 0 )
                v33 = 0;
              if ( v33 == *((_DWORD *)this + 130) )
                v28 = 1;
            }
          }
        }
      }
      CSecondaryWindowRepresentation::MakeStatic(
        *((CSecondaryWindowRepresentation **)this + 48),
        v28,
        (CThumbnailVisual *)((char *)this + 540),
        (struct CCachedVisualImageProxy **)this + 55);
      v36 = (CBaseObject *)*((_QWORD *)this + 49);
      if ( v36 )
      {
        CBaseObject::Release(v36);
        *((_QWORD *)this + 49) = 0LL;
      }
      BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(
                      (__int64)v36,
                      v35,
                      *((_QWORD *)this + 55),
                      *((_QWORD *)this + 51),
                      0LL,
                      (CBaseObject **)this + 49);
      v3 = BrushForCVI;
      if ( BrushForCVI < 0 )
      {
        v50 = 425;
        goto LABEL_55;
      }
      if ( !*(_BYTE *)(*((_QWORD *)this + 48) + 161LL) )
      {
        if ( CThumbnailVisual::_IsImmersiveIconic(this) )
        {
          v2 = 0x800000;
          *(_DWORD *)(*((_QWORD *)this + 47) + 36LL) |= 0x800000u;
        }
        else
        {
          CThumbnailVisual::SetDirtyFlags(this, 0x8000u);
          CThumbnailVisual::SetDirtyFlags(this, 0x40000u);
          CThumbnailVisual::SetDirtyFlags(this, 0x1000u);
          *((_BYTE *)this + 482) = 0;
          CVisual::RenderRecursive(this);
        }
      }
      goto LABEL_32;
    }
    v37 = (struct tagPOINT **)((char *)this + 376);
    if ( !CWindowData::IsShellManaged(*(CWindowData **)(*((_QWORD *)this + 47) + 24LL)) )
      goto LABEL_117;
    v38 = (*v37)[3];
    if ( *(_QWORD *)(*(_QWORD *)&v38 + 480LL) )
      goto LABEL_117;
    v39 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v38 + 24LL) + 360LL))(*(_QWORD *)(*(_QWORD *)&v38 + 24LL));
    if ( !v39 )
      goto LABEL_117;
    v51 = 0LL;
    BrushForCVI = CWindowList::GetSyncedWindowData(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                    v39,
                    0,
                    (struct CWindowData **)&v51);
    v3 = BrushForCVI;
    if ( BrushForCVI >= 0 )
    {
      DynArray<CThumbnailData *,0>::Remove((__int64 *)(*(_QWORD *)&(*v37)[3] + 568LL), (_QWORD *)this + 47);
      v40 = (__m128i *)v51;
      v41 = *(_QWORD *)&v51 + 568LL;
      (*v37)[3] = v51;
      v42 = *(_DWORD *)(v41 + 24);
      v43 = v42 + 1;
      if ( v42 + 1 < v42 )
      {
        v3 = -2147024362;
        v21 = 181;
        goto LABEL_57;
      }
      if ( v43 > *(_DWORD *)(v41 + 20) )
      {
        v3 = DynArrayImpl<0>::AddMultipleAndSet(v41, 8LL, 1LL, (char *)this + 376);
        if ( v3 < 0 )
        {
          v21 = 192;
LABEL_57:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, v21);
          v20 = v3;
          v50 = 458;
          goto LABEL_58;
        }
      }
      else
      {
        v3 = 0;
        *(_QWORD *)(*(_QWORD *)v41 + 8LL * *(unsigned int *)(v41 + 24)) = *v37;
        *(_DWORD *)(v41 + 24) = v43;
      }
      if ( (v2 & 0x10) == 0 )
        OffsetRect((LPRECT)&(*v37)[7], _mm_cvtsi128_si32(v40[6]), _mm_cvtsi128_si32(_mm_srli_si128(v40[6], 8)));
LABEL_117:
      v44 = (CBaseObject *)*((_QWORD *)this + 49);
      if ( v44 )
      {
        CBaseObject::Release(v44);
        *((_QWORD *)this + 49) = 0LL;
      }
      v45 = (CBaseObject *)*((_QWORD *)this + 55);
      if ( v45 )
      {
        CBaseObject::Release(v45);
        *((_QWORD *)this + 55) = 0LL;
      }
      v46 = (CBaseObject *)*((_QWORD *)this + 48);
      if ( v46 )
      {
        CBaseObject::Release(v46);
        *((_QWORD *)this + 48) = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
      goto LABEL_32;
    }
    v50 = 455;
LABEL_55:
    v20 = BrushForCVI;
LABEL_58:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, v50);
LABEL_59:
    v22 = (CBaseObject *)*((_QWORD *)this + 59);
    if ( v22 )
      CBaseObject::Release(v22);
    *((_QWORD *)this + 59) = 0LL;
    return (unsigned int)v3;
  }
LABEL_32:
  if ( (v2 & 0x800000) != 0 )
  {
    v47 = (CBaseObject *)*((_QWORD *)this + 49);
    if ( v47 )
    {
      CBaseObject::Release(v47);
      *((_QWORD *)this + 49) = 0LL;
    }
    v48 = (CBaseObject *)*((_QWORD *)this + 55);
    if ( v48 )
    {
      CBaseObject::Release(v48);
      *((_QWORD *)this + 55) = 0LL;
    }
    v49 = (CBaseObject *)*((_QWORD *)this + 48);
    if ( v49 )
    {
      CBaseObject::Release(v49);
      *((_QWORD *)this + 48) = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
    CThumbnailVisual::OnRepresentationTypeUpdated(this);
  }
  if ( *((_BYTE *)this + 480) && !*((_DWORD *)this + 70) )
    CThumbnailVisual::SetDirtyFlags(this, 0x2000u);
  if ( v3 < 0 )
    goto LABEL_59;
  return (unsigned int)v3;
}
