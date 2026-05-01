/*
 * XREFs of ?ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x180594C20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K0@Z @ 0x1805952A4 (-_EnsureCapacity@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTP.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::ItemShown(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _BYTE *a4)
{
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // edi
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v20; // [rsp+70h] [rbp+20h] BYREF

  *a4 = 1;
  if ( *(_BYTE *)(a1 + 232) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
  {
    v20 = 0LL;
    v7 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    v8 = v7(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v20);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v12 = v20;
      v17 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      v18 = 0LL;
      v9 = 0;
      v13 = *(_QWORD *)(a1 + 96);
      if ( v13 != *(_QWORD *)(a1 + 112)
        || (v9 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::_EnsureCapacity(
                   a1 + 88,
                   v13 + 1),
            v9 >= 0) )
      {
        v14 = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(a1 + 96) = v14 + 1;
        v15 = *(_QWORD *)(a1 + 88) + 32 * v14;
        if ( v15 )
        {
          *(_DWORD *)v15 = a2;
          *(_QWORD *)(v15 + 8) = 0LL;
          if ( (__int64 *)(v15 + 8) != &v17 )
          {
            *(_QWORD *)(v15 + 8) = v12;
            v17 = 0LL;
          }
          *(_OWORD *)(v15 + 16) = 0LL;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
      if ( v9 >= 0 )
      {
        v9 = 0;
        goto LABEL_15;
      }
      v10 = (unsigned int)v9;
      v11 = 52LL;
    }
    else
    {
      v10 = (unsigned int)v8;
      v11 = 50LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)v10);
LABEL_15:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
    return (unsigned int)v9;
  }
  return 0LL;
}
