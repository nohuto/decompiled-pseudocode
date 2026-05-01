/*
 * XREFs of ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1803922A0
 * Callers:
 *     ?resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@K@Z @ 0x1801F1484 (-resize_buffer_bytes@reg_value_type_info@reg_view_details@reg@wil@@YAJAEAV-$basic_string@GU-$cha.c)
 *     ?trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1801F16BC (-trim_buffer@reg_value_type_info@reg_view_details@reg@wil@@YA_KAEAV-$basic_string@GU-$char_trait.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall std::wstring::resize(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *result; // rax

  result = (unsigned __int64 *)(a1 + 2);
  if ( a2 > a1[2] )
    return (unsigned __int64 *)std::wstring::append((wchar_t *)a1, a2 - *result, 0);
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (__int64 *)*a1;
  *result = a2;
  *((_WORD *)a1 + a2) = 0;
  return result;
}
