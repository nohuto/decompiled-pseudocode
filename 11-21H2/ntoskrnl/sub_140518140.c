/*
 * XREFs of sub_140518140 @ 0x140518140
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_140518140(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  unsigned int v3; // edi
  char v4; // si
  __int64 *v5; // rcx

  v2 = (__int64 *)qword_140C4BCE0;
  v3 = 0;
  v4 = 0;
  while ( v2 != &qword_140C4BCE0 )
  {
    v5 = v2;
    v2 = (__int64 *)*v2;
    if ( (v5[59] & 0x120) != 0 && (unsigned __int8)sub_14042A5E0(v5[2], a2) )
    {
      v4 = 1;
      sub_14042A5E0(v3, a2);
    }
    ++v3;
  }
  return v4;
}
