/*
 * XREFs of ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x1800BE3CC
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800BF174 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C1250 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BC760 (--$GetActivationFactory@UIUnifiedTileIdentifierStatics@UnifiedTile@Shell@WindowsInternal@@@wil@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(
        _QWORD *a1,
        const WCHAR **a2,
        unsigned int a3)
{
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, _QWORD *); // rdi
  unsigned int v7; // r8d
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  _QWORD v11[2]; // [rsp+28h] [rbp-50h] BYREF
  HSTRING_HEADER v12; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v11[1] = a1;
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifierStatics>(
    (const WCHAR *)v11,
    (__int64)a2,
    a3);
  *a1 = 0LL;
  v5 = v11[0];
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD *))(*(_QWORD *)v11[0] + 48LL);
  *a1 = 0LL;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, a2, v7);
  v9 = v6(v5, v8[1].Reserved.Reserved1, a1);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      37LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9,
      1);
  if ( v11[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
  return a1;
}
