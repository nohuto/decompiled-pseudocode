/*
 * XREFs of ?do_tolower@?$ctype@_W@std@@MEBA_W_W@Z @ 0x180063D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t __fastcall std::ctype<wchar_t>::do_tolower(__int64 a1, wchar_t a2)
{
  return Towlower(a2, (const _Ctypevec *)(a1 + 16));
}
