/*
 * XREFs of sub_140B374F0 @ 0x140B374F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD **__fastcall sub_140B374F0(char a1, __int64 a2)
{
  _DWORD **result; // rax

  if ( a1 )
  {
    result = *(_DWORD ***)(a2 + 64);
    ++**result;
  }
  return result;
}
