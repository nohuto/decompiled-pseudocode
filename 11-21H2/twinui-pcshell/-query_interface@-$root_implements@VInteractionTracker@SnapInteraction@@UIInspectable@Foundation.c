/*
 * XREFs of ?query_interface@?$root_implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F8EEC
 * Callers:
 *     ?QueryInterface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F83E0 (-QueryInterface@-$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windo.c)
 *     ?QueryInterface@?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1805957F0 (-QueryInterface@-$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Win.c)
 * Callees:
 *     ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z @ 0x180054C40 (-make_marshaler@impl@winrt@@YAHPEAUtype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z.c)
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800F96D0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVFallbackFlyoutView@@AEBURect@234@AEBW4TaskbarLocation@Shell@UI@WindowsUdk@4@_JAEBVCorrelationVector@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x1801A2E1C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r11
  signed __int64 v21; // rdx
  bool v22; // zf
  signed __int64 v23; // rax
  signed __int64 v24; // rax
  __int64 v25; // rax
  signed __int64 v26; // rax
  signed __int64 v27; // rax
  __int64 weak_ref; // rax

  v5 = (unsigned __int64)(a1 - 3) & -(__int64)(a1 != 0LL);
  v6 = *a2 - winrt::impl::guid_v<IInspectable>;
  if ( *a2 == winrt::impl::guid_v<IInspectable> )
    v6 = a2[1] + 0x6FE1EF9A5528A564LL;
  if ( v6 )
  {
    v7 = *a2 - winrt::impl::guid_v<IApplicationViewChangeListener>;
    if ( *a2 == winrt::impl::guid_v<IApplicationViewChangeListener> )
      v7 = a2[1] - 0x5C48281337B642A9LL;
    if ( v7 )
    {
      v8 = *a2 - winrt::impl::guid_v<IWindowSnappingEvents>;
      if ( *a2 == winrt::impl::guid_v<IWindowSnappingEvents> )
        v8 = a2[1] - 0x72E24D564197CDAFLL;
      if ( v8 || !v5 )
        v5 = 0LL;
      else
        v5 += 8LL;
    }
  }
  else
  {
    v5 = (v5 + 16) & -(__int64)(v5 != 0);
  }
  *a3 = v5;
  if ( v5 )
  {
    v21 = *((_QWORD *)a1 + 1);
    while ( v21 >= 0 )
    {
      v24 = _InterlockedCompareExchange64(a1 + 1, v21 + 1, v21);
      v22 = v21 == v24;
      v21 = v24;
      if ( v22 )
        return 0LL;
    }
  }
  else
  {
    v9 = *a2 - winrt::impl::guid_v<winrt::impl::IAgileObject>;
    if ( *a2 == winrt::impl::guid_v<winrt::impl::IAgileObject> )
      v9 = a2[1] + 0x6FA470359B110040LL;
    if ( v9 )
    {
      if ( (unsigned __int8)winrt::operator==(a2, &winrt::impl::guid_v<winrt::impl::IMarshal>, a3, a1 - 3) )
      {
        v25 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        return winrt::impl::make_marshaler(v25, a3);
      }
      if ( (unsigned __int8)winrt::operator==(v10, &winrt::impl::guid_v<IInspectable>, v11, v12) )
      {
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 56))(a1);
        v21 = *((_QWORD *)a1 + 1);
        while ( v21 >= 0 )
        {
          v26 = _InterlockedCompareExchange64(a1 + 1, v21 + 1, v21);
          v22 = v21 == v26;
          v21 = v26;
          if ( v22 )
            return 0LL;
        }
      }
      else
      {
        if ( !(unsigned __int8)winrt::operator==(
                                 v13,
                                 &winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>,
                                 v14,
                                 v15) )
        {
          if ( !(unsigned __int8)winrt::operator==(
                                   v16,
                                   &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>,
                                   v17,
                                   v18) )
            return (**(__int64 (__fastcall ***)(volatile signed __int64 *, __int64))a1)(a1, v19);
          weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,FallbackFlyoutView *,winrt::Windows::Foundation::Rect const &,enum winrt::WindowsUdk::UI::Shell::TaskbarLocation const &,__int64,CorrelationVector const &>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref(a1);
          *a3 = weak_ref;
          return weak_ref == 0 ? 0x8007000E : 0;
        }
        *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
        v21 = *((_QWORD *)a1 + 1);
        while ( v21 >= 0 )
        {
          v27 = _InterlockedCompareExchange64(a1 + 1, v21 + 1, v21);
          v22 = v21 == v27;
          v21 = v27;
          if ( v22 )
            return 0LL;
        }
      }
    }
    else
    {
      *a3 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      v21 = *((_QWORD *)a1 + 1);
      while ( v21 >= 0 )
      {
        v23 = _InterlockedCompareExchange64(a1 + 1, v21 + 1, v21);
        v22 = v21 == v23;
        v21 = v23;
        if ( v22 )
          return 0LL;
      }
    }
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v21 + 24), 1u);
  return 0LL;
}
