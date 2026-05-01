/*
 * XREFs of ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x18033D8E8
 * Callers:
 *     ??$get_runtime_activation_factory@UIJsonValueStatics@Json@Data@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1801C2A28 (--$get_runtime_activation_factory@UIJsonValueStatics@Json@Data@Windows@winrt@@@impl@winrt@@YA-AU.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall std::wstring::resize(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 *result; // rax

  result = (unsigned __int64 *)(a1 + 2);
  if ( a2 > a1[2] )
    return std::wstring::append((wchar_t *)a1, a2 - *result, 0);
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (__int64 *)*a1;
  *result = a2;
  *((_WORD *)a1 + a2) = 0;
  return result;
}
