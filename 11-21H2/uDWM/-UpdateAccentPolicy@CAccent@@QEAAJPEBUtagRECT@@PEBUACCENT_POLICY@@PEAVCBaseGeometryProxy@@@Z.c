/*
 * XREFs of ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244
 * Callers:
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x1800170B4 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18004BDA0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x1800C29DC (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800EB2A0 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartTransition@CAccent@@QEAAJXZ @ 0x180007F08 (-StartTransition@CAccent@@QEAAJXZ.c)
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x1800085C8 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18000C710 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x180013C3C (-_UpdateAccentBackground@CAccent@@IEAAXK@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002440C (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180047980 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z @ 0x18004C290 (-Create@CAccentAcrylicBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z @ 0x18004CAB8 (-SetClipRegion@CAccent@@QEAAXPEAVCBaseGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z @ 0x1800971B8 (-Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800973E4 (-CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBru.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800984AC (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x1800985FC (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18009873C (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?StopAnimation@CAccentTransition@@QEAAXXZ @ 0x18009942C (-StopAnimation@CAccentTransition@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAccent::UpdateAccentPolicy(
        CAccent *this,
        const struct tagRECT *a2,
        __m128i *a3,
        struct CBaseGeometryProxy *a4)
{
  __m128i v8; // xmm6
  int v9; // ebx
  char v10; // al
  unsigned int v11; // edx
  int v12; // eax
  struct CVisual *v13; // rdx
  int v14; // eax
  unsigned int v15; // edi
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int started; // eax
  CBaseObject *v22; // rdx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rdx
  CBaseObject *v25; // rcx
  CAccentTransition *v26; // rcx
  CBaseObject *v27; // rcx
  CBaseObject *v28; // rcx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  struct IDCompositionDesktopDevicePartner *v32; // rbx
  int SolidColorBrush; // eax
  __int64 (__fastcall ***v34)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v35)(_QWORD, GUID *, __int64 *); // rdi
  int v36; // eax
  __int64 v37; // rdx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  CBaseObject *v40; // rcx
  CBaseObject *v41; // rcx
  int v42; // eax
  unsigned __int64 v43; // r9
  __int64 v44; // rdx
  CBaseObject *v45; // rcx
  CBaseObject *v46; // rcx
  int v47; // eax
  float v48; // xmm2_4
  int v49; // eax
  float SolidFillOpacity; // xmm0_4
  __int64 v51; // rcx
  int updated; // eax
  int v53; // eax
  int v54; // eax
  __int64 v55; // rdx
  CBaseObject *v56; // rcx
  CBaseObject *v57; // rcx
  __int64 v58; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v59; // [rsp+38h] [rbp-38h] BYREF
  struct _MARGINS v60; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v59 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v60 = 0LL;
  CVisual::SetInsetFromParent(this, &v60);
  *((struct tagRECT *)this + 39) = *a2;
  if ( (a3->m128i_i8[4] & 4) != 0 )
  {
    v18 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 96);
    v19 = 0;
    if ( *((int *)CDesktopManager::s_pDesktopManagerInstance + 95) >= 0 )
      v19 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 95);
    *((_DWORD *)this + 158) = *((_DWORD *)this + 156) + v19;
    v20 = 0;
    if ( v18 >= 0 )
      v20 = v18;
    *((_DWORD *)this + 159) = *((_DWORD *)this + 157) + v20;
    CDesktopManager::SetBackStop(this);
  }
  v8 = *a3;
  v60 = (struct _MARGINS)v8;
  v9 = _mm_cvtsi128_si32(v8);
  if ( v9 == 5 || (unsigned int)(v9 - 2) <= 1 )
  {
    if ( v9 != 4 )
    {
LABEL_4:
      v10 = 1;
LABEL_5:
      if ( (*((_BYTE *)this + 292) & 2) != 0 && v10 )
      {
        VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
        v38 = (CBaseObject *)*((_QWORD *)this + 41);
        if ( v38 )
        {
          CBaseObject::Release(v38);
          *((_QWORD *)this + 41) = 0LL;
        }
        v39 = (CBaseObject *)*((_QWORD *)this + 42);
        if ( v39 )
        {
          CBaseObject::Release(v39);
          *((_QWORD *)this + 42) = 0LL;
        }
        v40 = (CBaseObject *)*((_QWORD *)this + 43);
        if ( v40 )
        {
          CBaseObject::Release(v40);
          *((_QWORD *)this + 43) = 0LL;
        }
        v41 = (CBaseObject *)*((_QWORD *)this + 44);
        if ( v41 )
        {
          CBaseObject::Release(v41);
          *((_QWORD *)this + 44) = 0LL;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 45);
      }
      *((__m128i *)this + 18) = v8;
      v11 = *((_DWORD *)this + 74);
      *((_DWORD *)this + 96) = v11;
      if ( (*((_BYTE *)this + 292) & 1) != 0 )
        CAccent::_UpdateAccentBackground(this, v11);
      v12 = *((_DWORD *)this + 72);
      switch ( v12 )
      {
        case 3:
          if ( !*((_QWORD *)this + 43) )
          {
            v42 = CAccentBlurBehind::Create((struct CAccentBlurBehind **)this + 43);
            v15 = v42;
            if ( v42 < 0 )
            {
              v43 = (unsigned int)v42;
              v44 = 1172LL;
              goto LABEL_112;
            }
          }
          CAccent::_UpdateAccentBlurBehind(this);
          goto LABEL_12;
        case 4:
          if ( !*((_QWORD *)this + 44) )
          {
            v17 = CAccentAcrylicBlurBehind::Create((struct CAccentAcrylicBlurBehind **)this + 44);
            v15 = v17;
            if ( v17 < 0 )
            {
              v43 = (unsigned int)v17;
              v44 = 1180LL;
              goto LABEL_112;
            }
          }
          break;
        case 5:
          break;
        default:
          v45 = (CBaseObject *)*((_QWORD *)this + 43);
          if ( v45 )
          {
            CBaseObject::Release(v45);
            *((_QWORD *)this + 43) = 0LL;
          }
          v46 = (CBaseObject *)*((_QWORD *)this + 44);
          if ( v46 )
          {
            CBaseObject::Release(v46);
            *((_QWORD *)this + 44) = 0LL;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 45);
          VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
          v47 = 0;
          if ( *((_DWORD *)this + 159) - *((_DWORD *)this + 157) >= 0 )
            v47 = *((_DWORD *)this + 159) - *((_DWORD *)this + 157);
          v48 = (float)v47;
          v49 = 0;
          if ( *((_DWORD *)this + 158) - *((_DWORD *)this + 156) >= 0 )
            v49 = *((_DWORD *)this + 158) - *((_DWORD *)this + 156);
          v60.cxLeftWidth = 0;
          v60.cxRightWidth = 0;
          *(float *)&v60.cyTopHeight = (float)v49 + 0.0;
          *(float *)&v60.cyBottomHeight = v48 + 0.0;
          SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
          updated = CAccent::_UpdateSolidFill(v51, this, *((unsigned int *)this + 96), &v60, LODWORD(SolidFillOpacity));
          v15 = updated;
          if ( updated < 0 )
          {
            v43 = (unsigned int)updated;
            v44 = 1203LL;
            goto LABEL_112;
          }
          goto LABEL_12;
      }
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
LABEL_12:
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x4000LL);
      goto LABEL_13;
    }
LABEL_21:
    v10 = 0;
    if ( *((_DWORD *)this + 72) == v9 )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( v9 == 4 )
    goto LABEL_21;
  if ( *((_BYTE *)this + 320) )
  {
    v26 = (CAccentTransition *)*((_QWORD *)this + 49);
    if ( v26 )
      CAccentTransition::StopAnimation(v26);
    v60.cyBottomHeight = 0;
    v8 = (__m128i)v60;
  }
  if ( v9 != *((_DWORD *)this + 72)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 4)) != *((_DWORD *)this + 73)
    || _mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) != *((_DWORD *)this + 74) )
  {
    *((__m128i *)this + 19) = v8;
    *((_BYTE *)this + 320) = 1;
    started = CAccent::StartTransition(this);
    v15 = started;
    if ( started < 0 )
    {
      v43 = (unsigned int)started;
      v44 = 1097LL;
      goto LABEL_112;
    }
  }
  (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  if ( (*((_BYTE *)this + 292) & 2) != 0 )
  {
    VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
    v27 = (CBaseObject *)*((_QWORD *)this + 41);
    if ( v27 )
    {
      CBaseObject::Release(v27);
      *((_QWORD *)this + 41) = 0LL;
    }
    v28 = (CBaseObject *)*((_QWORD *)this + 42);
    if ( v28 )
    {
      CBaseObject::Release(v28);
      *((_QWORD *)this + 42) = 0LL;
    }
  }
  v22 = (CBaseObject *)*((_QWORD *)this + 43);
  v23 = v22;
  if ( !v22 )
  {
LABEL_40:
    if ( !v23 )
      goto LABEL_41;
    goto LABEL_59;
  }
  if ( *((_QWORD *)v22 + 3) )
  {
    v29 = VisualCollection::Remove((CAccent *)((char *)this + 32), v22);
    v15 = v29;
    if ( v29 < 0 )
    {
      v43 = (unsigned int)v29;
      v44 = 1112LL;
      goto LABEL_112;
    }
    v23 = (CBaseObject *)*((_QWORD *)this + 43);
    goto LABEL_40;
  }
LABEL_59:
  CBaseObject::Release(v23);
  *((_QWORD *)this + 43) = 0LL;
LABEL_41:
  v24 = (CBaseObject *)*((_QWORD *)this + 44);
  v25 = v24;
  if ( v24 )
  {
    if ( !*((_QWORD *)v24 + 3) )
      goto LABEL_64;
    v30 = VisualCollection::Remove((CAccent *)((char *)this + 32), v24);
    v15 = v30;
    if ( v30 < 0 )
    {
      v43 = (unsigned int)v30;
      v44 = 1118LL;
      goto LABEL_112;
    }
    v25 = (CBaseObject *)*((_QWORD *)this + 44);
  }
  if ( v25 )
  {
LABEL_64:
    CBaseObject::Release(v25);
    *((_QWORD *)this + 44) = 0LL;
  }
  if ( *((_DWORD *)this + 72) == 5 )
  {
    v31 = *((_QWORD *)this + 47);
    if ( v31 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v31 + 16) + 24LL) )
      {
        v32 = *(struct IDCompositionDesktopDevicePartner **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                           + 32LL);
        *(_QWORD *)&v60.cxLeftWidth = v32;
        if ( v32 )
          (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( !*((_QWORD *)this + 46) )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 46);
          SolidColorBrush = CAccent::CreateSolidColorBrush(
                              v32,
                              (struct Windows::UI::Composition::ICompositionBrush **)this + 46);
          v15 = SolidColorBrush;
          if ( SolidColorBrush < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x46C,
              (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
              (const char *)(unsigned int)SolidColorBrush);
LABEL_79:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v60.cxLeftWidth);
            goto LABEL_18;
          }
        }
        v58 = 0LL;
        v34 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 47) + 16LL) + 24LL);
        v35 = **v34;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
        v36 = v35(v34, &GUID_01dc794b_4ff5_4491_9942_b9e7b8893be4, &v58);
        v15 = v36;
        if ( v36 < 0 )
        {
          v37 = 1136LL;
LABEL_78:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v37,
            (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)v36);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
          goto LABEL_79;
        }
        v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v58 + 48LL))(v58, *((_QWORD *)this + 46));
        v15 = v36;
        if ( v36 < 0 )
        {
          v37 = 1137LL;
          goto LABEL_78;
        }
        v36 = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)v32 + 24LL))(v32);
        v15 = v36;
        if ( v36 < 0 )
        {
          v37 = 1138LL;
          goto LABEL_78;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v58);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v60.cxLeftWidth);
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 45);
LABEL_13:
  if ( (*((_BYTE *)this + 292) & 0xE0) != 0 )
  {
    v53 = CAccent::_EnsureBorderShadowAtlas(this);
    v15 = v53;
    if ( v53 >= 0 )
    {
      (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 2LL);
      goto LABEL_15;
    }
    v43 = (unsigned int)v53;
    v44 = 1211LL;
LABEL_112:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)v43);
    goto LABEL_18;
  }
  v13 = (struct CVisual *)*((_QWORD *)this + 54);
  if ( v13 )
  {
    v54 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 55) + 32LL), v13);
    v15 = v54;
    if ( v54 >= 0 )
    {
      v54 = VisualCollection::Remove((CAccent *)((char *)this + 32), *((struct CVisual **)this + 55));
      v15 = v54;
      if ( v54 >= 0 )
      {
        v56 = (CBaseObject *)*((_QWORD *)this + 55);
        if ( v56 )
        {
          CBaseObject::Release(v56);
          *((_QWORD *)this + 55) = 0LL;
        }
        v57 = (CBaseObject *)*((_QWORD *)this + 54);
        if ( v57 )
        {
          CBaseObject::Release(v57);
          *((_QWORD *)this + 54) = 0LL;
        }
        goto LABEL_15;
      }
      v55 = 1041LL;
    }
    else
    {
      v55 = 1040LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v55,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v54);
    v43 = v15;
    v44 = 1216LL;
    goto LABEL_112;
  }
LABEL_15:
  v14 = *((_DWORD *)this + 73);
  if ( (v14 & 0x10) != 0 )
  {
    CAccent::SetClipRegion(this, a4);
  }
  else if ( (v14 & 0x200) != 0 && *((_QWORD *)this + 53) )
  {
    (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
  }
  v15 = 0;
LABEL_18:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v59);
  return v15;
}
