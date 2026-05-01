/*
 * XREFs of ?SetChildFocus@CMultitaskingViewElementBase@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x1805755D0
 * Callers:
 *     ?SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x18057A1D0 (-SetChildFocus@CSwitchItemGrid@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 *     ?SetChildFocus@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z @ 0x180592E20 (-SetChildFocus@CVirtualDesktopContainerElement@@UEAAXPEAUIMultitaskingViewElement@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D7A4 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x18056E0A4 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ??$FindEx@VElementCompare@ElementHelpers@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVElementCompare@ElementHelpers@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1805739EC (--$FindEx@VElementCompare@ElementHelpers@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElem.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMultitaskingViewElementBase::SetChildFocus(CMultitaskingViewElementBase *this, struct IUnknown *a2)
{
  __int64 *v4; // r15
  struct IUnknown *v5; // rdi
  struct IUnknown *v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  char v9; // si
  struct IMultitaskingViewElement *v10; // r8
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  struct IUnknown *v13; // [rsp+70h] [rbp+38h] BYREF
  struct IUnknown *v14; // [rsp+78h] [rbp+40h] BYREF
  struct IUnknown *v15; // [rsp+80h] [rbp+48h] BYREF
  __int64 v16; // [rsp+88h] [rbp+50h] BYREF

  v4 = (__int64 *)((char *)this + 168);
  v5 = (struct IUnknown *)*((_QWORD *)this + 21);
  v15 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v6 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    v14 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<ElementHelpers::ElementCompare>(
           (_QWORD *)this + 2,
           v7,
           &v14,
           &v16);
    if ( v8 >= 0 )
    {
      v9 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x214,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v8);
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
    if ( v9 )
    {
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=(
        (__int64 *)&v13,
        (__int64 *)(*((_QWORD *)this + 2) + 8 * v16));
      v6 = v13;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=(v4, (__int64 *)&v13);
  if ( !ElementHelpers::IsSameElement(v5, v6, v10) )
  {
    if ( v5 )
      ((void (__fastcall *)(struct IUnknown *, _QWORD))v5->lpVtbl[12].AddRef)(v5, 0LL);
    if ( v6 )
    {
      LOBYTE(v11) = 1;
      ((void (__fastcall *)(struct IUnknown *, __int64))v6->lpVtbl[12].AddRef)(v6, v11);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
}
