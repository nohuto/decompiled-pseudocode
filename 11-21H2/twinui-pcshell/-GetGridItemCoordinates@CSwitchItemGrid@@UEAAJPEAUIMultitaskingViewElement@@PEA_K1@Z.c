/*
 * XREFs of ?GetGridItemCoordinates@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@PEA_K1@Z @ 0x1804BE690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K1@Z @ 0x1804D0CA0 (-FindItem@GridLayout@@QEAAJAEBV-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K1@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemGrid::GetGridItemCoordinates(
        CSwitchItemGrid *this,
        __int64 (__fastcall ***a2)(struct IMultitaskingViewElement *, GUID *, __int64 *),
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 (__fastcall *v8)(struct IMultitaskingViewElement *, GUID *, __int64 *); // rbx
  int v9; // eax
  unsigned int Item; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  v9 = v8((struct IMultitaskingViewElement *)a2, &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932, &v13);
  Item = v9;
  if ( v9 >= 0 )
    Item = GridLayout::FindItem((char *)this + 560, &v13, a3, a4);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  return Item;
}
