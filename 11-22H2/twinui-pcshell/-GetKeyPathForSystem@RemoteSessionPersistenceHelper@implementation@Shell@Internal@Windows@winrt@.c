/*
 * XREFs of ?GetKeyPathForSystem@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBUhstring@6@AEB_N@Z @ 0x1800A8C5C
 * Callers:
 *     ?TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@AEB_N@Z @ 0x1800A8B3C (-TryOpenTrackedIdsKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt.c)
 *     ?SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEB_KAEBUhstring@6@AEB_N@Z @ 0x180727E24 (-SaveIdToStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ?TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUhstring@6@I@Z @ 0x18072840C (-TryOpenProcessIdKey@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 * Callees:
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x180090534 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x18051DA28 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_18051DA28.c)
 */

_OWORD *__fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetKeyPathForSystem(
        __int64 a1,
        _OWORD *a2,
        winrt::hstring *a3,
        _BYTE *a4)
{
  __int64 v6; // rdx
  const unsigned __int16 *v7; // rbx
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-29h] BYREF
  __m128i v13; // [rsp+30h] [rbp-19h]
  __int128 v14; // [rsp+40h] [rbp-9h] BYREF
  __m128i si128; // [rsp+50h] [rbp+7h]
  _BYTE v16[32]; // [rsp+60h] [rbp+17h] BYREF

  std::wstring::wstring(&v12, a1 + 200 + (*a4 != 0 ? 0x20 : 0));
  if ( *(_QWORD *)a3 )
  {
    v7 = winrt::hstring::c_str(a3);
    v8 = (void *)std::operator+<unsigned short>(v16);
    std::operator+<unsigned short>(&v14, v8, (__int64)v7);
    std::wstring::_Tidy_deallocate(v16, v9);
    *a2 = v14;
    a2[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v14) = 0;
    std::wstring::_Tidy_deallocate(&v14, v10);
  }
  else
  {
    *a2 = v12;
    a2[1] = v13;
    v13 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v12) = 0;
  }
  std::wstring::_Tidy_deallocate(&v12, v6);
  return a2;
}
