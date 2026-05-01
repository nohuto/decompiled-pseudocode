/*
 * XREFs of ?GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1@Z @ 0x180592CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1801243A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180598C0C (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1805A20A0 (-ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CShellSnapComponent::GetAdjacentSnappedViews(
        CShellSnapComponent *this,
        struct IApplicationView *a2,
        int a3,
        struct IObjectArray **a4,
        struct IObjectArray **a5)
{
  int Instance; // eax
  int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  const struct _GUID *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  const struct _GUID *v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r9
  int v24; // eax
  int v25; // eax
  struct IImmersiveMonitor *v26; // rdx
  int v27; // r14d
  __int64 *v28; // r15
  __int64 v29; // rdi
  bool v30; // dl
  void *v31; // rbx
  __int64 (__fastcall *v32)(void *, _QWORD); // rsi
  _QWORD *v33; // rax
  __int64 v34; // rdx
  int v35; // ecx
  unsigned int v36; // edx
  int v37; // ecx
  bool v38; // cc
  void *v39; // rbx
  __int64 (__fastcall *v40)(void *, _QWORD); // rsi
  _QWORD *v41; // rax
  int v43; // [rsp+20h] [rbp-B1h]
  SnapLayoutHelpers *v44; // [rsp+38h] [rbp-99h] BYREF
  void *v45; // [rsp+40h] [rbp-91h] BYREF
  void *v46; // [rsp+48h] [rbp-89h] BYREF
  int v47; // [rsp+50h] [rbp-81h]
  int v48; // [rsp+54h] [rbp-7Dh]
  int v49; // [rsp+58h] [rbp-79h]
  int v50; // [rsp+5Ch] [rbp-75h]
  int v51; // [rsp+60h] [rbp-71h]
  __int64 v52; // [rsp+68h] [rbp-69h] BYREF
  __int64 v53; // [rsp+70h] [rbp-61h] BYREF
  __int64 *v54; // [rsp+78h] [rbp-59h] BYREF
  unsigned __int64 v55; // [rsp+80h] [rbp-51h]
  __int64 v56; // [rsp+88h] [rbp-49h]
  __int64 v57; // [rsp+90h] [rbp-41h]
  int v58; // [rsp+98h] [rbp-39h]
  int v59; // [rsp+9Ch] [rbp-35h]
  __int64 v60; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-29h] BYREF
  __int64 *v62; // [rsp+B0h] [rbp-21h]
  __int128 v63; // [rsp+B8h] [rbp-19h] BYREF
  int v64; // [rsp+C8h] [rbp-9h] BYREF
  int v65; // [rsp+CCh] [rbp-5h]
  int v66; // [rsp+D0h] [rbp-1h]
  int v67; // [rsp+D4h] [rbp+3h]
  int v68; // [rsp+D8h] [rbp+7h] BYREF
  int v69; // [rsp+DCh] [rbp+Bh]
  int v70; // [rsp+E0h] [rbp+Fh]
  int v71; // [rsp+E4h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v51 = a3;
  *a4 = 0LL;
  *a5 = 0LL;
  v52 = 0LL;
  Instance = CSnappedWindowModel_CreateInstance(0LL, *((_QWORD *)this + 14), *((_QWORD *)this + 13), 1LL);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x318,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_57;
  }
  v10 = *(_QWORD *)a2;
  v44 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, SnapLayoutHelpers **))(v10 + 80))(a2, &v44);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_56;
  }
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, SnapLayoutHelpers *, __int64, __int64 **))(*(_QWORD *)v52 + 24LL))(
          v52,
          v44,
          1LL,
          &v54);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31E,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_55;
  }
  v45 = 0LL;
  v15 = CEnumerableObjectCollection::CreateInstance(v14, v13, &v45);
  v9 = v15;
  if ( v15 < 0 )
  {
    v16 = (unsigned int)v15;
    v17 = 801LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v16);
    goto LABEL_54;
  }
  if ( (**(int (__fastcall ***)(void *, GUID *, struct IObjectArray **))v45)(
         v45,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a4) < 0 )
  {
    v9 = -2147467261;
    v16 = 2147500035LL;
    v17 = 802LL;
    goto LABEL_53;
  }
  v46 = 0LL;
  v20 = CEnumerableObjectCollection::CreateInstance(v19, v18, &v46);
  v9 = v20;
  if ( v20 < 0 )
  {
    v21 = (unsigned int)v20;
    v22 = 805LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v21);
    goto LABEL_51;
  }
  if ( (**(int (__fastcall ***)(void *, GUID *, struct IObjectArray **))v46)(
         v46,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a5) < 0 )
  {
    v9 = -2147467261;
    v21 = 2147500035LL;
    v22 = 806LL;
    goto LABEL_50;
  }
  if ( v55 < 2 )
    goto LABEL_47;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v23);
  if ( !*((_QWORD *)this + 57) )
    goto LABEL_47;
  v63 = 0LL;
  v24 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, __int128 *))(*(_QWORD *)v44 + 88LL))(v44, &v63);
  v9 = v24;
  if ( v24 < 0 )
  {
    v21 = (unsigned int)v24;
    v22 = 819LL;
    goto LABEL_50;
  }
  v25 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v64);
  v9 = v25;
  if ( v25 < 0 )
  {
    v21 = (unsigned int)v25;
    v22 = 822LL;
    goto LABEL_50;
  }
  v27 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(v44, v26);
  v28 = v54;
  v62 = &v54[v55];
  if ( v54 == v62 )
  {
LABEL_47:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v45);
    CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)&v54);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v44);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v52);
    return 0LL;
  }
  while ( 1 )
  {
    v53 = *v28;
    v29 = v53;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v53);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v29 + 88LL))(v29, a2) )
      goto LABEL_46;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 48LL))(v29, &v68);
    v49 = v64 - v27;
    v50 = v66 - v27;
    v48 = v65;
    v58 = v65 - v27;
    v47 = v67;
    v59 = v67 - v27;
    v30 = v69 - (v67 - v27) <= (unsigned int)(2 * v27);
    switch ( v51 )
    {
      case 10:
        v30 = v70 - (v64 - v27) <= (unsigned int)(2 * v27);
        break;
      case 11:
        v30 = v68 - (v66 - v27) <= (unsigned int)(2 * v27);
        break;
      case 12:
        v30 = v71 - (v65 - v27) <= (unsigned int)(2 * v27);
        break;
      case 15:
        break;
      default:
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          843LL,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)0x8000FFFFLL,
          v43);
    }
    if ( v30 )
    {
      v31 = v45;
      v32 = *(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v45 + 40LL);
      v33 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 112LL))(v29, &v60);
      v9 = v32(v31, *v33);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v60);
      if ( v9 < 0 )
      {
        v34 = 848LL;
        goto LABEL_32;
      }
      goto LABEL_46;
    }
    v35 = v49;
    v49 = v64 - v49;
    v36 = v68 - v35;
    v37 = v50;
    v50 = v66 - v50;
    v48 -= v58;
    v47 -= v59;
    if ( v51 == 10 )
      break;
    if ( v51 == 11 )
    {
      if ( v70 - v37 <= (unsigned int)(v27 + v50) )
      {
        v38 = v70 - (DWORD2(v63) - v27) <= (unsigned int)(2 * v27);
        goto LABEL_44;
      }
    }
    else if ( v51 == 12 )
    {
      if ( v69 - v58 <= (unsigned int)(v27 + v48) )
      {
        v38 = v69 - (DWORD1(v63) - v27) <= (unsigned int)(2 * v27);
        goto LABEL_44;
      }
    }
    else if ( v71 - v59 <= (unsigned int)(v27 + v47) )
    {
      v38 = v71 - (HIDWORD(v63) - v27) <= (unsigned int)(2 * v27);
      goto LABEL_44;
    }
LABEL_46:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
    if ( ++v28 == v62 )
      goto LABEL_47;
  }
  if ( v36 > v27 + v49 )
    goto LABEL_46;
  v38 = v68 - ((int)v63 - v27) <= (unsigned int)(2 * v27);
LABEL_44:
  if ( v38 )
    goto LABEL_46;
  v39 = v46;
  v40 = *(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v46 + 40LL);
  v41 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 112LL))(v29, &v61);
  v9 = v40(v39, *v41);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v61);
  if ( v9 >= 0 )
    goto LABEL_46;
  v34 = 882LL;
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v34,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
LABEL_51:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v46);
LABEL_54:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v45);
LABEL_55:
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)&v54);
LABEL_56:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v44);
LABEL_57:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v52);
  return (unsigned int)v9;
}
