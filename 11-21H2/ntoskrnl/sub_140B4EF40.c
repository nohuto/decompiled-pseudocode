/*
 * XREFs of sub_140B4EF40 @ 0x140B4EF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140551CA0 @ 0x140551CA0 (sub_140551CA0.c)
 */

void sub_140B4EF40()
{
  unsigned int v0; // eax

  ++dword_140D68180;
  v0 = 100 * dword_140D68180 / (unsigned int)dword_140D68184;
  if ( v0 > 0x63 )
    v0 = 99;
  if ( v0 != dword_140D68188 )
  {
    dword_140D68188 = v0;
    sub_140551CA0(v0);
  }
}
