/*
 * XREFs of ?_AddElementForObject@CSwitchItemGrid@@AEAAJPEAUIUnknown@@@Z @ 0x1804BFC8C
 * Callers:
 *     ?ItemAdded@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804BE9D0 (-ItemAdded@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z.c)
 *     ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804BF970 (-SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemGrid::_AddElementForObject(CSwitchItemGrid *this, struct IUnknown *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, struct IUnknown *, _QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = *((_QWORD *)this + 108);
  v5 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v4 + 32LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  v6 = v5(v4, a2, *((_QWORD *)this + 107), &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v11);
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(CSwitchItemGrid *, __int64))(*(_QWORD *)this + 64LL))(this, v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33E,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_4;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33C,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\grid.cpp",
      (const char *)(unsigned int)v6);
  }
  v7 = 0;
LABEL_4:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return v7;
}
