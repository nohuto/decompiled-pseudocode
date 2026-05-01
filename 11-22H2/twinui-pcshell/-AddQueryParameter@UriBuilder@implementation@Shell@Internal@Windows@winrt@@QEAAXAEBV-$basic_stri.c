/*
 * XREFs of ?AddQueryParameter@UriBuilder@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18072C3D0
 * Callers:
 *     ?GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA?AUUri@Foundation@56@AEBURemoteDesktopProviderInfo@3456@W4Mode@CloudPCHelpers@@@Z @ 0x180712008 (-GetLaunchUri@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA-AU.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x18051DA28 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_18051DA28.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@0@Z @ 0x18072C23C (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_18072C23C.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::UriBuilder::AddQueryParameter(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  char *v6; // rdi
  char *v7; // rdi
  char *v8; // rdi
  char *v9; // rdi
  char *v10; // rdi
  char v12[32]; // [rsp+20h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 32) )
  {
    v6 = std::operator+<unsigned short>(v12, (_QWORD *)a1, L"&");
    if ( (char *)a1 != v6 )
    {
      std::wstring::_Tidy_deallocate(a1);
      *(_OWORD *)a1 = *(_OWORD *)v6;
      *(_OWORD *)(a1 + 16) = *((_OWORD *)v6 + 1);
      *((_QWORD *)v6 + 2) = 0LL;
      *((_QWORD *)v6 + 3) = 7LL;
      *(_WORD *)v6 = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)v12);
  }
  else
  {
    v7 = std::operator+<unsigned short>(v12, (_QWORD *)a1, L"?");
    if ( (char *)a1 != v7 )
    {
      std::wstring::_Tidy_deallocate(a1);
      *(_OWORD *)a1 = *(_OWORD *)v7;
      *(_OWORD *)(a1 + 16) = *((_OWORD *)v7 + 1);
      *((_QWORD *)v7 + 2) = 0LL;
      *((_QWORD *)v7 + 3) = 7LL;
      *(_WORD *)v7 = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)v12);
    *(_BYTE *)(a1 + 32) = 1;
  }
  v8 = std::operator+<unsigned short>(v12, (_QWORD *)a1, a2);
  if ( (char *)a1 != v8 )
  {
    std::wstring::_Tidy_deallocate(a1);
    *(_OWORD *)a1 = *(_OWORD *)v8;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)v8 + 1);
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 3) = 7LL;
    *(_WORD *)v8 = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)v12);
  v9 = std::operator+<unsigned short>(v12, (_QWORD *)a1, L"=");
  if ( (char *)a1 != v9 )
  {
    std::wstring::_Tidy_deallocate(a1);
    *(_OWORD *)a1 = *(_OWORD *)v9;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)v9 + 1);
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 3) = 7LL;
    *(_WORD *)v9 = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)v12);
  v10 = std::operator+<unsigned short>(v12, (_QWORD *)a1, a3);
  if ( (char *)a1 != v10 )
  {
    std::wstring::_Tidy_deallocate(a1);
    *(_OWORD *)a1 = *(_OWORD *)v10;
    *(_OWORD *)(a1 + 16) = *((_OWORD *)v10 + 1);
    *((_QWORD *)v10 + 2) = 0LL;
    *((_QWORD *)v10 + 3) = 7LL;
    *(_WORD *)v10 = 0;
  }
  return std::wstring::_Tidy_deallocate((__int64)v12);
}
