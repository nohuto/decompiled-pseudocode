/*
 * XREFs of ??$get_value_with_type@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Uerr_returncode_policy@wil@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@AEBAJPEBG0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x18025E460
 * Callers:
 *     ??$try_get_value@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$reg_view_t@Uerr_exception_policy@wil@@@reg_view_details@reg@wil@@QEBA?AV?$optional@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEBG0K@Z @ 0x18026071C (--$try_get_value@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$reg_view_t@Uer.c)
 * Callees:
 *     ?get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z @ 0x1801F0F3C (-get_value_flags_from_value_type@reg_view_details@reg@wil@@YAKK@Z.c)
 *     ?resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x1801F1484 (-resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV-$basic_string@GU-$cha.c)
 *     ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801F16BC (-trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV-$basic_string@GU-$char_trait.c)
 */

__int64 __fastcall wil::reg::reg_view_details::reg_view_t<wil::err_exception_policy>::get_value_with_type<std::wstring,wil::err_returncode_policy>(
        HKEY *a1,
        __int64 a2,
        const WCHAR *a3,
        _QWORD *a4,
        wil::reg::reg_view_details *a5)
{
  _WORD *v8; // rdi
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  int v12; // edx
  DWORD value_flags_from_value_type; // esi
  bool v14; // cf
  void *pvData; // rcx
  LSTATUS ValueW; // eax
  unsigned int v17; // edi
  _QWORD *v18; // rax
  __int64 result; // rax
  __int64 pcbData; // [rsp+68h] [rbp+10h] BYREF

  pcbData = a2;
  if ( a4[3] < 8uLL )
  {
    v9 = a4;
    v8 = a4;
  }
  else
  {
    v8 = (_WORD *)*a4;
    v9 = (_QWORD *)*a4;
  }
  v10 = (unsigned __int64)v9 + 2 * a4[2];
  v11 = (v10 - (unsigned __int64)v8 + 1) >> 1;
  if ( (unsigned __int64)v8 > v10 )
    v11 = 0LL;
  if ( v11 )
  {
    while ( v11 )
    {
      *v8++ = 0;
      --v11;
    }
  }
  value_flags_from_value_type = wil::reg::reg_view_details::get_value_flags_from_value_type((wil::reg::reg_view_details *)(unsigned int)a5);
  while ( 1 )
  {
    v14 = a4[3] < 8uLL;
    pvData = a4;
    LODWORD(pcbData) = v12;
    if ( !v14 )
      pvData = (void *)*a4;
    ValueW = RegGetValueW(
               *a1,
               L"Software\\Microsoft\\Windows\\Shell\\BrandedKey",
               a3,
               value_flags_from_value_type,
               0LL,
               pvData,
               (LPDWORD)&pcbData);
    v17 = ValueW;
    if ( ValueW > 0 )
      v17 = (unsigned __int16)ValueW | 0x80070000;
    if ( v17 != -2147024662 )
    {
      if ( (v17 & 0x80000000) != 0 )
        return v17;
      v18 = a4;
      if ( a4[3] >= 8uLL )
        v18 = (_QWORD *)*a4;
      if ( v18 || !(_DWORD)pcbData )
        break;
    }
    result = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes();
    if ( (int)result < 0 )
      return result;
    v12 = pcbData;
  }
  if ( 2 * *((_DWORD *)a4 + 4) + 2 == (_DWORD)pcbData
    || (result = wil::reg::reg_view_details::reg_value_type_info::resize_buffer_bytes(), (int)result >= 0) )
  {
    wil::reg::reg_view_details::reg_value_type_info::trim_buffer(a4);
    return v17;
  }
  return result;
}
