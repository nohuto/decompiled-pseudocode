/*
 * XREFs of sub_14023EF1C @ 0x14023EF1C
 * Callers:
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 * Callees:
 *     <none>
 */

char sub_14023EF1C()
{
  struct _KPRCB *CurrentPrcb; // rax

  if ( byte_140D068E5 )
    CurrentPrcb = KeGetCurrentPrcb();
  else
    CurrentPrcb = (struct _KPRCB *)qword_140D088C0[(unsigned int)dword_140C2B1C0];
  return *((_BYTE *)CurrentPrcb + 34) & 1;
}
