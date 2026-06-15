/*
 * XREFs of ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180034C90
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::IPackageCatalog____Windows::Foundation::Internal::AggregateType_Windows::ApplicationModel::PackageInstallingEventArgs___Windows::ApplicationModel::IPackageInstallingEventArgs_____::_)(Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_365355403e96d7deb3da145a5ed01100___1_Windows::ApplicationModel::IPackageCatalog___Windows::ApplicationModel::IPackageInstallingEventArgs___::Invoke @ 0x1800348D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--ITypedEventHandler.c)
 *     _lambda_1df835b24497147b2d93aade403b0d0c_::operator() @ 0x18004A6F0 (_lambda_1df835b24497147b2d93aade403b0d0c_--operator().c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005D6AC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     _lambda_306411e1888b4c6b6a6c7d2021597688_::operator() @ 0x18005D874 (_lambda_306411e1888b4c6b6a6c7d2021597688_--operator().c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x180065CB0 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1801174F0 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     _lambda_aa5001744ce94bbd4d4a1356ce3da641_::operator() @ 0x18015A45C (_lambda_aa5001744ce94bbd4d4a1356ce3da641_--operator().c)
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18015D910 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18015D9A0 (-StaticGracePeriodExpiredFired@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001C004 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180034A10 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@53@Z @ 0x1800652E8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U3@U1@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A08C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x18015AD28 (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x18015C01C (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x18015C2C4 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x18015DA34 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheck(AtmosCheck *this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  int v6; // eax
  HRESULT ApartmentType; // eax
  DWORD CurrentThreadId; // r13d
  unsigned int v9; // r12d
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  AtmosCheck *v12; // r15
  AtmosCheck *v13; // rcx
  __int64 v14; // r9
  unsigned int v15; // ebx
  int v16; // eax
  const char *v17; // r9
  const char *v18; // r10
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r10
  bool IsLogLicenseResult; // bl
  int v28; // ecx
  char v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+54h] [rbp-ACh] BYREF
  APTTYPE pAptType; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-A4h]
  unsigned int v33; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v34[2]; // [rsp+64h] [rbp-9Ch] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  __m128i si128; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+90h] [rbp-70h]
  int v40; // [rsp+94h] [rbp-6Ch]
  int v41; // [rsp+98h] [rbp-68h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v46; // [rsp+D0h] [rbp-30h]
  int v47; // [rsp+D8h] [rbp-28h]
  int v48; // [rsp+DCh] [rbp-24h]
  _DWORD *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  char *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  const char *v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+108h] [rbp+8h]
  int v55; // [rsp+10Ch] [rbp+Ch]
  const char *v56; // [rsp+110h] [rbp+10h]
  int v57; // [rsp+118h] [rbp+18h]
  int v58; // [rsp+11Ch] [rbp+1Ch]
  unsigned int *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v4 = a2;
  v30 = 0;
  pAptType = APTTYPE_MTA;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v39 = -2147023728;
  v40 = -2147023728;
  v41 = -2147023728;
  v29 = 0;
  if ( !*((_BYTE *)this + 96) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x515,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  if ( *((_BYTE *)this + 696) )
  {
    if ( (unsigned int)dword_1801CD2B8 > 5 )
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_1801CD2B8,
        (unsigned __int8 *)dword_180198E58,
        0LL,
        0LL,
        2u,
        (PEVENT_DATA_DESCRIPTOR)&EventDescriptor);
    return 0LL;
  }
  else
  {
    v6 = *((_DWORD *)this + 48);
    if ( v6 != 3 && v6 != 16 && !AtmosCheck::IsRunningOnXbox(this) )
    {
      *((_DWORD *)this + 47) = 1;
      IsLogLicenseResult = 0;
LABEL_52:
      AtmosCheck::TraceResult(this, 0, IsLogLicenseResult);
      return 0LL;
    }
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this, a2, a3, a4)
      && (unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
    {
      *((_DWORD *)this + 47) = 2;
      EventDescriptor = 0LL;
      v43 = 0LL;
      v44 = 0;
      IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(this, (struct SpatialLicenseResult *)&EventDescriptor);
      AtmosCheck::EnableAllSpatialCapabilities(this);
      goto LABEL_52;
    }
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    if ( ApartmentType < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x546,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)ApartmentType);
    (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 8LL))(this);
    (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 8LL))(this);
    CurrentThreadId = GetCurrentThreadId();
    v9 = 0;
    if ( pAptType == APTTYPE_MTA )
      v9 = 4;
    v10 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      v10[3] = 1;
      *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      v12 = 0LL;
      *((_QWORD *)v11 + 2) = this;
      *((_QWORD *)v11 + 3) = &si128;
      *((_QWORD *)v11 + 4) = &v30;
      *((_QWORD *)v11 + 5) = &v29;
      *((_BYTE *)v11 + 48) = v4;
      *(_QWORD *)v11 = &off_18016DDA0;
    }
    else
    {
      v11 = 0LL;
      v12 = this;
    }
    SHTaskPoolQueueTask(v9, 32LL, CurrentThreadId);
    if ( v11 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
      (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)v12 + 16LL))(v12);
    (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 16LL))(this);
    v15 = v30;
    if ( v30 >= 0 )
    {
      if ( v4 )
      {
        if ( v29 || (v16 = *((_DWORD *)this + 46), v16 == 8) || v16 == 3 )
        {
          if ( *((_QWORD *)this + 5) )
          {
            AtmosCheck::Trace(v13, "Calling AtmosCodecsStatusChanged callback", 0LL, v14);
            (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
            v15 = v30;
          }
        }
      }
    }
    v17 = "None";
    v18 = "None";
    v19 = *((_DWORD *)this + 46);
    if ( v19 == 2 )
    {
      v17 = "AppInstallation";
    }
    else
    {
      switch ( v19 )
      {
        case 1:
          v17 = "Initialization";
          break;
        case 3:
          v17 = "AppUninstallation";
          break;
        case 4:
          v17 = "AppUpdating";
          break;
        case 5:
          v17 = "TimerCallback";
          break;
        case 6:
          v17 = "LicenseRefreshTimerCallback";
          break;
        case 7:
          v17 = "ForceLicenseRefresh";
          break;
        case 8:
          v17 = "ClientEventFired";
          break;
        default:
          break;
      }
    }
    v20 = *((_DWORD *)this + 47);
    if ( v20 )
    {
      v28 = v20 - 1;
      if ( v28 )
      {
        if ( v28 == 1 )
          v18 = "Skipped";
      }
      else
      {
        v18 = "Disabled";
      }
    }
    else
    {
      v18 = "Enabled";
    }
    if ( !*((_BYTE *)this + 98) || v29 )
    {
      if ( (unsigned int)dword_1801CD2B8 > 4 && tlgKeywordOn((__int64)&dword_1801CD2B8, 0x400000000000LL) )
      {
        v34[1] = v15;
        v36 = v26;
        v37 = v25;
        *(_QWORD *)&EventDescriptor.Id = (char *)this + 168;
        v32 = 3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          v24,
          &unk_180198C5F);
      }
      *((_BYTE *)this + 98) = 1;
    }
    else if ( (unsigned int)dword_1801CD2B8 > 4 )
    {
      v33 = v15;
      v34[0] = 3;
      v59 = &v33;
      v60 = 4LL;
      v21 = -1LL;
      v22 = -1LL;
      do
        ++v22;
      while ( v18[v22] );
      v56 = v18;
      v57 = v22 + 1;
      v58 = 0;
      do
        ++v21;
      while ( v17[v21] );
      v53 = v17;
      v54 = v21 + 1;
      v55 = 0;
      v51 = (char *)this + 168;
      v52 = 16LL;
      v49 = v34;
      v50 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      *(_DWORD *)&EventDescriptor.Level = 4;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = (ULONGLONG)off_1801CD2C0;
      UserData.Size = *(unsigned __int16 *)off_1801CD2C0;
      UserData.Reserved = 2;
      v46 = &unk_180198D51;
      v47 = 86;
      v48 = 1;
      v32 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
    }
    *((_DWORD *)this + 46) = 7;
    return v15;
  }
}
