/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CE420
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make@V?$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800CE4FC (--$make@V-$module_count_wrapper@UImeContextMenuManager@implementation@Shell@Internal@Windows@win.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x1800CECEC (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  __int16 v12; // [rsp+34h] [rbp-24h]
  __int16 v13; // [rsp+36h] [rbp-22h]
  char v14; // [rsp+38h] [rbp-20h]
  char v15; // [rsp+39h] [rbp-1Fh]
  char v16; // [rsp+3Ah] [rbp-1Eh]
  char v17; // [rsp+3Bh] [rbp-1Dh]
  char v18; // [rsp+3Ch] [rbp-1Ch]
  char v19; // [rsp+3Dh] [rbp-1Bh]
  char v20; // [rsp+3Eh] [rbp-1Ah]
  char v21; // [rsp+3Fh] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    v6 = winrt::make<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager>,>(&v10);
    v11 = *a3;
    v12 = *((_WORD *)a3 + 2);
    v13 = *((_WORD *)a3 + 3);
    v14 = *((_BYTE *)a3 + 8);
    v15 = *((_BYTE *)a3 + 9);
    v16 = *((_BYTE *)a3 + 10);
    v17 = *((_BYTE *)a3 + 11);
    v18 = *((_BYTE *)a3 + 12);
    v19 = *((_BYTE *)a3 + 13);
    v20 = *((_BYTE *)a3 + 14);
    v21 = *((_BYTE *)a3 + 15);
    v7 = *(_DWORD *)winrt::com_ptr<IObjectWithSite>::as(v6, v9, &v11, a4);
    if ( v10 )
      winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v10);
    return v7;
  }
}
