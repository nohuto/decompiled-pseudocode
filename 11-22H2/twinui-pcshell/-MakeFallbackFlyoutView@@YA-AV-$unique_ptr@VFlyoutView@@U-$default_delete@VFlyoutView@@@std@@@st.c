/*
 * XREFs of ?MakeFallbackFlyoutView@@YA?AV?$unique_ptr@VFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@PEAUIUnknown@@@Z @ 0x1806C44C0
 * Callers:
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1806B1570 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$com_agile_query@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x1801D0314 (--$com_agile_query@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_t@UIAgileReference@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall MakeFallbackFlyoutView(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+50h] [rbp+18h]

  v6 = a1;
  v4 = operator new(0x20uLL);
  v7 = v4;
  v6 = (_QWORD *)a2;
  *v4 = &FallbackFlyoutView::`vftable';
  wil::com_agile_query<IUnknown * &>(v4 + 1, (__int64 *)&v6);
  v4[2] = 0LL;
  v4[3] = 0LL;
  *a1 = v4;
  return a1;
}
