/*
 * XREFs of ?UpdateWindowContextVisibility@UwpWindowWrapperBase@@UEAAXW4UpdateWindowContextVisibilityTrigger@@@Z @ 0x18018B8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::UpdateWindowContextVisibility(_QWORD **a1, unsigned int a2)
{
  __int64 (__fastcall *v4)(_QWORD **, _QWORD, _QWORD); // rbx
  unsigned int v5; // eax

  (*(void (__fastcall **)(_QWORD *))(*a1[33] + 232LL))(a1[33]);
  v4 = (__int64 (__fastcall *)(_QWORD **, _QWORD, _QWORD))(*a1)[60];
  v5 = ((__int64 (__fastcall *)(_QWORD **))(*(a1 - 2))[19])(a1 - 2);
  return v4(a1, a2, v5);
}
