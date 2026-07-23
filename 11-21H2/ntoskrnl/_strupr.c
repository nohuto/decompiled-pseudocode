/*
 * XREFs of _strupr @ 0x1403E03F0
 * Callers:
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_1403D71A4 @ 0x1403D71A4 (sub_1403D71A4.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B25898 @ 0x140B25898 (sub_140B25898.c)
 *     sub_140B25950 @ 0x140B25950 (sub_140B25950.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

char *__cdecl strupr(char *String)
{
  char v3; // cl
  char *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int8)(v3 - 97) <= 0x19u )
        *v4 = v3 - 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    _misaligned_access();
    return 0LL;
  }
}
