/*
 * XREFs of ?PrepareTaggingInfoForApp@CAppTransitionTargetManager@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059ABD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     s_GetTargetTypeForOperationItem @ 0x18059C0C4 (s_GetTargetTypeForOperationItem.c)
 *     CAppTransitionTarget_CreateInstance @ 0x18059C5D8 (CAppTransitionTarget_CreateInstance.c)
 */

__int64 __fastcall CAppTransitionTargetManager::PrepareTaggingInfoForApp(
        CAppTransitionTargetManager *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  int v9; // eax
  int v10; // edi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  void *v14; // r8
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 v16; // rdx
  __int64 *v17; // rdx
  int v18; // [rsp+20h] [rbp-38h]
  __int64 v19[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  IUnknown punk; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 104) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  if ( (unsigned int)s_GetTargetTypeForOperationItem(*((unsigned int *)this + 23)) != -1 )
  {
    punk.lpVtbl = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
    v9 = CAppTransitionTarget_CreateInstance(*((IUnknown **)this + 3), v18, &punk);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = (unsigned int)v9;
      v12 = 61LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
        (const char *)v11);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
      return (unsigned int)v10;
    }
    v13 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, struct IAppLayoutOperationItem *, struct ITemporaryAppVisual *, struct IImmersiveApplicationManagerSafeForSyncCallouts *))punk.lpVtbl->QueryInterface
           + 3))(
            punk.lpVtbl,
            a2,
            a3,
            a4);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = (unsigned int)v13;
      v12 = 63LL;
      goto LABEL_17;
    }
    lpVtbl = punk.lpVtbl;
    v19[0] = (__int64)punk.lpVtbl;
    if ( punk.lpVtbl )
      (*((void (__fastcall **)(struct IUnknownVtbl *))punk.lpVtbl->QueryInterface + 1))(punk.lpVtbl);
    v16 = *((_QWORD *)this + 6);
    v10 = 0;
    if ( v16 != *((_QWORD *)this + 8)
      || (v10 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 40,
                  v16 + 1,
                  v14),
          v10 >= 0) )
    {
      v17 = (__int64 *)(*((_QWORD *)this + 5) + 8 * (*((_QWORD *)this + 6))++);
      if ( v17 )
      {
        *v17 = 0LL;
        if ( v17 != v19 )
        {
          v19[0] = 0LL;
          *v17 = (__int64)lpVtbl;
        }
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v19);
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 65LL;
      goto LABEL_17;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&punk);
  }
  return 0LL;
}
