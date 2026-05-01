/*
 * XREFs of ?SetController@CSwitchItemElement@@UEAAXPEAUISwitchItemController@@@Z @ 0x180573230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchItemController@@@Z @ 0x1805729BC (--4-$ComPtr@UISwitchItemController@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchItemController@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CSwitchItemElement::SetController(CSwitchItemElement *this, struct ISwitchItemController *a2)
{
  _QWORD *v3; // rsi
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)((char *)this + 376);
  Microsoft::WRL::ComPtr<ISwitchItemController>::operator=((__int64 *)this + 47, (__int64)a2);
  v6 = 0LL;
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 49);
  v5 = **v4;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  v5(v4, &GUID_31dacf25_23c9_4be9_a81c_2ac933c44c63, &v6);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, *v3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
}
