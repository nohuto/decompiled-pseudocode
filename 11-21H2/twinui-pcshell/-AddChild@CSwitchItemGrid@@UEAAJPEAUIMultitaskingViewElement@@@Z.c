/*
 * XREFs of ?AddChild@CSwitchItemGrid@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x1804BE1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z @ 0x180235400 (-AddChild@CMultitaskingViewElementBase@@UEAAJPEAUIMultitaskingViewElement@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemGrid::AddChild(
        CSwitchItemGrid *this,
        __int64 (__fastcall ***a2)(struct IMultitaskingViewElement *, GUID *, __int64 *))
{
  __int64 (__fastcall *v4)(struct IMultitaskingViewElement *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  v4 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  v5 = v4((struct IMultitaskingViewElement *)a2, &GUID_dda13508_825c_43f9_bcd8_7d0dc0e5d932, &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 244LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_6;
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 48LL))(v10, (char *)this + 848);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 40LL))(v10, *((_QWORD *)this + 109));
  v5 = CMultitaskingViewElementBase::AddChild(this, (struct IMultitaskingViewElement *)a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 251LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v6;
}
