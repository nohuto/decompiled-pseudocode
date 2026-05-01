/*
 * XREFs of ?GetHalfSnappedViewFromToolWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1805935F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803CA2F4 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180598C0C (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CShellSnapComponent::GetHalfSnappedViewFromToolWindow(
        CShellSnapComponent *this,
        HWND a2,
        struct IApplicationView **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, HWND, GUID *, GUID *, int *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  int Instance; // eax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  DWORD WindowThreadProcessId; // r15d
  __int64 *v15; // rbx
  __int64 *v16; // rdi
  __int64 v17; // r14
  HWND v18; // rax
  int v19; // eax
  unsigned int v20; // edx
  void *v21; // rcx
  void *v22; // rcx
  struct IApplicationView *v24; // [rsp+30h] [rbp-50h] BYREF
  __int64 v25; // [rsp+38h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-40h] BYREF
  int v27[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v28; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v29; // [rsp+58h] [rbp-28h] BYREF
  __int64 v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-18h]
  __int64 v32; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  unsigned int v34; // [rsp+D0h] [rbp+50h] BYREF
  LPVOID pv; // [rsp+D8h] [rbp+58h] BYREF

  *a3 = 0LL;
  if ( (GetWindowLongPtrW(a2, -20) & 0x80080) != 0x80080 )
    return 2147942487LL;
  *(_QWORD *)v27 = 0LL;
  v6 = *((_QWORD *)this + 13);
  v7 = *(__int64 (__fastcall **)(__int64, HWND, GUID *, GUID *, int *))(*(_QWORD *)v6 + 88LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v27);
  v8 = v7(v6, a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D5,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_26;
  }
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  Instance = CSnappedWindowModel_CreateInstance(0LL, *((_QWORD *)this + 14), *((_QWORD *)this + 13), 2LL);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DD,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_25;
  }
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 **))(*(_QWORD *)v26 + 24LL))(
          v26,
          *(_QWORD *)v27,
          2LL,
          &v29);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = (unsigned int)v11;
    v13 = 739LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)v12);
    goto LABEL_24;
  }
  WindowThreadProcessId = GetWindowThreadProcessId(a2, 0LL);
  if ( !WindowThreadProcessId )
  {
    v9 = -2147023496;
    v12 = 2147943800LL;
    v13 = 744LL;
    goto LABEL_23;
  }
  v15 = v29;
  v16 = &v29[v30];
  while ( 1 )
  {
    if ( v15 == v16 )
    {
      v9 = -2147467259;
      goto LABEL_24;
    }
    v28 = *v15;
    v17 = v28;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v28);
    (*(void (__fastcall **)(__int64, struct IApplicationView **))(*(_QWORD *)v17 + 112LL))(v17, &v24);
    v25 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v24,
                &v25) >= 0 )
    {
      v18 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 80LL))(v17);
      if ( GetWindowThreadProcessId(v18, 0LL) == WindowThreadProcessId )
        break;
    }
LABEL_18:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
    ++v15;
  }
  v34 = 0;
  pv = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *, LPVOID *))(*(_QWORD *)v25 + 32LL))(v25, &v34, &pv);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2F7,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v19);
LABEL_17:
    v21 = pv;
    pv = 0LL;
    CoTaskMemFree(v21);
    goto LABEL_18;
  }
  v20 = 0;
  if ( !v34 )
    goto LABEL_17;
  while ( *((HWND *)pv + v20) != a2 )
  {
    if ( ++v20 >= v34 )
      goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
  *a3 = v24;
  v22 = pv;
  pv = 0LL;
  CoTaskMemFree(v22);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  v9 = 0;
LABEL_24:
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)&v29);
LABEL_25:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
LABEL_26:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v27);
  return v9;
}
