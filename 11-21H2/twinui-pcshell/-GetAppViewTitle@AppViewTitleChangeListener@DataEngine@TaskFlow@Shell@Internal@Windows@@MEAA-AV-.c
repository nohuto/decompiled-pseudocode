/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1801332E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CA_K_K00@Z @ 0x18008AC40 (-_Calculate_growth@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CA_K_K00@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1802EBA80 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802EBAEC (-_Xlen_string@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        __int64 a1,
        char *a2,
        HWND a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  char *v7; // rbp
  size_t v8; // rbx
  char *v10; // rbp
  size_t v11; // rbx
  WCHAR pString[264]; // [rsp+30h] [rbp-248h] BYREF

  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 7LL;
  *(_WORD *)a2 = 0;
  if ( InternalGetWindowText(a3, pString, 261) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( pString[v4] );
    v5 = *((_QWORD *)a2 + 3);
    if ( v4 <= v5 )
    {
      v10 = a2;
      if ( v5 >= 8 )
        v10 = *(char **)a2;
      *((_QWORD *)a2 + 2) = v4;
      v11 = 2 * v4;
      memmove_0(v10, pString, v11);
      *(_WORD *)&v10[v11] = 0;
    }
    else
    {
      if ( v4 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlen_string();
      v6 = std::wstring::_Calculate_growth(v4, *((_QWORD *)a2 + 3), 0x7FFFFFFFFFFFFFFEuLL);
      if ( v6 + 1 > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
      v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(2 * (v6 + 1));
      *((_QWORD *)a2 + 2) = v4;
      *((_QWORD *)a2 + 3) = v6;
      v8 = 2 * v4;
      memcpy_0(v7, pString, v8);
      *(_WORD *)&v7[v8] = 0;
      if ( v5 >= 8 )
        std::_Deallocate<16,0>(*(_QWORD *)a2, 2 * v5 + 2);
      *(_QWORD *)a2 = v7;
    }
  }
  return a2;
}
