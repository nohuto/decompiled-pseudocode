/*
 * XREFs of sub_140B02040 @ 0x140B02040
 * Callers:
 *     sub_140B036D4 @ 0x140B036D4 (sub_140B036D4.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     sub_1403DD7D4 @ 0x1403DD7D4 (sub_1403DD7D4.c)
 */

char sub_140B02040()
{
  bool v0; // zf

  if ( (dword_140D06AC4 & 1) == 0 )
  {
    if ( (dword_140D06AC4 & 2) != 0 )
      return 1;
    if ( (unsigned __int16)word_140D05014 <= 1u
      && KeQueryActiveProcessorCountEx(0) >= 2
      && !(_BYTE)dword_140D051DC
      && !sub_1403DD7D4() )
    {
      if ( byte_140D0688B )
      {
        if ( (dword_140D0688C & 2) == 0 )
          return 0;
        v0 = (dword_140D068B8 & 0x400) == 0;
      }
      else
      {
        v0 = !HviIsAnyHypervisorPresent();
      }
      if ( v0 )
        return 1;
    }
  }
  return 0;
}
