/*
 * XREFs of ?do_tolower@?$ctype@_W@std@@MEBAPEB_WPEA_WPEB_W@Z @ 0x180063D50
 * Callers:
 *     <none>
 * Callees:
 *     _Towlower @ 0x180005E6C (_Towlower.c)
 */

wchar_t *__fastcall std::ctype<wchar_t>::do_tolower(__int64 a1, wchar_t *a2, wchar_t *a3)
{
  wchar_t *v4; // rbx
  const _Ctypevec *v5; // rsi

  v4 = a2;
  if ( a2 != a3 )
  {
    v5 = (const _Ctypevec *)(a1 + 16);
    do
    {
      *v4 = Towlower(*v4, v5);
      ++v4;
    }
    while ( v4 != a3 );
  }
  return v4;
}
