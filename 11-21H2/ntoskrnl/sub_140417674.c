/*
 * XREFs of sub_140417674 @ 0x140417674
 * Callers:
 *     sub_140553244 @ 0x140553244 (sub_140553244.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140417674(char a1)
{
  int v1; // eax

  if ( byte_140D06888 )
  {
    v1 = 2 * dword_140C48978;
    dword_140C48978 *= 2;
    if ( a1 )
      dword_140C48978 = v1 | 1;
  }
}
