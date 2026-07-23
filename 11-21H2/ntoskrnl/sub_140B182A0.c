/*
 * XREFs of sub_140B182A0 @ 0x140B182A0
 * Callers:
 *     sub_140B17BA4 @ 0x140B17BA4 (sub_140B17BA4.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     sprintf_s @ 0x1403E7020 (sprintf_s.c)
 */

char __fastcall sub_140B182A0(__int64 a1, char *a2)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  char *v6; // rcx

  v4 = sub_140213A40(a1, 1413763922, 0, 0);
  if ( v4 || (v4 = sub_140213A40(a1, 1413763928, 0, 0)) != 0 )
  {
    v5 = 0;
    v6 = (char *)(v4 + 10);
    do
    {
      if ( !*v6 )
        break;
      *a2 = *v6;
      ++v5;
      ++a2;
      ++v6;
    }
    while ( v5 < 6 );
    sprintf_s(a2, 128 - v5, " - %x", *(_DWORD *)(v4 + 24));
    LOBYTE(v4) = 1;
  }
  return v4;
}
