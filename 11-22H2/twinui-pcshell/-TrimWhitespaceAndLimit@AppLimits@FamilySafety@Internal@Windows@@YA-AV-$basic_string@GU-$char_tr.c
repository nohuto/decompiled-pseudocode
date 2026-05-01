/*
 * XREFs of ?TrimWhitespaceAndLimit@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV56@_K@Z @ 0x180628224
 * Callers:
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x180627874 (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180090DA0 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::TrimWhitespaceAndLimit(_QWORD *a1, __int16 *a2)
{
  char v4; // r15
  char v5; // si
  __int16 *v6; // rbx
  __int16 *v7; // rcx
  __int16 v8; // bp

  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v4 = 1;
  v5 = 0;
  v6 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v6 = *(__int16 **)a2;
  while ( 1 )
  {
    v7 = a2;
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      v7 = *(__int16 **)a2;
    if ( v6 == &v7[*((_QWORD *)a2 + 2)] )
      break;
    v8 = *v6;
    if ( (unsigned int)_o_isspace((unsigned __int16)*v6) )
    {
      if ( !v4 )
        v5 = 1;
    }
    else
    {
      if ( v5 )
      {
        std::wstring::push_back(a1, 32);
        v5 = 0;
      }
      v4 = 0;
      std::wstring::push_back(a1, v8);
    }
    if ( a1[2] + (unsigned __int64)(v5 != 0) >= 0x32 )
      break;
    ++v6;
  }
  return a1;
}
