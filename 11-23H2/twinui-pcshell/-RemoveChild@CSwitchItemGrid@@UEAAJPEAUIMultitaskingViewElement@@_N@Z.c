/*
 * XREFs of ?RemoveChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x180579DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z @ 0x1802E3D60 (-RemoveChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@_N@Z.c)
 *     ?RemoveItem@GridLayout@@QEAAJAEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Z @ 0x180588D3C (-RemoveItem@GridLayout@@QEAAJAEBV-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemGrid::RemoveChild(
        CSwitchItemGrid *this,
        __int64 (__fastcall ***a2)(struct IMultitaskingViewElement *, GUID *, __int64 *),
        char a3)
{
  __int64 (__fastcall *v6)(struct IMultitaskingViewElement *, GUID *, __int64 *); // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v14 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  v7 = v6((struct IMultitaskingViewElement *)a2, &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932, &v14);
  v8 = retaddr;
  if ( v7 < 0 )
  {
    v9 = 259LL;
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)v9,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 40LL))(v14, 0LL);
  if ( *((_QWORD *)this + 103) )
  {
    v7 = GridLayout::RemoveItem((char *)this + 768, &v14);
    v8 = retaddr;
    if ( v7 < 0 )
    {
      v9 = 266LL;
      goto LABEL_6;
    }
  }
LABEL_7:
  v10 = CMultitaskingViewElementBase::RemoveChild(
          (struct IMultitaskingViewElement **)this,
          (struct IMultitaskingViewElement *)a2,
          a3);
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v10);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  return v11;
}
