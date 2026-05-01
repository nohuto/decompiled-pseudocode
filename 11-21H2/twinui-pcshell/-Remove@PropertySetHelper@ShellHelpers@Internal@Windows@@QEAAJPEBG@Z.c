/*
 * XREFs of ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x1800287E0
 * Callers:
 *     _lambda_63662cd9376551e4950848a042514280_::operator() @ 0x18002783C (_lambda_63662cd9376551e4950848a042514280_--operator().c)
 * Callees:
 *     ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z @ 0x18002889C (-GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU-$IMap@PEAUHSTRING__.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        const unsigned __int16 *a2)
{
  __int64 v3; // rdi
  int PropSetMap; // ebx
  int v5; // eax
  int v7[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v7 = L"ApplicationMultiviewActivationPolicy";
  v3 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7) + 24);
  *(_QWORD *)v7 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
  PropSetMap = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropSetMap(this, v7);
  if ( PropSetMap >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v7 + 88LL))(*(_QWORD *)v7, v3);
    PropSetMap = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v5,
        v7[0]);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
  if ( PropSetMap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)PropSetMap,
      v7[0]);
  return (unsigned int)PropSetMap;
}
