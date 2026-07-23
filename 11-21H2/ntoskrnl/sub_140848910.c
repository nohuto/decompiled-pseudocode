/*
 * XREFs of sub_140848910 @ 0x140848910
 * Callers:
 *     sub_140848850 @ 0x140848850 (sub_140848850.c)
 * Callees:
 *     strstr @ 0x1403E0C40 (strstr.c)
 */

__int64 __fastcall sub_140848910(const char *a1)
{
  unsigned int v2; // ebx
  char *v3; // rax
  __int64 v5; // rdx

  v2 = 0;
  v3 = strstr(a1, "MINTCBIGNOREKD");
  if ( v3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( aMintcbignorekd[v5] );
    if ( (v3 == a1 || *(v3 - 1) == 32) && (v3[(unsigned int)v5] & 0xDF) == 0 )
      return 1;
  }
  return v2;
}
