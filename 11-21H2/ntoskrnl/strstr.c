/*
 * XREFs of strstr @ 0x1403E0C40
 * Callers:
 *     sub_1403BB9FC @ 0x1403BB9FC (sub_1403BB9FC.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_1403D71A4 @ 0x1403D71A4 (sub_1403D71A4.c)
 *     sub_1403DC4D0 @ 0x1403DC4D0 (sub_1403DC4D0.c)
 *     sub_1403DF0F4 @ 0x1403DF0F4 (sub_1403DF0F4.c)
 *     sub_140824AA0 @ 0x140824AA0 (sub_140824AA0.c)
 *     sub_140848910 @ 0x140848910 (sub_140848910.c)
 *     sub_140A55D44 @ 0x140A55D44 (sub_140A55D44.c)
 *     sub_140A57680 @ 0x140A57680 (sub_140A57680.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140AD6354 @ 0x140AD6354 (sub_140AD6354.c)
 *     sub_140AFAB24 @ 0x140AFAB24 (sub_140AFAB24.c)
 *     sub_140AFB154 @ 0x140AFB154 (sub_140AFB154.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B0610C @ 0x140B0610C (sub_140B0610C.c)
 *     sub_140B17EC4 @ 0x140B17EC4 (sub_140B17EC4.c)
 *     sub_140B25898 @ 0x140B25898 (sub_140B25898.c)
 *     sub_140B25950 @ 0x140B25950 (sub_140B25950.c)
 *     sub_140B27364 @ 0x140B27364 (sub_140B27364.c)
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 *     sub_140B2DC08 @ 0x140B2DC08 (sub_140B2DC08.c)
 *     sub_140B2DD94 @ 0x140B2DD94 (sub_140B2DD94.c)
 *     sub_140B2E82C @ 0x140B2E82C (sub_140B2E82C.c)
 *     sub_140B30860 @ 0x140B30860 (sub_140B30860.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     <none>
 */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char *v3; // r8
  signed __int64 v5; // r9
  const char *v6; // rdx

  v3 = (char *)Str;
  if ( !*SubStr )
    return (char *)Str;
  if ( *Str )
  {
    v5 = Str - SubStr;
    while ( 2 )
    {
      v6 = SubStr;
      do
      {
        if ( !*v6 )
          return v3;
        if ( v6[v5] != *v6 )
          break;
        ++v6;
      }
      while ( v6[v5] );
      if ( !*v6 )
        return v3;
      ++v3;
      ++v5;
      if ( *v3 )
        continue;
      break;
    }
  }
  return 0LL;
}
