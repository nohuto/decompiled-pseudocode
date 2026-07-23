/*
 * XREFs of KeIsEqualAffinityEx @ 0x140292B10
 * Callers:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     sub_14023F570 @ 0x14023F570 (sub_14023F570.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_140292A40 @ 0x140292A40 (sub_140292A40.c)
 *     sub_1406CC024 @ 0x1406CC024 (sub_1406CC024.c)
 *     sub_14083ECE0 @ 0x14083ECE0 (sub_14083ECE0.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_14084A750 @ 0x14084A750 (sub_14084A750.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 v3; // r10
  unsigned __int16 v5; // dx

  v2 = a2;
  v3 = *a1;
  if ( *a1 >= *a2 )
  {
    v3 = *a2;
    v2 = a1;
  }
  v5 = 0;
  if ( v3 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= v3 )
        goto LABEL_6;
    }
    return 0LL;
  }
  else
  {
LABEL_6:
    while ( v5 < *v2 )
    {
      if ( *(_QWORD *)&v2[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
