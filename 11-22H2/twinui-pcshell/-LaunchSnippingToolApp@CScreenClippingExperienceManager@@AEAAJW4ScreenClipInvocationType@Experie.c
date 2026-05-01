/*
 * XREFs of ?LaunchSnippingToolApp@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18045645C
 * Callers:
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180456350 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180090D28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800B980C (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x180392130 (-_Xlen_string@std@@YAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@U_String_constructor_concat_tag@1@AEBV01@QEBG_K23@Z @ 0x1804559C0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@U_String_const_ea_1804559C0.c)
 *     ?ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180456BD8 (-ScreenClipInvocationTypeToString@CScreenClippingExperienceManager@@AEAA-AV-$basic_string@GU-$ch.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CScreenClippingExperienceManager::LaunchSnippingToolApp(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  void **v6; // rax
  __int64 v7; // rdx
  int LastError; // ebx
  const WCHAR *v9; // r8
  const char *v10; // r9
  __int64 v11; // rdx
  DWORD pcchOut; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v14; // [rsp+44h] [rbp-BCh] BYREF
  LPCWSTR lpFile[4]; // [rsp+48h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]
  unsigned __int64 v18; // [rsp+80h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+88h] [rbp-78h] BYREF
  int *v20; // [rsp+A8h] [rbp-58h]
  int v21; // [rsp+B0h] [rbp-50h]
  int v22; // [rsp+B4h] [rbp-4Ch]
  WCHAR String1[40]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  v3 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 5u )
  {
    v14 = a2;
    v20 = (int *)&v14;
    v21 = 4;
    v22 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v3, (unsigned __int8 *)dword_180851697, 0LL, 0LL, 3u, &v19);
  }
  CScreenClippingExperienceManager::ScreenClipInvocationTypeToString(v3, Src, a2);
  if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFELL - v17) < 0x18 )
    std::_Xlen_string();
  v6 = Src;
  if ( v18 >= 8 )
    v6 = (void **)Src[0];
  std::wstring::wstring((char *)lpFile, v4, v5, L"ms-screenclip://?source=", 24LL, v6, v17);
  if ( a2 == 7 )
    std::wstring::append(lpFile, L"&type=recording", 0xFuLL);
  memset_0(String1, 0, 0x4CuLL);
  pcchOut = 38;
  LastError = AssocQueryStringW(0x1000u, ASSOCSTR_MAX, L"ms-screenclip", 0LL, String1, &pcchOut);
  if ( LastError >= 0 )
  {
    if ( CompareStringOrdinal(String1, -1, L"AppXarkze06z7pvhtc0xch943brvx8pbb8xa", -1, 1) == 2
      || CompareStringOrdinal(String1, -1, L"AppXbemgape21yns3k5pd4ah40jz06yq6xrk", -1, 1) == 2 )
    {
      LastError = -2147019873;
    }
    else
    {
      v9 = (const WCHAR *)lpFile;
      if ( lpFile[3] >= (LPCWSTR)8 )
        v9 = lpFile[0];
      if ( (__int64)ShellExecuteW(0LL, L"open", v9, 0LL, 0LL, 1) > 32 )
        LastError = 0;
      else
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x18A,
                      (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                      v10);
    }
  }
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(lpFile, v7);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(Src, v11);
  return (unsigned int)LastError;
}
