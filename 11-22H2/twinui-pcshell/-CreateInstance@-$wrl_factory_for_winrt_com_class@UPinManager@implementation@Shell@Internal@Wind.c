/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UPinManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180087C90
 * Callers:
 *     <none>
 * Callees:
 *     ?as@IUnknown@Foundation@Windows@winrt@@QEBA?AUhresult@4@AEBUguid@4@PEAPEAX@Z @ 0x180088000 (-as@IUnknown@Foundation@Windows@winrt@@QEBA-AUhresult@4@AEBUguid@4@PEAPEAX@Z.c)
 *     ??$make@V?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1800882F8 (--$make@V-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@detail.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PinManager>::CreateInstance(
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
  int v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h] BYREF
  __int16 v14; // [rsp+2Ch] [rbp-1Ch]
  __int16 v15; // [rsp+2Eh] [rbp-1Ah]
  char v16; // [rsp+30h] [rbp-18h]
  char v17; // [rsp+31h] [rbp-17h]
  char v18; // [rsp+32h] [rbp-16h]
  char v19; // [rsp+33h] [rbp-15h]
  char v20; // [rsp+34h] [rbp-14h]
  char v21; // [rsp+35h] [rbp-13h]
  char v22; // [rsp+36h] [rbp-12h]
  char v23; // [rsp+37h] [rbp-11h]
  _QWORD v24[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"OneCore\\Internal\\Sdk\\Inc\\wil\\opensource\\wil\\cppwinrt_wrl.h",
      (const char *)0x80040110LL,
      v12);
    return 2147746064LL;
  }
  else
  {
    v6 = winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::PinManager>,>(v24);
    v7 = *((_BYTE *)a3 + 8);
    v8 = *((_WORD *)a3 + 3);
    v9 = *((_WORD *)a3 + 2);
    v13 = *a3;
    v14 = v9;
    v15 = v8;
    v16 = v7;
    v17 = *((_BYTE *)a3 + 9);
    v18 = *((_BYTE *)a3 + 10);
    v19 = *((_BYTE *)a3 + 11);
    v20 = *((_BYTE *)a3 + 12);
    v21 = *((_BYTE *)a3 + 13);
    v22 = *((_BYTE *)a3 + 14);
    v23 = *((_BYTE *)a3 + 15);
    v10 = *(_DWORD *)winrt::Windows::Foundation::IUnknown::as(v6, &v12, &v13, a4);
    if ( v24[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v24);
    return v10;
  }
}
