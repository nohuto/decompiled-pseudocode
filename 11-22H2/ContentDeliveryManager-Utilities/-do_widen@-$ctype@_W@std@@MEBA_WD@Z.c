/*
 * XREFs of ?do_widen@?$ctype@_W@std@@MEBA_WD@Z @ 0x180063EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::ctype<wchar_t>::do_widen(__int64 a1, char a2)
{
  return std::ctype<unsigned short>::_Dowiden(a1, a2);
}
