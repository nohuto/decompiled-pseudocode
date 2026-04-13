/*
 * XREFs of ?do_toupper@?$ctype@D@std@@MEBADD@Z @ 0x18000B5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall std::ctype<char>::do_toupper(__int64 a1, unsigned __int8 a2)
{
  return Toupper(a2, (const _Ctypevec *)(a1 + 16));
}
