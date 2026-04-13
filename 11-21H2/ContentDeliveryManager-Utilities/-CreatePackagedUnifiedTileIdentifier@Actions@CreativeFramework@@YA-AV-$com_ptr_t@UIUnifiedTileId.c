/*
 * XREFs of ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x1800BE008
 * Callers:
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x1800C0988 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800C1250 (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002245D (memset_0.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800BC580 (--$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800C26A0 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(
        _QWORD *a1,
        const WCHAR *a2,
        const WCHAR *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r8d
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING, _QWORD *); // rdi
  unsigned __int64 v12; // rcx
  HRESULT v13; // eax
  int v14; // eax
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+24h] [rbp-DCh]
  _QWORD v18[2]; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v18[1] = a1;
  v17 = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a2, a3, &applicationUserModelIdLength, applicationUserModelId);
  v9 = retaddr;
  if ( v6 )
LABEL_13:
    wil::details::in1diag3::_Throw_Win32(
      v9,
      (void *)0x47,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)v6,
      applicationUserModelIdLength);
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>(
    (const WCHAR *)v18,
    v7,
    v8);
  *a1 = 0LL;
  v17 = 1;
  v10 = v18[0];
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v18[0] + 48LL);
  *a1 = 0LL;
  v12 = -1LL;
  do
    ++v12;
  while ( applicationUserModelId[v12] );
  if ( v12 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_13;
  }
  if ( (int)v12 + 1 < (unsigned int)v12 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v13 = WindowsCreateStringReference(applicationUserModelId, v12, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    JUMPOUT(0x1800BE1AALL);
  }
  v14 = v11(v10, string, a1);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      75LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v14,
      applicationUserModelIdLength);
  if ( v18[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  return a1;
}
