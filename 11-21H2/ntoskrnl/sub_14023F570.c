/*
 * XREFs of sub_14023F570 @ 0x14023F570
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140549B84 @ 0x140549B84 (sub_140549B84.c)
 */

char sub_14023F570()
{
  if ( dword_140C1CF20 && !(unsigned int)KeIsEqualAffinityEx(asc_140C0B9F0, &unk_140C0D550) )
  {
    sub_140300030(&unk_140C0D550, (unsigned __int16)word_140C0D552, asc_140C0B9F0);
    if ( *((_DWORD *)KeGetCurrentPrcb() + 8456) == 2 )
      sub_140549B84();
    if ( qword_140C23B48 )
      sub_14042A5E0(qword_140C204B8, asc_140C0B9F0);
    sub_14020E1DC(asc_140C0B9F0, 2u);
  }
  return 1;
}
