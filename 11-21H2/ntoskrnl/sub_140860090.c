/*
 * XREFs of sub_140860090 @ 0x140860090
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14076D788 @ 0x14076D788 (sub_14076D788.c)
 */

char __fastcall sub_140860090(__int64 a1, const WCHAR *a2, __int64 a3, _QWORD *a4)
{
  char result; // al

  result = 0;
  if ( a4 )
  {
    if ( (int)sub_14076D788(a1, a2) < 0 )
    {
      return 0;
    }
    else
    {
      result = 1;
      if ( *a4 )
        return sub_14042A5E0(a1, a2);
    }
  }
  return result;
}
