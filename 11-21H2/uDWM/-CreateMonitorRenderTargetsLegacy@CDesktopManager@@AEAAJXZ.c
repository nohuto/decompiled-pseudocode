/*
 * XREFs of ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BADC (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180036420 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?IsInLogonDesktop@CDesktopManager@@SA_NXZ @ 0x18003AFFC (-IsInLogonDesktop@CDesktopManager@@SA_NXZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18003C2B8 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18003C354 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x18003C3BC (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18003DC54 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18003E064 (-IsWarpAdapterLuid@CDWMDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E0B4 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     ?GetPixelDensity@CDWMDisplay@@QEBAMXZ @ 0x18003E1CC (-GetPixelDensity@CDWMDisplay@@QEBAMXZ.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18003E27C (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?IsTsDisplay@CDWMDisplay@@QEBA_NXZ @ 0x18003E684 (-IsTsDisplay@CDWMDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003E6AC (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003E8B8 (-RefreshRateChanged@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MTCATest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EA28 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MTCATest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDisplayAnimatedVisual@@@Z @ 0x18005A8B0 (-CreateDisplayAnimatedVisual@CDisplayModeChangeHelper@@SAJW4DisplayModeChangeResult@@PEAPEAVCDis.c)
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18005BA80 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 *     ?StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z @ 0x18005CE10 (-StopAndSetDisplayAnimatedVisual@CWindowList@@QEAAJPEAVCDisplayAnimatedVisual@@@Z.c)
 *     ?FailFastIfAccessDenied@@YAJJ@Z @ 0x18005DD64 (-FailFastIfAccessDenied@@YAJJ@Z.c)
 *     ?UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ @ 0x18005F408 (-UpdateMaxTextureSize@CDesktopManager@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memmove_0 @ 0x180063707 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Clear_and_reserve_geometric@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAX_K@Z @ 0x1800B5230 (-_Clear_and_reserve_geometric@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDisplay@@@std@@@std.c)
 *     ?CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z @ 0x1800BBDE8 (-CalculateRotationAngles@CDWMDisplaySet@@SAJPEBV1@0PEAH1@Z.c)
 *     ?HandleScreenRotation@CWindowList@@QEAAJHH@Z @ 0x180104448 (-HandleScreenRotation@CWindowList@@QEAAJHH@Z.c)
 *     ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x180106078 (-SetCommitHandle@CWindowList@@QEAAJPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CDesktopManager::CreateMonitorRenderTargetsLegacy(CDWMDXGIEnumeration **this)
{
  char v2; // bl
  int v3; // eax
  unsigned int v4; // edi
  int AllDisplaysNoRef; // eax
  CBaseObject *v6; // r12
  __int64 v7; // rdx
  unsigned int HasChanged; // eax
  void *v9; // rsi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rsi
  char v13; // r8
  __int64 v14; // rax
  __int64 v15; // r15
  struct IDCompositionRenderTargetPartner *v16; // r13
  CDWMDisplay *v17; // rcx
  CDWMDisplay *v18; // rcx
  __int64 (__fastcall *v19)(struct IDCompositionRenderTargetPartner *, _QWORD, void **); // rdi
  int v20; // eax
  int v21; // r15d
  unsigned int v22; // r13d
  __int64 v23; // rcx
  __int64 v24; // r15
  int v25; // eax
  __int64 v26; // rdx
  int v28; // eax
  CBaseObject *v29; // rbx
  void **v30; // rdi
  size_t v31; // r15
  char *v32; // r13
  int v33; // eax
  int v34; // esi
  CDWMDXGIEnumeration *v35; // rdi
  __int64 v36; // rdi
  __int64 (__fastcall *v37)(__int64, _QWORD, _QWORD, _QWORD, void **, int, int, CBaseObject **); // rbx
  int v38; // eax
  int v39; // eax
  CDWMDisplay *v40; // rcx
  CBaseObject *v41; // rbx
  __int64 (__fastcall *v42)(CBaseObject *, _QWORD, float *); // rsi
  int v43; // eax
  int v44; // eax
  __int64 (__fastcall ***v45)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v46)(_QWORD, GUID *, __int64 *); // rbx
  int v47; // eax
  __int64 v48; // rbx
  __int64 (__fastcall *v49)(__int64, _QWORD, CBaseObject **); // rdi
  int v50; // eax
  int v51; // eax
  void *v52; // rcx
  __int64 v53; // rdx
  int v54; // eax
  int v55; // eax
  int v56; // edi
  int v57; // r9d
  int v58; // eax
  void **v59; // [rsp+28h] [rbp-A9h]
  unsigned int v60; // [rsp+28h] [rbp-A9h]
  int v61; // [rsp+38h] [rbp-99h]
  char v62; // [rsp+58h] [rbp-79h]
  CBaseObject *v63; // [rsp+60h] [rbp-71h] BYREF
  char v64; // [rsp+68h] [rbp-69h]
  BOOL IsWarpAdapterLuid; // [rsp+6Ch] [rbp-65h]
  __int64 v66; // [rsp+70h] [rbp-61h] BYREF
  int v67; // [rsp+78h] [rbp-59h]
  void *v68; // [rsp+80h] [rbp-51h] BYREF
  int pvParam; // [rsp+88h] [rbp-49h] BYREF
  int v70; // [rsp+8Ch] [rbp-45h] BYREF
  int v71; // [rsp+90h] [rbp-41h] BYREF
  __int128 v72; // [rsp+98h] [rbp-39h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-29h]
  unsigned int v74; // [rsp+B0h] [rbp-21h]
  __int128 v75; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v76; // [rsp+C8h] [rbp-9h]
  unsigned int v77; // [rsp+D0h] [rbp-1h]
  void *Src[2]; // [rsp+D8h] [rbp+7h] BYREF
  __int64 v79; // [rsp+E8h] [rbp+17h]
  float v80; // [rsp+F0h] [rbp+1Fh] BYREF
  float v81; // [rsp+F4h] [rbp+23h]
  float v82; // [rsp+F8h] [rbp+27h]
  float v83; // [rsp+FCh] [rbp+2Bh]

  v63 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0;
  v71 = 0;
  v70 = 0;
  v64 = 0;
  v2 = 0;
  v62 = 0;
  LOBYTE(v67) = 0;
  LOBYTE(IsWarpAdapterLuid) = 0;
  v68 = 0LL;
  v3 = CDesktopManager::EnumerateMonitors((CDesktopManager *)this, &v63);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x4D8u);
LABEL_74:
    v6 = v63;
    goto LABEL_46;
  }
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(this[17], &v75);
  v4 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x4DAu);
    goto LABEL_74;
  }
  v6 = v63;
  if ( !v63 )
    goto LABEL_36;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0;
  if ( CDWMDisplaySet::IsEquivalentRotated(this[17], v63) )
  {
    CDWMDisplaySet::CalculateRotationAngles(v6, this[17], &v71, &v70);
    v64 = 1;
  }
  if ( !CDesktopManager::IsInLogonDesktop() )
  {
    LOBYTE(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTCATest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_MTCATest>::GetImpl'::`2'::impl,
      v7);
    pvParam = 0;
    if ( SystemParametersInfoW(0xAAu, 0, &pvParam, 0) )
    {
      if ( !pvParam )
      {
        *(_OWORD *)Src = 0LL;
        v79 = 0LL;
        HasChanged = CDisplayModeChangeHelper::HasChanged(v6, this[17]);
        v9 = Src[0];
        if ( !HasChanged )
        {
LABEL_10:
          if ( v9 )
            std::_Deallocate<16,0>(v9, (v79 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
          goto LABEL_12;
        }
        v63 = 0LL;
        v28 = CDisplayModeChangeHelper::CreateDisplayAnimatedVisual(HasChanged, &v63);
        v4 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x50Bu);
          if ( v63 )
            CBaseObject::Release(v63);
          v52 = Src[0];
          if ( !Src[0] )
            goto LABEL_81;
          v53 = v79 - (unsigned __int64)Src[0];
        }
        else
        {
          v29 = v63;
          CWindowList::StopAndSetDisplayAnimatedVisual(this[52], v63);
          if ( !v29 )
            goto LABEL_56;
          *((_QWORD *)v29 + 40) = v6;
          v30 = (void **)((char *)v29 + 328);
          if ( (void **)((char *)v29 + 328) != Src )
          {
            v31 = (char *)Src[1] - (char *)v9;
            v32 = (char *)*v30;
            if ( ((char *)Src[1] - (char *)v9) >> 3 > (unsigned __int64)((__int64)(*((_QWORD *)v29 + 43)
                                                                                 - *((_QWORD *)v29 + 41)) >> 3) )
            {
              std::vector<CDWMDisplay const *>::_Clear_and_reserve_geometric((char *)v29 + 328);
              v32 = (char *)*v30;
            }
            memmove_0(v32, v9, v31);
            *((_QWORD *)v29 + 42) = &v32[v31];
          }
          v33 = CDisplayAnimatedVisual::Start(v29);
          v4 = v33;
          if ( v33 >= 0 )
          {
LABEL_56:
            if ( v29 )
              CBaseObject::Release(v29);
            v2 = 0;
            goto LABEL_10;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x512u);
          CBaseObject::Release(v29);
          if ( !v9 )
            goto LABEL_81;
          v53 = v79 - (_QWORD)v9;
          v52 = v9;
        }
        std::_Deallocate<16,0>(v52, v53 & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_81:
        DynArrayImpl<0>::~DynArrayImpl<0>(&v72);
        goto LABEL_46;
      }
    }
  }
LABEL_12:
  v10 = CDWMDisplaySet::GetAllDisplaysNoRef(v6, &v72);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x518u);
    goto LABEL_81;
  }
  v11 = 0LL;
  for ( LODWORD(v63) = 0; (unsigned int)v11 < v77; LODWORD(v63) = v11 )
  {
    v12 = *(_QWORD *)(v75 + 8 * v11);
    v13 = 0;
    v14 = 0LL;
    LODWORD(v66) = 0;
    if ( !v74 )
      goto LABEL_68;
    do
    {
      if ( v13 )
        goto LABEL_33;
      v15 = *(_QWORD *)(v72 + 8 * v14);
      v16 = *(struct IDCompositionRenderTargetPartner **)(v15 + 8);
      if ( v16
        && *(_DWORD *)(v12 + 176) == *(_DWORD *)(v15 + 176)
        && *(_DWORD *)(v12 + 204) == *(_DWORD *)(v15 + 204)
        && *(_DWORD *)(v12 + 220) == *(_DWORD *)(v15 + 220)
        && *(_BYTE *)(v12 + 255) == *(_BYTE *)(v15 + 255)
        && !CDWMDisplay::IsTsDisplay((CDWMDisplay *)v12) )
      {
        CDWMDisplay::SetDcompTarget(v17, v16);
        CDWMDisplay::SetDcompTarget((CDWMDisplay *)v15, 0LL);
        if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v12 + 88) + 16LL)) )
        {
          v54 = (*(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v16 + 40LL))(v16);
          v4 = v54;
          if ( v54 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v54, 0x535u);
LABEL_87:
            DynArrayImpl<0>::~DynArrayImpl<0>(&v72);
            goto LABEL_44;
          }
        }
        v19 = *(__int64 (__fastcall **)(struct IDCompositionRenderTargetPartner *, _QWORD, void **))(*(_QWORD *)v16 + 32LL);
        v80 = *(float *)(v12 + 40);
        v81 = *(float *)(v12 + 44);
        v82 = *(float *)(v12 + 48);
        v83 = *(float *)(v12 + 52);
        CDWMDisplay::GetPixelDensity(v18);
        *(float *)Src = (float)*(int *)(v12 + 56);
        *((float *)Src + 1) = (float)*(int *)(v12 + 60);
        *(float *)&Src[1] = (float)*(int *)(v12 + 64);
        *((float *)&Src[1] + 1) = (float)*(int *)(v12 + 68);
        v59 = (void **)&v80;
        v20 = v19(v16, *(_QWORD *)(*(_QWORD *)(v12 + 88) + 16LL), Src);
        v4 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x53Cu);
          goto LABEL_87;
        }
        if ( CDWMDisplay::RefreshRateChanged((CDWMDisplay *)v12, (const struct CDWMDisplay *)v15) )
          (*(void (__fastcall **)(struct IDCompositionRenderTargetPartner *))(*(_QWORD *)v16 + 56LL))(v16);
        v21 = (unsigned __int8)v67;
        if ( *(int *)(v12 + 184) < 2200 )
          v21 = 1;
        v67 = v21;
        if ( !IsWarpAdapterLuid )
          IsWarpAdapterLuid = CDWMDXGIEnumeration::IsWarpAdapterLuid(this[16], *(struct _LUID *)(v12 + 168));
        v13 = 1;
      }
      v14 = (unsigned int)(v66 + 1);
      LODWORD(v66) = v14;
    }
    while ( (unsigned int)v14 < v74 );
    if ( v13 )
    {
LABEL_33:
      v2 = v62;
    }
    else
    {
LABEL_68:
      v2 = 1;
      v62 = 1;
    }
    v11 = (unsigned int)((_DWORD)v63 + 1);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v72);
  CDWMDisplaySet::Release(v6);
  v6 = 0LL;
LABEL_36:
  v22 = 0;
  if ( !v77 )
  {
LABEL_40:
    *((_BYTE *)this + 27) = IsWarpAdapterLuid;
    if ( !v64 )
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this[5] + 3) + 24LL))(*((_QWORD *)this[5] + 3));
      v4 = v25;
      if ( v25 >= 0 )
        goto LABEL_42;
      v60 = 1457;
      goto LABEL_102;
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v68,
      0LL);
    v56 = NtDCompositionCreateSynchronizationObject(&v68);
    if ( v56 < 0 )
    {
      v60 = 1445;
LABEL_100:
      v4 = v56 | 0x10000000;
      v57 = v4;
LABEL_103:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v57, v60);
      goto LABEL_44;
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this[5] + 3) + 552LL))(
            *((_QWORD *)this[5] + 3),
            v68);
    v4 = v25;
    if ( v25 < 0 )
    {
      v60 = 1448;
    }
    else
    {
      v25 = CWindowList::SetCommitHandle(this[52], v68);
      v4 = v25;
      if ( v25 >= 0 )
      {
        v25 = CWindowList::HandleScreenRotation(this[52], v71, v70);
        v4 = v25;
        if ( v25 >= 0 )
        {
          v58 = NtDCompositionCommitSynchronizationObject(v68);
          if ( v58 >= 0 )
          {
LABEL_42:
            if ( v2 )
              CDesktopManager::UpdateMaxTextureSize((CDesktopManager *)this);
            goto LABEL_44;
          }
          v56 = v58;
          v60 = 1453;
          goto LABEL_100;
        }
        v60 = 1450;
      }
      else
      {
        v60 = 1449;
      }
    }
LABEL_102:
    v57 = v25;
    goto LABEL_103;
  }
  v23 = v75;
  while ( 1 )
  {
    v24 = *(_QWORD *)(v23 + 8LL * v22);
    if ( *(_QWORD *)(v24 + 8) )
      goto LABEL_39;
    v63 = 0LL;
    if ( CDWMDXGIEnumeration::IsWarpAdapterLuid(this[16], *(struct _LUID *)(v24 + 168)) )
    {
      LOBYTE(IsWarpAdapterLuid) = 1;
      v34 = 2;
    }
    else
    {
      v34 = ((unsigned int)(*((_DWORD *)this + 36) - 2) > 1) + 2;
    }
    v35 = this[5];
    if ( CDWMDisplay::IsTsDisplay((CDWMDisplay *)v24) )
    {
      v66 = 0LL;
      v45 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v35 + 3);
      v46 = **v45;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
      v47 = v46(v45, &GUID_6083f66a_8533_4f7e_a37e_6c222134280b, &v66);
      v4 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v47, 0x584u);
LABEL_94:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
        goto LABEL_95;
      }
      v48 = v66;
      v49 = *(__int64 (__fastcall **)(__int64, _QWORD, CBaseObject **))(*(_QWORD *)v66 + 112LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v63);
      v50 = v49(v48, *(_QWORD *)(v24 + 168), &v63);
      v51 = FailFastIfAccessDenied(v50);
      v4 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v51, 0x587u);
        goto LABEL_94;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
    }
    else
    {
      v36 = *((_QWORD *)v35 + 3);
      v37 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, void **, int, int, CBaseObject **))(*(_QWORD *)v36 + 520LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v63);
      LOBYTE(v61) = *(_BYTE *)(v24 + 255);
      LODWORD(v59) = *(_DWORD *)(v24 + 220);
      v38 = v37(
              v36,
              *(_QWORD *)(v24 + 168),
              *(unsigned int *)(v24 + 176),
              *(unsigned int *)(v24 + 204),
              v59,
              v34,
              v61,
              &v63);
      v39 = FailFastIfAccessDenied(v38);
      v4 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x57Eu);
        goto LABEL_95;
      }
    }
    v41 = v63;
    v42 = *(__int64 (__fastcall **)(CBaseObject *, _QWORD, float *))(*(_QWORD *)v63 + 32LL);
    Src[0] = *(void **)(v24 + 40);
    Src[1] = *(void **)(v24 + 48);
    CDWMDisplay::GetPixelDensity(v40);
    v80 = (float)*(int *)(v24 + 56);
    v81 = (float)*(int *)(v24 + 60);
    v82 = (float)*(int *)(v24 + 64);
    v83 = (float)*(int *)(v24 + 68);
    v59 = Src;
    v43 = v42(v41, *(_QWORD *)(*(_QWORD *)(v24 + 88) + 16LL), &v80);
    v4 = v43;
    if ( v43 < 0 )
      break;
    v44 = (*(__int64 (__fastcall **)(CBaseObject *, CDWMDXGIEnumeration *))(*(_QWORD *)v63 + 24LL))(v63, this[9]);
    v4 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x591u);
      goto LABEL_95;
    }
    if ( (unsigned int)IsHDRDisplay(*(HMONITOR *)(*(_QWORD *)(v24 + 88) + 16LL)) )
    {
      v55 = (*(__int64 (__fastcall **)(CBaseObject *))(*(_QWORD *)v63 + 40LL))(v63);
      v4 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v55, 0x595u);
        goto LABEL_95;
      }
    }
    CDWMDisplay::SetDcompTarget((CDWMDisplay *)v24, v63);
    v2 = 1;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v63);
    v23 = v75;
LABEL_39:
    if ( ++v22 >= v77 )
      goto LABEL_40;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x58Fu);
LABEL_95:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v63);
LABEL_44:
  if ( (_BYTE)v67 )
  {
    LOBYTE(v59) = 1;
    LOBYTE(v26) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, void **))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                     + 5)
                                                                                   + 16LL)
                                                                     + 160LL))(
      *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
      v26,
      0LL,
      0LL,
      v59);
  }
LABEL_46:
  if ( v6 )
    CDWMDisplaySet::Release(v6);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v68);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v75);
  return v4;
}
