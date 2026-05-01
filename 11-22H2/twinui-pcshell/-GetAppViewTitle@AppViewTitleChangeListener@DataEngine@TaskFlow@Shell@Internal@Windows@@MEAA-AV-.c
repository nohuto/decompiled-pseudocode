/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1804A5920
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        __int64 a1,
        __int64 a2,
        HWND a3)
{
  unsigned __int64 v4; // r8
  WCHAR pString[264]; // [rsp+30h] [rbp-228h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  if ( InternalGetWindowText(a3, pString, 261) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( pString[v4] );
    std::wstring::assign((char *)a2, pString, v4);
  }
  return a2;
}
