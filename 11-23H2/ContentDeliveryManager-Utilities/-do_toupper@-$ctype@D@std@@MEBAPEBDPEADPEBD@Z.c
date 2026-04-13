/*
 * XREFs of ?do_toupper@?$ctype@D@std@@MEBAPEBDPEADPEBD@Z @ 0x18000B610
 * Callers:
 *     <none>
 * Callees:
 *     _Toupper @ 0x18000E3D8 (_Toupper.c)
 */

_BYTE *__fastcall std::ctype<char>::do_toupper(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v4; // rbx
  const _Ctypevec *v5; // rsi

  v4 = a2;
  if ( a2 != a3 )
  {
    v5 = (const _Ctypevec *)(a1 + 16);
    do
    {
      *v4 = Toupper((unsigned __int8)*v4, v5);
      ++v4;
    }
    while ( v4 != a3 );
  }
  return v4;
}
