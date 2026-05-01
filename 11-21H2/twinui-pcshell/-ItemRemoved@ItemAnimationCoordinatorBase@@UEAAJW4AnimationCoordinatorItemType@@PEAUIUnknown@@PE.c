/*
 * XREFs of ?ItemRemoved@ItemAnimationCoordinatorBase@@UEAAJW4AnimationCoordinatorItemType@@PEAUIUnknown@@PEA_N@Z @ 0x1804DCBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1803D98E0 (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ItemAnimationCoordinatorBase::ItemRemoved(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        _BYTE *a4)
{
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  void *v11; // r8
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v21; // [rsp+50h] [rbp+20h] BYREF
  __int64 v22; // [rsp+68h] [rbp+38h] BYREF

  *a4 = 1;
  if ( *(_BYTE *)(a1 + 232) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1) )
  {
    v21 = 0LL;
    v7 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    v8 = v7(a3, &GUID_43dbd2a0_5ebc_4792_9a37_421d455c8861, &v21);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
        (const char *)(unsigned int)v8);
LABEL_21:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      return (unsigned int)v9;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, &v22);
    if ( v22 )
    {
      v18 = v21;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 40LL))(v22, &v19);
      v9 = 0;
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 != *(_QWORD *)(a1 + 80)
        || (v9 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                   a1 + 56,
                   v12 + 1,
                   v11),
            v9 >= 0) )
      {
        v13 = (__int64 *)(*(_QWORD *)(a1 + 56) + 16 * (*(_QWORD *)(a1 + 64))++);
        if ( v13 )
        {
          *v13 = 0LL;
          if ( v13 != &v18 )
          {
            *v13 = v18;
            v18 = 0LL;
          }
          v14 = v13 + 1;
          *v14 = 0LL;
          if ( v14 != &v19 )
          {
            *v14 = v19;
            v19 = 0LL;
          }
        }
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
      if ( v9 >= 0 )
      {
        LOBYTE(v15) = 1;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 72LL))(v22, v21, v15);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x26,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
            (const char *)(unsigned int)v16);
        *a4 = 0;
        v9 = 0;
        goto LABEL_20;
      }
      v10 = 36LL;
    }
    else
    {
      v9 = -2147023728;
      v10 = 35LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\itemanimationcoordinatorbase.cpp",
      (const char *)(unsigned int)v9);
LABEL_20:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    goto LABEL_21;
  }
  return 0LL;
}
