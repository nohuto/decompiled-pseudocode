/*
 * XREFs of ?Populate@PWSLayoutPolicyManager@@CAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@@Z @ 0x1804950F4
 * Callers:
 *     ?PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1804952D0 (-PopulateDefaultLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWor.c)
 *     ?PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180495428 (-PopulateOEMLayoutItems@PWSLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UIPenWorkspa.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ @ 0x1800704AC (-InternalAddRef@-$ComPtr@VRecentAppsCache@Discover@PenWorkspace@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18049568C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?PWSLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180496778 (-PWSLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PWSLayoutPolicyManager::Populate(_QWORD *a1, __int64 a2)
{
  const struct _GUID *v4; // rcx
  int v5; // eax
  int v6; // edi
  int v7; // eax
  void *v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-20h]
  __int64 v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  void *v23; // [rsp+80h] [rbp+30h] BYREF
  __int64 v24; // [rsp+88h] [rbp+38h] BYREF

  v23 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  v5 = PWSLayoutParser_CreateInstance(v4, &v23);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE1,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_17;
  }
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, a2, &v18);
  v6 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4,
      (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_16;
  }
  v9 = 0LL;
  v10 = v19;
  if ( !v19 )
  {
LABEL_15:
    v6 = 0;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v11 = 0LL;
    v17 = 0LL;
    v6 = -2147316575;
    if ( v9 >= v10 )
      break;
    v12 = *(_QWORD *)(v18 + 8 * v9);
    if ( v12 )
    {
      v24 = *(_QWORD *)(v18 + 8 * v9);
      Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef(&v24);
      v24 = 0LL;
      v11 = v12;
      v17 = v12;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v24);
    }
    v6 = 0;
    v13 = a1[1];
    if ( v13 != a1[3]
      || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)a1,
                 v13 + 1,
                 v8),
          v13 = a1[1],
          v6 >= 0) )
    {
      a1[1] = v13 + 1;
      v14 = (__int64 *)(*a1 + 8 * v13);
      if ( !v14 )
        goto LABEL_14;
      *v14 = v11;
      Microsoft::WRL::ComPtr<PenWorkspace::Discover::RecentAppsCache>::InternalAddRef(v14);
    }
    if ( v6 < 0 )
    {
      v16 = 234LL;
      goto LABEL_20;
    }
LABEL_14:
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v17);
    ++v9;
    v10 = v19;
    if ( v9 >= v19 )
      goto LABEL_15;
  }
  v16 = 233LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v17);
LABEL_16:
  CTSimpleArray<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>>::RemoveAll(&v18);
LABEL_17:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  return (unsigned int)v6;
}
