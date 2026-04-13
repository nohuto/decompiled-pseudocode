/*
 * XREFs of _GetLocaleName @ 0x18000D954
 * Callers:
 *     _Getctype @ 0x180005F04 (_Getctype.c)
 *     _Getcvt @ 0x18000612C (_Getcvt.c)
 *     _Getcoll @ 0x180021A70 (_Getcoll.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetLocaleName(int a1)
{
  wchar_t *result; // rax

  result = _wsetlocale(a1, 0LL);
  if ( result )
  {
    if ( *result != 67 || result[1] )
      return _wcsdup(result);
    else
      return 0LL;
  }
  return result;
}
