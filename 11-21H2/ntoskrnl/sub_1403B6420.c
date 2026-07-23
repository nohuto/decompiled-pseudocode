/*
 * XREFs of sub_1403B6420 @ 0x1403B6420
 * Callers:
 *     sub_140A543D8 @ 0x140A543D8 (sub_140A543D8.c)
 * Callees:
 *     <none>
 */

void sub_1403B6420()
{
  __int64 i; // rcx
  int v1; // eax
  unsigned int v2; // eax

  dword_140C4BE64 = 0;
  dword_140C4BE68 = -1;
  for ( i = qword_140C4BCE0; (__int64 *)i != &qword_140C4BCE0; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 472);
    if ( (v1 & 0x100) != 0 )
    {
      v2 = ((unsigned __int16)v1 >> 13) + 1;
      if ( v2 > dword_140C4BE64 )
        dword_140C4BE64 = v2;
      if ( v2 < dword_140C4BE68 )
        dword_140C4BE68 = v2;
    }
  }
}
