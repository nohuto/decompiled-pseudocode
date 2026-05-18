/*
 * XREFs of sub_1800E5441 @ 0x1800E5441
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E5441(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(*(_QWORD *)(a2 + 48) + 152LL);
  }
  return result;
}
