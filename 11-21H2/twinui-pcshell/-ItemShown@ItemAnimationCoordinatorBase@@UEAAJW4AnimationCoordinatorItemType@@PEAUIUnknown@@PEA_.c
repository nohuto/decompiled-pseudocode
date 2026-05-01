/*
 * XREFs of ?ItemShown@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1804DCE40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardCompareHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@V?$CSimpleArrayStandardMergeHelper@UPendingMove@VirtualDesktopWindowMoveManager@@@@@@QEAAJ_K0@Z @ 0x1804DD4C4 (-_EnsureCapacity@-$CTSimpleArray@UPendingMove@VirtualDesktopWindowMoveManager@@$0PPPPPPPO@V-$CTP.c)
 */

__int64 __fastcall ItemAnimationCoordinatorBase::ItemShown(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _BYTE *a4)
{
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // [rsp+28h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  *a4 = 1;
  if ( *(_BYTE *)(a1 + 232) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1) )
  {
    v19 = 0LL;
    v7 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    v8 = v7(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v19);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v12 = v19;
      v16 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
      v17 = 0LL;
      v9 = 0;
      v13 = *(_QWORD *)(a1 + 96);
      if ( v13 != *(_QWORD *)(a1 + 112)
        || (v9 = CTSimpleArray<VirtualDesktopWindowMoveManager::PendingMove,4294967294,CTPolicyCoTaskMem<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardCompareHelper<VirtualDesktopWindowMoveManager::PendingMove>,CSimpleArrayStandardMergeHelper<VirtualDesktopWindowMoveManager::PendingMove>>::_EnsureCapacity(
                   a1 + 88,
                   v13 + 1),
            v9 >= 0) )
      {
        v14 = *(_QWORD *)(a1 + 88) + 32 * (*(_QWORD *)(a1 + 96))++;
        if ( v14 )
        {
          *(_DWORD *)v14 = a2;
          *(_QWORD *)(v14 + 8) = 0LL;
          if ( (__int64 *)(v14 + 8) != &v16 )
          {
            *(_QWORD *)(v14 + 8) = v12;
            v16 = 0LL;
          }
          *(_OWORD *)(v14 + 16) = 0LL;
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
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
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)v10);
LABEL_15:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    return (unsigned int)v9;
  }
  return 0LL;
}
