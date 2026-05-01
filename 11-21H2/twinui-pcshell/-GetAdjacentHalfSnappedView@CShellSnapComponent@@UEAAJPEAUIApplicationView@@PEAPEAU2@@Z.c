/*
 * XREFs of ?GetAdjacentHalfSnappedView@CShellSnapComponent@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1805928A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?_IsEdgeCompletelyOccluded@CShellSnapComponent@@AEAA_NAEBUCRect@Geometry@@PEAUISnappedWindow@@1@Z @ 0x180597AC8 (-_IsEdgeCompletelyOccluded@CShellSnapComponent@@AEAA_NAEBUCRect@Geometry@@PEAUISnappedWindow@@1@.c)
 *     ?CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PEAUIImmersiveMonitorManager@@W4SnappedWindowOcclusionModel@@AEBU_GUID@@PEAPEAX@Z @ 0x180598C0C (-CSnappedWindowModel_CreateInstance@@YAJPEAUIApplicationView@@PEAUIApplicationViewCollection@@PE.c)
 *     ?ComputeOcclusionErrorThresholdForView@SnapLayoutHelpers@@YAHPEAUIApplicationView@@@Z @ 0x1805A1FF0 (-ComputeOcclusionErrorThresholdForView@SnapLayoutHelpers@@YAHPEAUIApplicationView@@@Z.c)
 *     ?HasComplementaryVerticalEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z @ 0x1805A68C0 (-HasComplementaryVerticalEdge@SnapLayoutHelpers@@YA_NW4SnapRegion@@0PEAW4Edge@1@@Z.c)
 *     ?s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x1805AB918 (-s_CreateInstance@CSnappedWindow@@SAJPEAUIImmersiveMonitor@@PEAUIApplicationView@@AEBU_GUID@@PEA.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CShellSnapComponent::GetAdjacentHalfSnappedView(
        CShellSnapComponent *this,
        struct IApplicationView *a2,
        struct IApplicationView **a3)
{
  __int64 (__fastcall *v6)(struct IApplicationView *, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v8; // eax
  unsigned int v9; // ebx
  const struct _GUID *v10; // r8
  int Instance; // eax
  unsigned int v12; // r13d
  int v13; // eax
  int v14; // eax
  __int64 *v15; // rdi
  __int64 *v16; // rsi
  struct ISnappedWindow *v17; // rbx
  unsigned int v18; // eax
  struct IApplicationView *v19; // rdx
  int v20; // eax
  LONG right; // r8d
  __int64 *v22; // rbx
  struct ISnappedWindow *v24; // [rsp+30h] [rbp-69h] BYREF
  struct IUnknown *v25; // [rsp+38h] [rbp-61h] BYREF
  struct ISnappedWindow *v26; // [rsp+40h] [rbp-59h] BYREF
  __int64 v27; // [rsp+48h] [rbp-51h] BYREF
  struct IImmersiveMonitor *v28; // [rsp+50h] [rbp-49h] BYREF
  __int64 v29; // [rsp+58h] [rbp-41h] BYREF
  __int64 *v30; // [rsp+60h] [rbp-39h] BYREF
  __int64 v31; // [rsp+68h] [rbp-31h]
  __int64 v32; // [rsp+70h] [rbp-29h]
  __int64 v33; // [rsp+78h] [rbp-21h]
  struct tagRECT v34; // [rsp+80h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-9h] BYREF
  _DWORD v36[4]; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  *a3 = 0LL;
  v28 = 0LL;
  v6 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 80LL);
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v28);
  v8 = v6(a2, AddressOf);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
    Instance = CSnappedWindow::s_CreateInstance(v28, a2, v10, (void **)&v25);
    v9 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x289,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)Instance);
LABEL_30:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
      goto LABEL_31;
    }
    v12 = ((__int64 (__fastcall *)(struct IUnknown *))v25->lpVtbl[3].QueryInterface)(v25);
    if ( ((v12 - 1) & 0xFFFFFFF9) != 0 )
    {
      v27 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
      v13 = CSnappedWindowModel_CreateInstance(0LL, *((_QWORD *)this + 14), *((_QWORD *)this + 13), 2LL);
      v9 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x295,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v13);
LABEL_26:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
        goto LABEL_30;
      }
      v30 = 0LL;
      v31 = 0LL;
      v32 = 0LL;
      v33 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *, __int64, __int64 **))(*(_QWORD *)v27 + 24LL))(
              v27,
              v28,
              2LL,
              &v30);
      v9 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x298,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)v14);
LABEL_25:
        CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)&v30);
        goto LABEL_26;
      }
      v15 = v30;
      v16 = &v30[v31];
      while ( v15 != v16 )
      {
        v26 = (struct ISnappedWindow *)*v15;
        v17 = v26;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
        if ( !(unsigned int)SHIsSameObject((struct IUnknown *)v17, v25) )
        {
          v24 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
          v24 = v17;
          v18 = (*(__int64 (__fastcall **)(struct ISnappedWindow *))(*(_QWORD *)v17 + 72LL))(v17);
          if ( (unsigned __int8)SnapLayoutHelpers::HasComplementaryVerticalEdge(v12, v18, &v29) )
          {
            if ( (((void (__fastcall *)(struct IUnknown *, struct tagRECT *))v25->lpVtbl[2].QueryInterface)(v25, &v34),
                  (*(void (__fastcall **)(struct ISnappedWindow *, _DWORD *))(*(_QWORD *)v24 + 48LL))(v24, v36),
                  v20 = SnapLayoutHelpers::ComputeOcclusionErrorThresholdForView(a2, v19),
                  right = v34.left,
                  (_DWORD)v29 == 2)
              && v34.right - (v36[0] - v20) <= (unsigned int)(2 * v20)
              || (_DWORD)v29 == 3 && v34.left - (v36[2] - v20) <= (unsigned int)(2 * v20) )
            {
              rc = v34;
              if ( (_DWORD)v29 == 2 )
                right = v34.right;
              rc.right = right;
              rc.left = right;
              InflateRect(&rc, 1, 0);
              if ( !CShellSnapComponent::_IsEdgeCompletelyOccluded(
                      (CShellSnapComponent *)((char *)this - 120),
                      (const struct Geometry::CRect *)&rc,
                      (struct ISnappedWindow *)v25,
                      v24) )
              {
                v22 = (__int64 *)(*(__int64 (__fastcall **)(struct ISnappedWindow *, __int64 *))(*(_QWORD *)v24 + 112LL))(
                                   v24,
                                   &v29);
                Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v22);
                *a3 = (struct IApplicationView *)*v22;
                Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v29);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
                v9 = 0;
                goto LABEL_25;
              }
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
              break;
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v26);
        ++v15;
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)&v30);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
    }
    v9 = -2147467259;
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x286,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v8);
LABEL_31:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
  return v9;
}
