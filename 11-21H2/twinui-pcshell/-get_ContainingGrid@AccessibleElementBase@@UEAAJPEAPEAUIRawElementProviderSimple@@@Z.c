/*
 * XREFs of ?get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804CDF50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804AF590 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x1804CDA40 (-_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::get_ContainingGrid(
        AccessibleElementBase *this,
        struct IRawElementProviderSimple **a2)
{
  AccessibleElementBase *v3; // rbx
  int ParentGrid; // ebx
  int v5; // eax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISwitchItemGrid *v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = (AccessibleElementBase *)((char *)this - 80);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  ParentGrid = AccessibleElementBase::_GetParentGrid(v3, &v9);
  if ( ParentGrid >= 0 )
  {
    v10 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v9,
           &v10);
    ParentGrid = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderSimple **))(*(_QWORD *)v10 + 376LL))(
             v10,
             &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
             a2);
      ParentGrid = v5;
      if ( v5 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
        goto LABEL_8;
      }
      v6 = 669LL;
    }
    else
    {
      v6 = 668LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return (unsigned int)ParentGrid;
}
