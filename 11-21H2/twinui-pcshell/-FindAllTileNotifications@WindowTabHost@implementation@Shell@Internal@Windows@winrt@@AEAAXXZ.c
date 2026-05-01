/*
 * XREFs of ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800F6E70
 * Callers:
 *     ?TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore@Tiles@456@AEBUITileStoreChangedEventArgs@8456@@Z @ 0x1800297F0 (-TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore.c)
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801675B0 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800A8220 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNotification@Tiles@456@@Z @ 0x1802389B4 (-EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNoti.c)
 *     ?Tile@?$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUITile@Tiles@Internal@Windows@3@XZ @ 0x180238A60 (-Tile@-$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windo.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?ApplicationUserModelId@?$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x180577F8C (-ApplicationUserModelId@-$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@win.c)
 *     ?WindowTabHostNewPinnedSite@WindowTabHostTelemetry@@SAXXZ @ 0x180578C94 (-WindowTabHostNewPinnedSite@WindowTabHostTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  int v2; // eax
  __int64 v3; // r15
  unsigned int v4; // esi
  int v5; // r12d
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r14d
  int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // di
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+30h] [rbp-28h] BYREF
  __int64 v24; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+50h] BYREF
  volatile signed __int32 *v28; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+60h] BYREF

  v27 = 0LL;
  v26 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 54) + 48LL))(
         *((_QWORD *)this + 54),
         *((_QWORD *)this + 56),
         0LL,
         &v26);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  v3 = v26;
  v25[0] = v26;
  v4 = 1;
  v5 = 0;
  v6 = 0;
  LODWORD(v26) = 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v25[0] + 56LL))(v25[0], &v26);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  v9 = v26;
  while ( v6 != v9 )
  {
    v27 = 0LL;
    v10 = v4 | 4;
    LODWORD(v26) = v10;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, v6, &v27);
    if ( v11 < 0 )
      winrt::throw_hresult((unsigned int)v11);
    v4 = v10 & 0xFFFFFFF9 | 2;
    LODWORD(v26) = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 64LL))(v27, &v26);
    if ( v12 < 0 )
      winrt::throw_hresult((unsigned int)v12);
    if ( (_DWORD)v26 == 1 )
    {
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::EnsureTileRemoved(
        this,
        (const struct winrt::Windows::Internal::Tiles::ITileNotification *)&v27);
    }
    else if ( !(_DWORD)v26 )
    {
      v29 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 80LL))(v27, &v29);
      if ( v13 < 0 )
        winrt::throw_hresult((unsigned int)v13);
      v24 = v29;
      v4 |= 8u;
      LODWORD(v26) = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 56LL))(v29, &v26);
      if ( v14 < 0 )
        winrt::throw_hresult((unsigned int)v14);
      v15 = (_DWORD)v26 == 1;
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
      if ( v15 )
      {
        v19 = winrt::impl::consume_Windows_Internal_Tiles_ITileNotification<winrt::Windows::Internal::Tiles::ITileNotification>::Tile(
                &v27,
                &v23);
        winrt::impl::consume_Windows_Internal_Tiles_ITile<winrt::Windows::Internal::Tiles::ITile>::ApplicationUserModelId(
          v19,
          &v28);
        if ( v23 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
        if ( (unsigned __int8)winrt::operator==(&v28, L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App")
          || (unsigned __int8)winrt::operator==(&v28, L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App")
          || (unsigned __int8)winrt::operator==(&v28, L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App")
          || (unsigned __int8)winrt::operator==(&v28, L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe!App")
          || (unsigned __int8)winrt::operator==(&v28, L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe!App") )
        {
          ++v5;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v28, v20, v21, v22);
      }
    }
    if ( v27 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
    ++v6;
  }
  if ( *((_BYTE *)this + 832) )
  {
    v16 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                      v8,
                      _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
    if ( *v16 > 5u && tlgKeywordOn((__int64)v16, 0x400000000000LL) )
    {
      v27 = 0x1000000LL;
      LODWORD(v26) = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v17,
        byte_1806C834F,
        0LL,
        v18,
        (__int64)&v26,
        (__int64)&v27);
    }
    *((_BYTE *)this + 832) = 0;
  }
  else if ( v5 )
  {
    WindowTabHostTelemetry::WindowTabHostNewPinnedSite();
  }
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v25);
}
