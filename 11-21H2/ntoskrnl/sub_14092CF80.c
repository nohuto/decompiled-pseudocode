/*
 * XREFs of sub_14092CF80 @ 0x14092CF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14092CF80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 result; // rax

  result = 1LL;
  if ( a6 == 1 || a5 )
  {
    result = 2LL;
    if ( *a5 != (unsigned __int16)word_140D05070 )
      return 0LL;
  }
  return result;
}
