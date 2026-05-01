/*
 * XREFs of ?enumerate_current_index@?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@AEAAJXZ @ 0x1801F0AAC
 * Callers:
 *     ??0?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAA@PEAUHKEY__@@@Z @ 0x1801E834C (--0-$iterator_t@V-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ??Y?$iterator_t@V?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@@reg@wil@@QEAAAEAV012@_K@Z @ 0x1801E9D00 (--Y-$iterator_t@V-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?clear_name@reg_iterator_details@reg@wil@@YAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x1801F07F0 (-clear_name@reg_iterator_details@reg@wil@@YAXAEAV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x1801F1484 (-resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV-$basic_string@GU-$cha.c)
 *     ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801F16BC (-trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV-$basic_string@GU-$char_trait.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180393038 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

int __fastcall wil::reg::value_iterator_data<std::wstring>::enumerate_current_index(
        wchar_t *S,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  DWORD v5; // eax
  unsigned __int64 v6; // rdi
  DWORD v7; // esi
  WCHAR *v8; // r8
  unsigned int v9; // eax
  int v11; // eax
  int v12; // edi
  unsigned int v13; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD cchValueName; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)S + 12) == -1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x67B,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
      a4);
  v5 = 32;
  if ( *((_DWORD *)S + 14) )
    v5 = *((_DWORD *)S + 14);
  cchValueName = v5;
  while ( 1 )
  {
    v6 = *((_QWORD *)S + 7);
    v7 = v5;
    if ( v5 > v6 )
    {
      if ( (int)wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(S, 2 * v5) < 0 )
      {
        *((_QWORD *)S + 7) = 0LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x684,
          (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
          (const char *)0x8007000ELL);
        return -2147024882;
      }
      v6 = v7;
    }
    wil::reg::reg_iterator_details::clear_name(S);
    *((_QWORD *)S + 7) = v6;
    if ( !v6 )
      goto LABEL_20;
    if ( cchValueName )
    {
      v8 = S;
      if ( *((_QWORD *)S + 3) >= 8uLL )
        v8 = *(WCHAR **)S;
    }
    else
    {
      v8 = 0LL;
    }
    v9 = RegEnumValueW(*((HKEY *)S + 5), *((_DWORD *)S + 12), v8, &cchValueName, 0LL, (LPDWORD)S + 8, 0LL, 0LL);
    if ( !v9 )
      break;
    if ( v9 == 259 )
    {
      wil::reg::reg_iterator_details::clear_name(S);
      *((_DWORD *)S + 12) = -1;
      return 0;
    }
    if ( v9 != 234 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x6BA,
               (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
               (const char *)v9,
               v13);
    if ( cchValueName == 0x4000 )
      return 0;
    v5 = 2 * cchValueName;
    cchValueName = v5;
    if ( v5 > 0x4000 )
    {
      cchValueName = 0x4000;
      v5 = 0x4000;
    }
  }
  ++cchValueName;
  v11 = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(S, 2 * cchValueName);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69A,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\registry_helpers.h",
      (const char *)(unsigned int)v11);
    return v12;
  }
  *((_QWORD *)S + 7) = cchValueName;
  *((_QWORD *)S + 7) = wil::reg::reg_view_details::reg_value_type_info::trim_buffer(S);
  return 0;
}
