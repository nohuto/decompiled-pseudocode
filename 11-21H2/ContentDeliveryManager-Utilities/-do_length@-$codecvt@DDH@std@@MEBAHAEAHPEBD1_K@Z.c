/*
 * XREFs of ?do_length@?$codecvt@DDH@std@@MEBAHAEAHPEBD1_K@Z @ 0x18000A450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::codecvt<char,char,int>::do_length(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r9

  v5 = a4 - a3;
  if ( a5 < v5 )
    LODWORD(v5) = a5;
  return (unsigned int)v5;
}
