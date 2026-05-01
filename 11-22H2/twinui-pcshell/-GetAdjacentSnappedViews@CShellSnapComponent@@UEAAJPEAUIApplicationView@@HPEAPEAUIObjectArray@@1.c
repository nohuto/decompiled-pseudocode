/*
 * XREFs of ?GetAdjacentSnappedViews@CShellSnapComponent@@UEAAJPEAUIApplicationView@@HPEAPEAUIObjectArray@@1@Z @ 0x180660360
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800D0440 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180114810 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180667060 (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x180677DC0 (-ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CShellSnapComponent::GetAdjacentSnappedViews(
        CShellSnapComponent *this,
        struct IApplicationView *a2,
        int a3,
        struct IObjectArray **a4,
        struct IObjectArray **a5)
{
  int v8; // eax
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
  __int64 v30; // r8
  bool v31; // r9
  void *v32; // rbx
  __int64 (__fastcall *v33)(void *, _QWORD); // rsi
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r9
  bool v37; // cc
  void *v38; // rbx
  __int64 (__fastcall *v39)(void *, _QWORD); // rsi
  _QWORD *v40; // rax
  int v42; // [rsp+20h] [rbp-B1h]
  SnapRectHelpers *v43; // [rsp+30h] [rbp-A1h] BYREF
  void *v44; // [rsp+38h] [rbp-99h] BYREF
  void *v45; // [rsp+40h] [rbp-91h] BYREF
  int v46; // [rsp+48h] [rbp-89h]
  __int64 v47; // [rsp+50h] [rbp-81h] BYREF
  __int64 *v48; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int64 v49; // [rsp+60h] [rbp-71h]
  __int64 v50; // [rsp+68h] [rbp-69h]
  __int64 v51; // [rsp+70h] [rbp-61h]
  int v52; // [rsp+78h] [rbp-59h]
  int v53; // [rsp+7Ch] [rbp-55h]
  int v54; // [rsp+80h] [rbp-51h]
  int v55; // [rsp+84h] [rbp-4Dh]
  unsigned int v56; // [rsp+88h] [rbp-49h]
  unsigned int v57; // [rsp+8Ch] [rbp-45h]
  unsigned int v58; // [rsp+90h] [rbp-41h]
  unsigned int v59; // [rsp+94h] [rbp-3Dh]
  __int64 v60; // [rsp+98h] [rbp-39h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-29h] BYREF
  __int64 *v63; // [rsp+B0h] [rbp-21h]
  __int128 v64; // [rsp+B8h] [rbp-19h] BYREF
  int v65; // [rsp+C8h] [rbp-9h] BYREF
  int v66; // [rsp+CCh] [rbp-5h]
  int v67; // [rsp+D0h] [rbp-1h]
  int v68; // [rsp+D4h] [rbp+3h]
  int v69; // [rsp+D8h] [rbp+7h] BYREF
  int v70; // [rsp+DCh] [rbp+Bh]
  unsigned int v71; // [rsp+E0h] [rbp+Fh]
  int v72; // [rsp+E4h] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v46 = a3;
  *a4 = 0LL;
  *a5 = 0LL;
  v47 = 0LL;
  v8 = CSnappedWindowModel_CreateInstance(
         0LL,
         *((_QWORD *)this + 13),
         *((_QWORD *)this + 12),
         1LL,
         &GUID_c3fa9c5f_1c18_451b_8c77_5eba502c4f06,
         &v47);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C0,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_59;
  }
  v10 = *(_QWORD *)a2;
  v43 = 0LL;
  v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, SnapRectHelpers **))(v10 + 80))(a2, &v43);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C3,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_58;
  }
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, SnapRectHelpers *, __int64 **))(*(_QWORD *)v47 + 24LL))(v47, v43, &v48);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C6,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_57;
  }
  v44 = 0LL;
  v15 = CEnumerableObjectCollection::CreateInstance(v14, v13, &v44);
  v9 = v15;
  if ( v15 < 0 )
  {
    v16 = (unsigned int)v15;
    v17 = 713LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v16);
    goto LABEL_56;
  }
  if ( (**(int (__fastcall ***)(void *, GUID *, struct IObjectArray **))v44)(
         v44,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a4) < 0 )
  {
    v9 = -2147467261;
    v16 = 2147500035LL;
    v17 = 714LL;
    goto LABEL_55;
  }
  v45 = 0LL;
  v20 = CEnumerableObjectCollection::CreateInstance(v19, v18, &v45);
  v9 = v20;
  if ( v20 < 0 )
  {
    v21 = (unsigned int)v20;
    v22 = 717LL;
LABEL_52:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v21);
    goto LABEL_53;
  }
  if ( (**(int (__fastcall ***)(void *, GUID *, struct IObjectArray **))v45)(
         v45,
         &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
         a5) < 0 )
  {
    v9 = -2147467261;
    v21 = 2147500035LL;
    v22 = 718LL;
    goto LABEL_52;
  }
  if ( v49 < 2 )
    goto LABEL_49;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v23);
  if ( !*((_QWORD *)this + 58) )
    goto LABEL_49;
  v64 = 0LL;
  v24 = (*(__int64 (__fastcall **)(SnapRectHelpers *, __int128 *))(*(_QWORD *)v43 + 88LL))(v43, &v64);
  v9 = v24;
  if ( v24 < 0 )
  {
    v21 = (unsigned int)v24;
    v22 = 731LL;
    goto LABEL_52;
  }
  v25 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v65);
  v9 = v25;
  if ( v25 < 0 )
  {
    v21 = (unsigned int)v25;
    v22 = 734LL;
    goto LABEL_52;
  }
  v27 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(v43, v26);
  v28 = v48;
  v63 = &v48[v49];
  if ( v48 == v63 )
  {
LABEL_49:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v45);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
    CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)&v48);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
    return 0LL;
  }
  while ( 1 )
  {
    v29 = *v28;
    v60 = v29;
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v29 + 88LL))(v29, a2) )
      goto LABEL_48;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 48LL))(v29, &v69);
    v52 = v65 - v27;
    v59 = 2 * v27;
    v30 = v71;
    v53 = v67 - v27;
    v58 = 2 * v27;
    v54 = v66 - v27;
    v57 = 2 * v27;
    v55 = v68 - v27;
    v56 = 2 * v27;
    v31 = v70 - (v68 - v27) <= (unsigned int)(2 * v27);
    switch ( v46 )
    {
      case 10:
        v31 = v71 - (v65 - v27) <= 2 * v27;
        break;
      case 11:
        v31 = v69 - (v67 - v27) <= (unsigned int)(2 * v27);
        break;
      case 12:
        v31 = v72 - (v66 - v27) <= (unsigned int)(2 * v27);
        break;
      case 15:
        break;
      default:
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2F3,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)0x8000FFFFLL,
          v42);
    }
    if ( v31 )
    {
      v32 = v44;
      v33 = *(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v44 + 40LL);
      v34 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 112LL))(v29, &v61);
      v9 = v33(v32, *v34);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v61);
      if ( v9 < 0 )
      {
        v35 = 760LL;
        goto LABEL_34;
      }
      goto LABEL_48;
    }
    v36 = (unsigned int)(v69 - v52);
    if ( v46 == 10 )
      break;
    if ( v46 == 11 )
    {
      if ( v71 - v53 <= v58 )
      {
        v30 = v71 - (DWORD2(v64) - v27);
        v37 = (unsigned int)v30 <= 2 * v27;
        goto LABEL_46;
      }
    }
    else if ( v46 == 12 )
    {
      if ( v70 - v54 <= v57 )
      {
        v37 = v70 - (DWORD1(v64) - v27) <= (unsigned int)(2 * v27);
        goto LABEL_46;
      }
    }
    else if ( v72 - v55 <= v56 )
    {
      v37 = v72 - (HIDWORD(v64) - v27) <= (unsigned int)(2 * v27);
      goto LABEL_46;
    }
LABEL_48:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
    if ( ++v28 == v63 )
      goto LABEL_49;
  }
  if ( (unsigned int)v36 > v59 )
    goto LABEL_48;
  v37 = v69 - ((int)v64 - v27) <= (unsigned int)(2 * v27);
LABEL_46:
  if ( v37 )
    goto LABEL_48;
  v38 = v45;
  v39 = *(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v45 + 40LL);
  v40 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v29 + 112LL))(
                    v29,
                    &v62,
                    v30,
                    v36);
  v9 = v39(v38, *v40);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v62);
  if ( v9 >= 0 )
    goto LABEL_48;
  v35 = 794LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v35,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
LABEL_53:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v45);
LABEL_56:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
LABEL_57:
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)&v48);
LABEL_58:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
LABEL_59:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
  return (unsigned int)v9;
}
