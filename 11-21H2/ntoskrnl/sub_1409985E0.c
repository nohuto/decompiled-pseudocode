/*
 * XREFs of sub_1409985E0 @ 0x1409985E0
 * Callers:
 *     sub_140996FDC @ 0x140996FDC (sub_140996FDC.c)
 * Callees:
 *     sub_140864194 @ 0x140864194 (sub_140864194.c)
 *     sub_14099858C @ 0x14099858C (sub_14099858C.c)
 */

char __fastcall sub_1409985E0(char a1)
{
  int v1; // eax
  bool v2; // zf

  LOBYTE(v1) = dword_140C1F9DC;
  if ( a1 )
  {
    v1 = dword_140C1F9DC + 1;
    dword_140C1F9DC = v1;
    if ( v1 == 1 )
      LOBYTE(v1) = sub_14099858C(6);
  }
  else if ( dword_140C1F9DC )
  {
    v2 = dword_140C1F9DC == 1;
    LOBYTE(v1) = --dword_140C1F9DC;
    if ( v2 )
      LOBYTE(v1) = sub_140864194(6);
  }
  return v1;
}
