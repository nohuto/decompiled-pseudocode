/*
 * XREFs of ?UpdateWindowContextVisibility@UwpWindowWrapperBase@@UEAAXXZ @ 0x1804188A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::UpdateWindowContextVisibility(UwpWindowWrapperBase *this)
{
  void (__fastcall *v2)(UwpWindowWrapperBase *, _QWORD); // rbx
  unsigned int v3; // eax

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 232LL))(*((_QWORD *)this + 32));
  v2 = *(void (__fastcall **)(UwpWindowWrapperBase *, _QWORD))(*(_QWORD *)this + 480LL);
  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 152LL))((char *)this - 16);
  v2(this, v3);
}
