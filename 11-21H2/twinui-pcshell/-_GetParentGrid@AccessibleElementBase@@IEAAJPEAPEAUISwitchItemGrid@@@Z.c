/*
 * XREFs of ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x1804CDA40
 * Callers:
 *     ?_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z @ 0x1804CD930 (-_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z.c)
 *     ?get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z @ 0x1804CDF50 (-get_ContainingGrid@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderSimple@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804CD8F0 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall AccessibleElementBase::_GetParentGrid(AccessibleElementBase *this, struct ISwitchItemGrid **a2)
{
  int Element; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall ****v6)(_QWORD, GUID *, struct ISwitchItemGrid **); // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, struct ISwitchItemGrid **); // rdi
  __int64 (__fastcall *v8)(_QWORD, GUID *, struct ISwitchItemGrid **); // rbx
  struct ISwitchItemGrid *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct ISwitchItemGrid *v12; // [rsp+48h] [rbp+28h] BYREF
  void *v13; // [rsp+50h] [rbp+30h] BYREF
  __int64 v14; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  Element = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v13);
  if ( Element >= 0 )
  {
    v5 = *(_QWORD *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    if ( v5 )
    {
      v12 = 0LL;
      v6 = (__int64 (__fastcall ****)(_QWORD, GUID *, struct ISwitchItemGrid **))(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v13 + 24LL))(
                                                                                   v13,
                                                                                   &v14);
      v7 = *v6;
      v8 = ***v6;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
      Element = v8(v7, &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2, &v12);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
      if ( Element >= 0 )
      {
        v9 = v12;
        v12 = 0LL;
        *a2 = v9;
        Element = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2EE,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)Element);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
    }
    else
    {
      Element = -2147220991;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EA,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)0x80040201LL);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return (unsigned int)Element;
}
