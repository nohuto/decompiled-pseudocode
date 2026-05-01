/*
 * XREFs of _anonymous_namespace_::ObservableObjectArrayEventRegistration::Register @ 0x1804AAED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z @ 0x1804AA584 (--4-$ComPtr@UIObservableObjectArray@@@WRL@Microsoft@@QEAAAEAV012@PEAUIObservableObjectArray@@@Z.c)
 */

__int64 __fastcall anonymous_namespace_::ObservableObjectArrayEventRegistration::Register(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, a1, a1 + 24);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IObservableObjectArray>::operator=((__int64 *)(a1 + 32), a2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ObservableArray.h",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
