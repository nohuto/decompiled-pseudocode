/*
 * XREFs of ?StopWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x18008678C
 * Callers:
 *     ??1CUIHierarchy@@AEAA@XZ @ 0x18004991C (--1CUIHierarchy@@AEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall CUIHierarchy::StopWindowWatcher(CUIHierarchy *this)
{
  __int64 *v1; // rdi
  signed int v3; // eax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 72);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 72LL))(
    *((_QWORD *)this + 9),
    *((_QWORD *)this + 7));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v1 + 88LL))(*v1, *((_QWORD *)this + 5));
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v1 + 104LL))(*v1, *((_QWORD *)this + 6));
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 176LL))(*v1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  if ( v1 != (__int64 *)&v4 )
  {
    if ( *v1 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v1);
    *v1 = 0LL;
  }
}
