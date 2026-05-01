/*
 * XREFs of ?CreateInstance@?$wrl_factory_for_winrt_com_class@VCopilotHotkeyManager@@@wil@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1806FD8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?as@?$com_ptr@UIObjectWithSite@@@winrt@@QEBA?AUhresult@2@AEBUguid@2@PEAPEAX@Z @ 0x18008BF30 (-as@-$com_ptr@UIObjectWithSite@@@winrt@@QEBA-AUhresult@2@AEBUguid@2@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$make@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1806FD2CC (--$make@V-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@$$V@winrt@@YA-A_PXZ.c)
 */

__int64 __fastcall wil::wrl_factory_for_winrt_com_class<CopilotHotkeyManager>::CreateInstance(
        __int64 a1,
        __int64 a2,
        int *a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 *v7; // rax
  char v8; // r9
  __int16 v9; // r8
  __int16 v10; // dx
  unsigned int v11; // ebx
  const char *v12; // r9
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h] BYREF
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int16 v16; // [rsp+34h] [rbp-24h]
  __int16 v17; // [rsp+36h] [rbp-22h]
  char v18; // [rsp+38h] [rbp-20h]
  char v19; // [rsp+39h] [rbp-1Fh]
  char v20; // [rsp+3Ah] [rbp-1Eh]
  char v21; // [rsp+3Bh] [rbp-1Dh]
  char v22; // [rsp+3Ch] [rbp-1Ch]
  char v23; // [rsp+3Dh] [rbp-1Bh]
  char v24; // [rsp+3Eh] [rbp-1Ah]
  char v25; // [rsp+3Fh] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
      (const char *)0x80040110LL);
    return 2147746064LL;
  }
  else
  {
    try
    {
      v7 = winrt::make<wil::details::module_count_wrapper<CopilotHotkeyManager>,>(&v14);
      v8 = *((_BYTE *)a3 + 8);
      v9 = *((_WORD *)a3 + 3);
      v10 = *((_WORD *)a3 + 2);
      v15 = *a3;
      v16 = v10;
      v17 = v9;
      v18 = v8;
      v19 = *((_BYTE *)a3 + 9);
      v20 = *((_BYTE *)a3 + 10);
      v21 = *((_BYTE *)a3 + 11);
      v22 = *((_BYTE *)a3 + 12);
      v23 = *((_BYTE *)a3 + 13);
      v24 = *((_BYTE *)a3 + 14);
      v25 = *((_BYTE *)a3 + 15);
      v11 = *winrt::com_ptr<IObjectWithSite>::as(v7, &v13, (__int64)&v15, (__int64)a4);
      if ( v14 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v14);
      result = v11;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x44,
                             (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/cppwinrt_wrl.h",
                             v12);
    }
  }
  return result;
}
