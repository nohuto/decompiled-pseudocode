/*
 * XREFs of ??0SharedDesktopBackgroundVisualHost@@QEAA@PEAUHWND__@@@Z @ 0x1806E66F0
 * Callers:
 *     ??$make_self@USharedDesktopBackgroundVisualHost@@$$V@winrt@@YA?AU?$com_ptr@USharedDesktopBackgroundVisualHost@@@0@XZ @ 0x1806E0C50 (--$make_self@USharedDesktopBackgroundVisualHost@@$$V@winrt@@YA-AU-$com_ptr@USharedDesktopBackgro.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800A6C70 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18048D96C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=17
SharedDesktopBackgroundVisualHost *__fastcall SharedDesktopBackgroundVisualHost::SharedDesktopBackgroundVisualHost(
        SharedDesktopBackgroundVisualHost *this,
        HWND a2)
{
  bool v3; // bl
  wil::details **v4; // r14
  wil::details *Event; // rbp
  const char *v6; // r9
  bool v7; // zf
  DWORD pdwType; // [rsp+40h] [rbp-38h] BYREF
  DWORD pcbData[2]; // [rsp+48h] [rbp-30h] BYREF
  unsigned int pvData[4]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *(_QWORD *)pcbData = this;
  *((_QWORD *)this + 2) = &winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual>::`vftable';
  *((_QWORD *)this + 3) = &winrt::impl::produce<SharedDesktopBackgroundVisualHost,winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider>::`vftable';
  v3 = 1;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &SharedDesktopBackgroundVisualHost::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_BYTE *)this + 200) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_WORD *)this + 104) = 0;
  *((_BYTE *)this + 210) = 0;
  *((_DWORD *)this + 53) = 0;
  v4 = (wil::details **)((char *)this + 216);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = -1082130432;
  *((_DWORD *)this + 73) = -1082130432;
  *((_WORD *)this + 148) = 256;
  *((_OWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_OWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_BYTE *)this + 296) = 0;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( !Event )
    wil::details::in1diag3::Throw_GetLastError(
      retaddr,
      (void *)0x1817,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      v6);
  GetLastError();
  _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
    v4,
    Event);
  pdwType = 0;
  pcbData[0] = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer",
          L"NoVisualContent",
          0x10000012u,
          &pdwType,
          pvData,
          pcbData) )
  {
    if ( pdwType == 4 )
    {
      if ( pvData[0] <= 1 )
      {
        v7 = pvData[0] == 1;
LABEL_10:
        v3 = !v7;
      }
    }
    else if ( pcbData[0] == 4 && (LOWORD(pvData[0]) == 48 || LOWORD(pvData[0]) == 49) )
    {
      v7 = LOWORD(pvData[0]) == 49;
      goto LABEL_10;
    }
  }
  *((_BYTE *)this + 297) = v3;
  return this;
}
