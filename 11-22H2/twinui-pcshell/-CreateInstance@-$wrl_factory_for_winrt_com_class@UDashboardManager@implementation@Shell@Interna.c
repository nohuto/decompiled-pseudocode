/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x180088000 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     ??$make@V?$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x180088364 (--$make@V-$module_count_wrapper@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::DashboardManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 v6; // rax
  char v7; // r9
  __int16 v8; // r8
  __int16 v9; // dx
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h] BYREF
  int v14; // [rsp+30h] [rbp-28h] BYREF
  __int16 v15; // [rsp+34h] [rbp-24h]
  __int16 v16; // [rsp+36h] [rbp-22h]
  char v17; // [rsp+38h] [rbp-20h]
  char v18; // [rsp+39h] [rbp-1Fh]
  char v19; // [rsp+3Ah] [rbp-1Eh]
  char v20; // [rsp+3Bh] [rbp-1Dh]
  char v21; // [rsp+3Ch] [rbp-1Ch]
  char v22; // [rsp+3Dh] [rbp-1Bh]
  char v23; // [rsp+3Eh] [rbp-1Ah]
  char v24; // [rsp+3Fh] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL,
      v12);
    return 2147746064LL;
  }
  else
  {
    v6 = winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::DashboardManager>,>(&v13);
    v7 = *((_BYTE *)a3 + 8);
    v8 = *((_WORD *)a3 + 3);
    v9 = *((_WORD *)a3 + 2);
    v14 = *a3;
    v15 = v9;
    v16 = v8;
    v17 = v7;
    v18 = *((_BYTE *)a3 + 9);
    v19 = *((_BYTE *)a3 + 10);
    v20 = *((_BYTE *)a3 + 11);
    v21 = *((_BYTE *)a3 + 12);
    v22 = *((_BYTE *)a3 + 13);
    v23 = *((_BYTE *)a3 + 14);
    v24 = *((_BYTE *)a3 + 15);
    v10 = *(_DWORD *)winrt::Windows::Foundation::IUnknown::as(v6, &v12, &v14, a4);
    if ( v13 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
    return v10;
  }
}
