/*
 * XREFs of sub_140AF8610 @ 0x140AF8610
 * Callers:
 *     sub_1403B91D4 @ 0x1403B91D4 (sub_1403B91D4.c)
 * Callees:
 *     sub_140822E58 @ 0x140822E58 (sub_140822E58.c)
 */

char sub_140AF8610()
{
  __int16 v0; // dx
  struct _KPRCB *CurrentPrcb; // rax

  v0 = 2048;
  if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x100) == 0 )
  {
    LOBYTE(CurrentPrcb) = sub_140822E58();
    if ( (_BYTE)CurrentPrcb )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( *((_BYTE *)CurrentPrcb + 141) == 1 )
        v0 = 512;
    }
LABEL_3:
    word_140C0978C = v0;
    return (char)CurrentPrcb;
  }
  if ( (dword_140C4AFE0 & 4) != 0 )
    v0 = dword_140C4B008;
  LOBYTE(CurrentPrcb) = v0 - 1;
  if ( (unsigned __int16)(v0 - 1) <= 0x7FFu )
    goto LABEL_3;
  return (char)CurrentPrcb;
}
