/*
 * XREFs of ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18000995C
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180004EA8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x180008790 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x180009004 (-UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x180002B50 (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180009670 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180009DA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180009F8C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180009FFC (-_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x18000A2DC (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImageProxy@@PEAVCRectResourceProxy@@PEAVCDoubleResourceProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18000AB7C (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCCachedVisualImag.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x180015708 (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18001DA50 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18001F59C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18002E42C (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800341D8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180047520 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualImageProxy@@@Z @ 0x1800D8BAC (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCCachedVisualIma.c)
 *     ?OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ @ 0x1800E4EB4 (-OnRepresentationTypeUpdated@CThumbnailVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateProperties(struct CCachedVisualImageProxy **this, unsigned int a2)
{
  int v2; // r14d
  unsigned int v3; // ebp
  int v4; // edi
  int updated; // r12d
  struct tagPOINT **v7; // rsi
  CBaseObject **v8; // r12
  CBaseObject **v9; // r14
  CBaseObject **v10; // r15
  int v12; // edx
  LONG v13; // eax
  LONG v14; // eax
  int v15; // eax
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  struct tagPOINT v19; // rcx
  struct IDwmWindow *v20; // rax
  int SyncedWindowData; // eax
  __m128i *v22; // r15
  __int64 v23; // r10
  unsigned int v24; // eax
  unsigned int v25; // r8d
  CBaseObject *v26; // rcx
  CBaseObject *v27; // rcx
  struct CCachedVisualImageProxy *v28; // rax
  char v29; // al
  double v30; // xmm1_8
  CBaseObject *v31; // rcx
  struct tagPOINT *v32; // rax
  double v33; // xmm1_8
  int v34; // eax
  int v35; // eax
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  struct tagPOINT *v38; // r9
  bool v39; // r11
  _BYTE *v40; // r13
  int v41; // ecx
  int v42; // r10d
  int v43; // eax
  int v44; // ecx
  int v45; // edx
  int v46; // eax
  __int64 v47; // rdx
  CBaseObject *v48; // rcx
  int BrushForCVI; // eax
  unsigned int v50; // eax
  struct tagPOINT v51; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = 0;
  updated = CThumbnailVisual::_UpdateAnimatedProperties((CThumbnailVisual *)this, a2);
  if ( (v3 & 4) != 0 )
  {
    v28 = this[47];
    v7 = (struct tagPOINT **)(this + 47);
    if ( v28 )
    {
      v29 = *((_BYTE *)v28 + 35);
      if ( *((_BYTE *)this + 364) != v29 )
      {
        *((_BYTE *)this + 364) = v29;
        if ( v29 )
        {
          v30 = 0.0;
          this[43] = this[24];
        }
        else
        {
          v30 = *((double *)this + 43);
        }
        CVisual::SetOpacity((CVisual *)this, v30);
      }
    }
    v2 = 0;
  }
  else
  {
    v7 = (struct tagPOINT **)(this + 47);
  }
  if ( updated < 0 && (v3 & 1) != 0 && *v7 )
  {
    if ( CThumbnailVisual::_IsThumbnailCVIStatic((CThumbnailVisual *)this) )
    {
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000u);
    }
    else
    {
      v51 = (*v7)[5];
      CVisual::SetOffset((CVisual *)this, &v51);
    }
    v12 = (*v7)[6].y - (*v7)[5].y;
    v13 = 0;
    if ( (*v7)[6].x - (*v7)[5].x >= 0 )
      v13 = (*v7)[6].x - (*v7)[5].x;
    v51.x = v13;
    v14 = 0;
    if ( v12 >= 0 )
      v14 = v12;
    v51.y = v14;
    v15 = (*((__int64 (__fastcall **)(struct CCachedVisualImageProxy **, struct tagPOINT *))*this + 13))(this, &v51);
    v4 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x141u, 0LL);
      goto LABEL_86;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x1000u);
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x10000u);
  }
  if ( !*((_BYTE *)this + 364) && updated < 0 && (v3 & 4) != 0 )
  {
    v32 = *v7;
    if ( *v7 )
    {
      if ( (v32[4].y & 4) != 0 )
      {
        v33 = (double)LOBYTE(v32[9].x) / 255.0;
        *((double *)this + 43) = v33;
        CVisual::SetOpacity((CVisual *)this, v33);
      }
    }
  }
  if ( (v3 & 2) != 0 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x4000u);
  if ( (v3 & 0x10) != 0
    && (!CWindowData::IsImmersiveWindow(*(CWindowData **)&(*v7)[3])
     || !AreAllMarginsZero((const struct _MARGINS *)(*(_QWORD *)&(*v7)[3] + 64LL))) )
  {
    v16 = this[49];
    if ( v16 )
    {
      CBaseObject::Release(v16);
      this[49] = 0LL;
    }
    v17 = this[55];
    if ( v17 )
    {
      CBaseObject::Release(v17);
      this[55] = 0LL;
    }
    v18 = this[48];
    if ( v18 )
    {
      CBaseObject::Release(v18);
      this[48] = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
  }
  if ( (v3 & 8) != 0 && *v7 )
  {
    *((_BYTE *)this + 480) = *(LONG *)((char *)&(*v7)[9].x + 1) != 0;
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
  }
  if ( (v3 & 0x80000) != 0 )
  {
    v34 = CVisual::MoveToFront((CVisual *)this, 0);
    v4 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x16Eu, 0LL);
      goto LABEL_86;
    }
  }
  if ( (v3 & 0x400000) != 0 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
  if ( (v3 & 0xC000000) == 0xC000000 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000u);
  if ( (v3 & 0x30000000) == 0x30000000 )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x20000u);
  if ( (v3 & 0xC0000000) == 0xC0000000 )
  {
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000u);
    if ( (v3 & 0x40000000) != 0 )
    {
      v35 = CThumbnailVisual::EnsureVisualBrush(this);
      v4 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x185u, 0LL);
        goto LABEL_86;
      }
    }
    else
    {
      v36 = this[49];
      if ( v36 )
      {
        CBaseObject::Release(v36);
        this[49] = 0LL;
      }
      v37 = this[55];
      if ( v37 )
      {
        CBaseObject::Release(v37);
        this[55] = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
    }
  }
  v8 = this + 48;
  if ( (v3 & 0x100000) == 0 )
  {
    v9 = this + 49;
    v10 = this + 55;
    goto LABEL_22;
  }
  if ( !*v8 || (v10 = this + 55, !this[55]) )
  {
    if ( !CWindowData::IsShellManaged(*(CWindowData **)&(*v7)[3])
      || (v19 = (*v7)[3], *(_QWORD *)(*(_QWORD *)&v19 + 480LL))
      || (v20 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v19 + 24LL) + 360LL))(*(_QWORD *)(*(_QWORD *)&v19 + 24LL))) == 0LL )
    {
LABEL_67:
      v9 = this + 49;
      v26 = this[49];
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *v9 = 0LL;
      }
      v10 = this + 55;
      v27 = this[55];
      if ( v27 )
      {
        CBaseObject::Release(v27);
        *v10 = 0LL;
      }
      if ( *v8 )
      {
        CBaseObject::Release(*v8);
        *v8 = 0LL;
      }
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
      goto LABEL_22;
    }
    v51 = 0LL;
    SyncedWindowData = CWindowList::GetSyncedWindowData(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                         v20,
                         0,
                         (struct CWindowData **)&v51);
    v4 = SyncedWindowData;
    if ( SyncedWindowData >= 0 )
    {
      DynArray<CThumbnailData *,0>::Remove((__int64 *)(*(_QWORD *)&(*v7)[3] + 568LL), v7);
      v22 = (__m128i *)v51;
      v23 = *(_QWORD *)&v51 + 568LL;
      (*v7)[3] = v51;
      v24 = *(_DWORD *)(v23 + 24);
      v25 = v24 + 1;
      if ( v24 + 1 < v24 )
      {
        v4 = -2147024362;
        v50 = 181;
        v2 = -2147024362;
      }
      else
      {
        if ( v25 <= *(_DWORD *)(v23 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)v23 + 8LL * v24) = *v7;
          *(_DWORD *)(v23 + 24) = v25;
          goto LABEL_65;
        }
        v2 = DynArrayImpl<0>::AddMultipleAndSet(v23, 8LL, 1LL, v7);
        v4 = v2;
        if ( v2 >= 0 )
        {
LABEL_65:
          v4 = v2;
          if ( (v3 & 0x10) == 0 )
            OffsetRect((LPRECT)&(*v7)[7], _mm_cvtsi128_si32(v22[6]), _mm_cvtsi128_si32(_mm_srli_si128(v22[6], 8)));
          goto LABEL_67;
        }
        v50 = 192;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v50, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1CAu, 0LL);
      goto LABEL_86;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x1C7u, 0LL);
LABEL_86:
    v31 = this[59];
    if ( v31 )
      CBaseObject::Release(v31);
    this[59] = 0LL;
    return (unsigned int)v4;
  }
  v38 = *v7;
  v39 = 0;
  if ( ((*v7)[4].y & 3) == 3 )
  {
    v40 = (char *)this + 482;
    if ( *((_BYTE *)this + 482) )
    {
      v41 = 0;
      v42 = v38[6].x - v38[5].x;
      if ( v38[8].x - v38[7].x >= 0 )
        v41 = v38[8].x - v38[7].x;
      v43 = 0;
      if ( v42 >= 0 )
        v43 = v38[6].x - v38[5].x;
      if ( v43 == v41 )
      {
        v44 = 0;
        v45 = v38[6].y - v38[5].y;
        if ( v38[8].y - v38[7].y >= 0 )
          v44 = v38[8].y - v38[7].y;
        v46 = 0;
        if ( v45 >= 0 )
          v46 = v38[6].y - v38[5].y;
        if ( v46 == v44 )
        {
          if ( v42 < 0 )
            v42 = 0;
          if ( v42 == *((_DWORD *)this + 129) )
          {
            if ( v45 < 0 )
              v45 = 0;
            if ( v45 == *((_DWORD *)this + 130) )
              v39 = 1;
          }
        }
      }
    }
  }
  else
  {
    v40 = (char *)this + 482;
  }
  CSecondaryWindowRepresentation::MakeStatic(*v8, v39, (const struct MilPointAndSizeL *)((char *)this + 540), this + 55);
  v9 = this + 49;
  v48 = this[49];
  if ( v48 )
  {
    CBaseObject::Release(v48);
    *v9 = 0LL;
  }
  BrushForCVI = CSecondaryWindowRepresentation::CreateBrushForCVI(v48, v47, *v10, this[51], 0LL, this + 49);
  v4 = BrushForCVI;
  if ( BrushForCVI < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BrushForCVI, 0x1A9u, 0LL);
    goto LABEL_86;
  }
  if ( !*((_BYTE *)*v8 + 161) )
  {
    if ( CThumbnailVisual::_IsImmersiveIconic((CThumbnailVisual *)this) )
    {
      (*v7)[4].y |= 0x800000u;
      v3 |= 0x800000u;
    }
    else
    {
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x8000u);
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x40000u);
      CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x1000u);
      *v40 = 0;
      CVisual::RenderRecursive((CVisual *)this);
    }
  }
LABEL_22:
  if ( (v3 & 0x800000) != 0 )
  {
    if ( *v9 )
    {
      CBaseObject::Release(*v9);
      *v9 = 0LL;
    }
    if ( *v10 )
    {
      CBaseObject::Release(*v10);
      *v10 = 0LL;
    }
    if ( *v8 )
    {
      CBaseObject::Release(*v8);
      *v8 = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
    CThumbnailVisual::OnRepresentationTypeUpdated((CThumbnailVisual *)this);
  }
  if ( (v3 & 0x1000000) != 0 )
  {
    if ( *v9 )
    {
      CBaseObject::Release(*v9);
      *v9 = 0LL;
    }
    if ( *v10 )
    {
      CBaseObject::Release(*v10);
      *v10 = 0LL;
    }
    if ( *v8 )
    {
      CBaseObject::Release(*v8);
      *v8 = 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
  }
  if ( *((_BYTE *)this + 480) && !*((_DWORD *)this + 70) )
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 0x2000u);
  if ( v4 < 0 )
    goto LABEL_86;
  return (unsigned int)v4;
}
