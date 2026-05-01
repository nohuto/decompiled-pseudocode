/*
 * XREFs of ?_HandleWindowingEnvironmentSettingsRequest@CApplicationManager@@AEAAJPEAUIWindowingEnvironmentSettingsArgs@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802EAB18
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800E8B80 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800EDC10 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation@@@details@wil.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180143C9C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18018FB90 (--$query@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIViewWrapp.c)
 *     ??$query@UIImmersiveApplication@@@?$com_ptr_t@UIImmersiveApplicationInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIImmersiveApplication@@Uerr_exception_policy@wil@@@1@XZ @ 0x18018FBF0 (--$query@UIImmersiveApplication@@@-$com_ptr_t@UIImmersiveApplicationInternal@@Uerr_exception_pol.c)
 *     ??$query@UIInspectable@@@?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@1@XZ @ 0x18018FC50 (--$query@UIInspectable@@@-$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@wi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@@Z @ 0x1802DD460 (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@.c)
 *     ??$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@PEAUIApplicationView@@AEAI@wil@@YA?AV?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@$$QEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIApplicationView@@AEAI@Z @ 0x1802DD51C (--$MakeOrThrow@VPresentationRequestedArgs@@PEAUIWindowingEnvironmentSettings@ViewMa_ea_1802DD51C.c)
 *     ??$make_agile_vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@cshell@@YA?AV?$com_ptr_t@V?$AgileVector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1802DEF10 (--$make_agile_vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@cshell@@YA-AV-.c)
 *     ??0?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802DF344 (--0-$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wi.c)
 *     ??Dvector_iterator@?$vector_range@U?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEBV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1802E048C (--Dvector_iterator@-$vector_range@U-$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Inter.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E6BE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGet.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E6D20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmB_ea_1802E6D20.c)
 *     ?end@?$vector_range@U?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA?AVvector_iterator@12@XZ @ 0x1802EBBF8 (-end@-$vector_range@U-$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@.c)
 */

// Hidden C++ exception states: #wind=40
__int64 __fastcall CApplicationManager::_HandleWindowingEnvironmentSettingsRequest(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *v2; // r12
  CApplicationManager *v3; // r13
  int v4; // r15d
  __int64 v5; // rax
  int v6; // eax
  __int64 *v7; // rax
  __int64 v8; // rbx
  int i; // eax
  __int64 *v10; // rax
  __int64 *v11; // rsi
  __int64 (__fastcall *v12)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64, struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **); // rax
  int v13; // eax
  _QWORD *v14; // rax
  bool v15; // di
  __int64 v16; // r8
  __int64 v17; // r9
  const char *v18; // r9
  __int64 (__fastcall ***v19)(_QWORD, GUID *, _QWORD *); // rcx
  int First; // edi
  int v21; // eax
  int v22; // eax
  __int64 (__fastcall **v23)(_QWORD, GUID *, _QWORD *); // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 *Ptr; // rcx
  __int64 v28; // rax
  int v29; // eax
  int v30; // r15d
  void (__fastcall *v31)(char *, GUID *, IUnknown **); // rdi
  unsigned int v32; // r15d
  HRESULT v33; // eax
  __int64 v34; // rax
  _QWORD *v35; // rax
  bool v36; // di
  int v37; // edi
  PVOID v38; // rdi
  __int64 (__fastcall *v39)(PVOID, __int64, IUnknown **); // rsi
  IUnknown *v40; // rcx
  int v41; // eax
  IUnknown **v42; // rcx
  IUnknown *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  __int64 (__fastcall ***v47)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v48)(_QWORD, GUID *, __int64 *); // rax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  const char *v56; // r9
  __int64 result; // rax
  IUnknown *punk; // [rsp+20h] [rbp-158h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v59; // [rsp+28h] [rbp-150h] BYREF
  unsigned int v60; // [rsp+30h] [rbp-148h] BYREF
  _QWORD *v61; // [rsp+38h] [rbp-140h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v62; // [rsp+40h] [rbp-138h] BYREF
  IUnknown *v63; // [rsp+48h] [rbp-130h] BYREF
  __int64 v64; // [rsp+50h] [rbp-128h] BYREF
  __int64 (__fastcall ***v65)(_QWORD, GUID *, _QWORD *); // [rsp+58h] [rbp-120h] BYREF
  __int64 v66; // [rsp+60h] [rbp-118h] BYREF
  __int64 v67; // [rsp+68h] [rbp-110h] BYREF
  int v68; // [rsp+70h] [rbp-108h] BYREF
  int v69; // [rsp+74h] [rbp-104h] BYREF
  unsigned int v70; // [rsp+78h] [rbp-100h] BYREF
  __int64 (__fastcall ***v71)(_QWORD, GUID *, _QWORD *); // [rsp+80h] [rbp-F8h] BYREF
  void *ppvOut; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v73; // [rsp+90h] [rbp-E8h] BYREF
  __int64 (__fastcall ***v74)(_QWORD, GUID *, _QWORD *); // [rsp+98h] [rbp-E0h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v81; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-A0h] BYREF
  int v83; // [rsp+E0h] [rbp-98h]
  __int64 v84; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v85; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v86; // [rsp+F8h] [rbp-80h] BYREF
  __int64 *v87; // [rsp+100h] [rbp-78h]
  __int64 v88; // [rsp+108h] [rbp-70h] BYREF
  int v89; // [rsp+110h] [rbp-68h]
  __int64 v90; // [rsp+118h] [rbp-60h] BYREF
  int v91; // [rsp+120h] [rbp-58h]
  _BYTE v92[8]; // [rsp+128h] [rbp-50h] BYREF
  int v93; // [rsp+130h] [rbp-48h]
  __int64 v94[8]; // [rsp+138h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]
  __int64 v98; // [rsp+190h] [rbp+18h] BYREF
  int v99; // [rsp+198h] [rbp+20h]

  try
  {
    v2 = a2;
    v3 = this;
    v4 = 0;
    v99 = 0;
    v5 = *(_QWORD *)a2;
    v73 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64 *))(v5 + 72))(
           a2,
           &v73);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x62E,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6,
        (int)punk);
    v7 = cshell::make_agile_vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>(&v98);
    v8 = *v7;
    *v7 = 0LL;
    v81 = v8;
    if ( v98 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::IIterable<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Microsoft::WRL::FtmBase>::Release(v98);
    v98 = v73;
    v82 = v73;
    v83 = 0;
    v84 = 0LL;
    wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,wil::err_exception_policy>::end(
      &v98,
      v92);
    for ( i = v83; i != v93; i = ++v83 )
    {
      v10 = wil::vector_range<Windows::Foundation::Collections::IVectorView<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,wil::err_exception_policy>::vector_iterator::operator*(&v82);
      try
      {
        v11 = v10;
        v87 = v10;
        v12 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64, struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **))(*(_QWORD *)v2 + 80LL);
        v59 = 0LL;
        v13 = v12(v2, *v11, &v59);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x637,
            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v13,
            (int)punk);
        wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>(
          &v74,
          *v11);
        v14 = wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                &v74,
                &v85);
        v15 = (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v14 + 48LL))(*v14, &v68) < 0;
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v85);
        wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v74);
        if ( v15 )
        {
          wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)&v59);
        }
        else
        {
          v61 = 0LL;
          v80 = 0LL;
          LOBYTE(v98) = 0;
          v60 = 0;
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_IAMAndWECDeadlockMitigation>::GetImpl'::`2'::impl,
            0,
            v16,
            v17);
          AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          v19 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v61;
          v61 = 0LL;
          if ( v19 )
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v19)[2])(v19);
          v88 = v68;
          v89 = 4;
          First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                    (__int64)v3,
                    (__int64)&v88,
                    &v61,
                    0LL);
          ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
          if ( First >= 0 )
          {
            v22 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *, __int64 *))(*(_QWORD *)v59 + 56LL))(
                    v59,
                    &v98);
            if ( v22 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x677,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v22,
                (int)punk);
            if ( (_BYTE)v98 )
            {
              punk = 0LL;
              v23 = (__int64 (__fastcall **)(_QWORD, GUID *, _QWORD *))*v61;
              punk = 0LL;
              v24 = ((__int64 (__fastcall *)(_QWORD *, IUnknown **))v23[78])(v61, &punk);
              if ( v24 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x67D,
                  (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v24,
                  (int)punk);
              if ( punk )
              {
                LODWORD(v62) = 0;
                v25 = ((__int64 (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **))punk->lpVtbl[1].AddRef)(
                        punk,
                        &v62);
                if ( v25 < 0 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x681,
                    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v25,
                    (int)punk);
                v26 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, unsigned int *))(*(_QWORD *)v2 + 64LL))(
                        v2,
                        &v60);
                if ( v26 < 0 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x682,
                    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)(unsigned int)v26,
                    (int)punk);
                if ( (_DWORD)v62 != v60 )
                  wil::details::in1diag3::Throw_Hr(
                    retaddr,
                    (void *)0x683,
                    (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                    (const char *)0x80070057LL,
                    (int)punk);
              }
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&punk);
            }
            wil::com_ptr_t<IImmersiveApplicationInternal,wil::err_exception_policy>::query<IImmersiveApplication>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v61,
              &v79);
            v66 = 0LL;
            Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
            v28 = *Ptr;
            v66 = 0LL;
            v29 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v28 + 56))(Ptr, v79, &v66);
            if ( v29 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x68B,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v29,
                (int)punk);
            ppvOut = 0LL;
            punk = 0LL;
            v30 = v4 | 0x20;
            v99 = v30;
            v31 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)v3 + 6) + 32LL);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
            v31((char *)v3 + 48, &GUID_00000000_0000_0000_c000_000000000046, &punk);
            v32 = v30 & 0xFFFFFFCF | 0x10;
            v99 = v32;
            v33 = IUnknown_QueryService(
                    punk,
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    &GUID_01719fd4_ce6f_429b_9554_1c3b9d375792,
                    &ppvOut);
            if ( v33 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x68F,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v33,
                (int)punk);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
            v65 = 0LL;
            v63 = 0LL;
            v34 = *(_QWORD *)v59;
            v65 = 0LL;
            if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v34 + 88))(
                   v59,
                   &v65) >= 0 )
            {
              v35 = wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
                      &v65,
                      &v86);
              v36 = (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v35 + 48LL))(*v35, &v69) >= 0;
              wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v86);
              if ( v36 )
              {
                AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                v71 = 0LL;
                v90 = v69;
                v91 = 4;
                v37 = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(
                        (__int64)v3,
                        (__int64)&v90,
                        &v71,
                        0LL);
                ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
                if ( v37 >= 0 )
                {
                  wil::com_ptr_t<IImmersiveApplicationInternal,wil::err_exception_policy>::query<IImmersiveApplication>(
                    &v71,
                    &v75);
                  v38 = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
                  v39 = *(__int64 (__fastcall **)(PVOID, __int64, IUnknown **))(*(_QWORD *)v38 + 56LL);
                  v40 = v63;
                  v63 = 0LL;
                  if ( v40 )
                    ((void (__fastcall *)(IUnknown *))v40->lpVtbl->Release)(v40);
                  v41 = v39(v38, v75, &v63);
                  if ( v41 < 0 )
                    wil::details::in1diag3::Throw_Hr(
                      retaddr,
                      (void *)0x6A1,
                      (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                      (const char *)(unsigned int)v41,
                      (int)punk);
                  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v75);
                }
                wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v71);
              }
            }
            punk = v63;
            v62 = v59;
            if ( (_BYTE)v98 )
            {
              v42 = (IUnknown **)wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *,unsigned int &>(
                                   &v77,
                                   &v62,
                                   (struct IApplicationView **)&punk,
                                   &v60);
              v4 = v32 | 1;
            }
            else
            {
              v42 = (IUnknown **)wil::MakeOrThrow<PresentationRequestedArgs,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *,IApplicationView *>(
                                   &v76,
                                   &v62,
                                   (struct IApplicationView **)&punk);
              v4 = v32 | 2;
            }
            v99 = v4;
            v43 = *v42;
            *v42 = 0LL;
            if ( v43 )
              punk = v43 + 2;
            else
              punk = 0LL;
            if ( (v4 & 2) != 0 )
            {
              v4 &= ~2u;
              v99 = v4;
              v44 = v76;
              if ( v76 )
              {
                v76 = 0LL;
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v44);
              }
            }
            if ( (v4 & 1) != 0 )
            {
              v4 &= ~1u;
              v99 = v4;
              v45 = v77;
              if ( v77 )
              {
                v77 = 0LL;
                Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v45);
              }
            }
            wil::com_ptr_t<IPresentationRequestedArgs,wil::err_exception_policy>::query<IInspectable>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&punk,
              &v78);
            v46 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v66, v78);
            if ( v46 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x6AB,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v46,
                (int)punk);
            v64 = 0LL;
            v47 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v87;
            v48 = *(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v87;
            v64 = 0LL;
            v49 = (*v48)(v47, &GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d, &v64);
            if ( v49 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x6B4,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v49,
                (int)punk);
            if ( (*(int (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *, unsigned int *))(*(_QWORD *)v59 + 48LL))(
                   v59,
                   &v70) >= 0 )
            {
              v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v64 + 112LL))(v64, v70);
              if ( v50 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x6BA,
                  (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v50,
                  (int)punk);
            }
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v64);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v78);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&punk);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v63);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v65);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&ppvOut);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v66);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v79);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v80);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v61);
            wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)&v59);
          }
          else
          {
            v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 104LL))(v8, *v11);
            if ( v21 < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0x672,
                (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                (const char *)(unsigned int)v21,
                (int)punk);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v80);
            wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v61);
            wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)&v59);
          }
        }
      }
      catch ( ... )
      {
        wil::details::in1diag3::Log_CaughtException(
          retaddr,
          (void *)0x6BE,
          (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          v18);
        v3 = this;
        v2 = a2;
        v8 = v81;
        v4 = v99;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v94);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v84);
    v67 = 0LL;
    v51 = *(_QWORD *)v8;
    v67 = 0LL;
    v52 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v51 + 64))(v8, &v67);
    if ( v52 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6C2,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v52,
        (int)punk);
    v53 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64))(*(_QWORD *)v2 + 88LL))(
            v2,
            v67);
    if ( v53 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6C4,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v53,
        (int)punk);
    LOBYTE(v54) = 1;
    v55 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettingsArgs *, __int64))(*(_QWORD *)v2 + 48LL))(
            v2,
            v54);
    if ( v55 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6C5,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v55,
        (int)punk);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v67);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v81);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v73);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6C8,
                           (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v56);
  }
  return result;
}
