/*
 * XREFs of sub_1801076D4 @ 0x1801076D4
 * Callers:
 *     <none>
 * Callees:
 *     sub_180067B10 @ 0x180067B10 (sub_180067B10.c)
 */

__int64 __fastcall sub_1801076D4(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~1u;
    return sub_180067B10(*(_QWORD *)(a2 + 48));
  }
  return result;
}
