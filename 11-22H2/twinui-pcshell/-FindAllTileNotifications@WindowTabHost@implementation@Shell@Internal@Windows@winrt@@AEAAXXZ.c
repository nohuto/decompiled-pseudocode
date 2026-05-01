/*
 * XREFs of ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800D5890
 * Callers:
 *     ?TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore@Tiles@456@AEBUITileStoreChangedEventArgs@8456@@Z @ 0x18003D290 (-TileStoreChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUITileStore.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::InitializeDataAsync$_ResumeCoro$1 @ 0x18021A7B0 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--InitializeDataAsync$_ResumeCoro$.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800B5424 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ApplicationUserModelId@?$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802E7B3A (-ApplicationUserModelId@-$consume_Windows_Internal_Tiles_ITile@UITile@Tiles@Internal@Windows@win.c)
 *     ?EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNotification@Tiles@456@@Z @ 0x1802E7B8C (-EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNoti.c)
 *     ?Tile@?$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1802E7DEC (-Tile@-$consume_Windows_Internal_Tiles_ITileNotification@UITileNotification@Tiles@Internal@Windo.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?WindowTabHostNewPinnedSite@WindowTabHostTelemetry@@SAXXZ @ 0x180637F58 (-WindowTabHostNewPinnedSite@WindowTabHostTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::FindAllTileNotifications(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  int v2; // eax
  __int64 v3; // r12
  unsigned int v4; // r14d
  int v5; // edi
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r15d
  int v10; // r14d
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdi
  int v15; // eax
  bool v16; // si
  _DWORD *v17; // rcx
  int v18; // ecx
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // [rsp+30h] [rbp-28h] BYREF
  __int64 v27; // [rsp+38h] [rbp-20h] BYREF
  __int64 v28; // [rsp+40h] [rbp-18h] BYREF
  __int64 v29; // [rsp+48h] [rbp-10h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+58h] BYREF
  volatile signed __int32 *v33; // [rsp+B8h] [rbp+60h] BYREF

  v31 = 0LL;
  v30 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 54) + 48LL))(
         *((_QWORD *)this + 54),
         *((_QWORD *)this + 56),
         0LL,
         &v30);
  if ( v2 < 0 )
    winrt::throw_hresult((unsigned int)v2);
  v3 = v30;
  v29 = v30;
  v4 = 1;
  v5 = 0;
  LODWORD(v30) = 0;
  v6 = 0;
  LODWORD(v31) = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v29 + 56LL))(v29, &v31);
  if ( v7 < 0 )
    winrt::throw_hresult((unsigned int)v7);
  v9 = v31;
  while ( v6 != v9 )
  {
    v32 = 0LL;
    v10 = v4 | 4;
    LODWORD(v31) = v10;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, v6, &v32);
    if ( v11 < 0 )
      winrt::throw_hresult((unsigned int)v11);
    v4 = v10 & 0xFFFFFFF9 | 2;
    LODWORD(v31) = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 64LL))(v32, &v31);
    if ( v12 < 0 )
      winrt::throw_hresult((unsigned int)v12);
    if ( (_DWORD)v31 == 1 )
    {
      winrt::Windows::Internal::Shell::implementation::WindowTabHost::EnsureTileRemoved(
        this,
        (const struct winrt::Windows::Internal::Tiles::ITileNotification *)&v32);
    }
    else if ( !(_DWORD)v31 )
    {
      v26 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 80LL))(v32, &v26);
      if ( v13 < 0 )
        winrt::throw_hresult((unsigned int)v13);
      v14 = v26;
      v28 = v26;
      v4 |= 8u;
      LODWORD(v31) = 0;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 56LL))(v26, &v31);
      if ( v15 < 0 )
        winrt::throw_hresult((unsigned int)v15);
      v16 = (_DWORD)v31 == 1;
      if ( v14 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v28);
      if ( v16 )
      {
        v20 = winrt::impl::consume_Windows_Internal_Tiles_ITileNotification<winrt::Windows::Internal::Tiles::ITileNotification>::Tile(
                &v32,
                &v27);
        winrt::impl::consume_Windows_Internal_Tiles_ITile<winrt::Windows::Internal::Tiles::ITile>::ApplicationUserModelId(
          v20,
          &v33);
        if ( v27 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v27);
        if ( winrt::operator==((__int64)&v33, (__int64)L"Microsoft.MicrosoftEdge.Stable_8wekyb3d8bbwe!App", v21)
          || winrt::operator==((__int64)&v33, (__int64)L"Microsoft.MicrosoftEdge.Beta_8wekyb3d8bbwe!App", v22)
          || winrt::operator==((__int64)&v33, (__int64)L"Microsoft.MicrosoftEdge.Dev_8wekyb3d8bbwe!App", v23)
          || winrt::operator==((__int64)&v33, (__int64)L"Microsoft.MicrosoftEdge.Canary_8wekyb3d8bbwe!App", v24)
          || winrt::operator==((__int64)&v33, (__int64)L"Microsoft.MicrosoftEdge.Internal_8wekyb3d8bbwe!App", v25) )
        {
          v5 = v30 + 1;
          LODWORD(v30) = v30 + 1;
        }
        else
        {
          v5 = v30;
        }
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v33);
      }
      else
      {
        v5 = v30;
      }
    }
    if ( v32 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v32);
    ++v6;
  }
  if ( *((_BYTE *)this + 872) )
  {
    v17 = *(_DWORD **)(wil::details::static_lazy<WindowManagementLogging>::get(
                         v8,
                         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v17 > 5u && tlgKeywordOn((__int64)v17, 0x400000000000LL) )
    {
      v31 = 0x1000000LL;
      LODWORD(v30) = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v18,
        (unsigned int)&unk_180870860,
        0,
        v19,
        (__int64)&v30,
        (__int64)&v31);
    }
    *((_BYTE *)this + 872) = 0;
  }
  else if ( v5 )
  {
    WindowTabHostTelemetry::WindowTabHostNewPinnedSite();
  }
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
}
