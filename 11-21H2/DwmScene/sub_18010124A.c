/*
 * XREFs of sub_18010124A @ 0x18010124A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010124A(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(a2 + 264);
  }
  return result;
}
