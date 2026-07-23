/*
 * XREFs of sub_140A87944 @ 0x140A87944
 * Callers:
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A84F20 @ 0x140A84F20 (sub_140A84F20.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86160 @ 0x140A86160 (sub_140A86160.c)
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A866D0 @ 0x140A866D0 (sub_140A866D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A87944(__int64 *a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // eax

  if ( !a3 )
    return 0LL;
  while ( a1 )
  {
    v4 = *((unsigned int *)a1 + 10);
    if ( a2 <= v4 )
    {
      do
      {
        if ( !a3 )
          break;
        v5 = *((_DWORD *)a1 + 10);
        a1 = (__int64 *)*a1;
        v6 = v5 - a2;
        if ( v6 >= a3 )
          v6 = a3;
        LODWORD(a2) = 0;
        a3 -= v6;
      }
      while ( a1 );
      return a3;
    }
    a1 = (__int64 *)*a1;
    a2 -= v4;
  }
  return a3;
}
