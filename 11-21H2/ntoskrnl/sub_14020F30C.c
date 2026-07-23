/*
 * XREFs of sub_14020F30C @ 0x14020F30C
 * Callers:
 *     sub_14020E0AC @ 0x14020E0AC (sub_14020E0AC.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_140572EC0 @ 0x140572EC0 (sub_140572EC0.c)
 *     sub_140B2EDD8 @ 0x140B2EDD8 (sub_140B2EDD8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14020F30C(char *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  signed __int64 v4; // r9

  if ( a2 <= (unsigned __int16)word_140D05018 )
  {
    v2 = 0;
    if ( !a2 )
      return 0LL;
    v4 = (char *)qword_140D06E48 - a1;
    while ( (~*(_QWORD *)&a1[v4] & *(_QWORD *)a1) == 0LL )
    {
      ++v2;
      a1 += 8;
      if ( v2 >= a2 )
        return 0LL;
    }
  }
  return 3221225903LL;
}
