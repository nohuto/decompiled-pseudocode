/*
 * XREFs of sub_1402F36BC @ 0x1402F36BC
 * Callers:
 *     sub_1403078A0 @ 0x1403078A0 (sub_1403078A0.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 */

char __fastcall sub_1402F36BC(unsigned int a1)
{
  char v2; // di

  v2 = 0;
  if ( (unsigned int)KeCheckProcessorAffinityEx(asc_140C0B580, a1) )
  {
    if ( (unsigned int)KeCheckProcessorAffinityEx(asc_140C0B470, a1) )
    {
      KeRemoveProcessorAffinityEx(asc_140C0B470, a1);
      KeRemoveProcessorAffinityEx(asc_140C0B580, a1);
      return 1;
    }
    else
    {
      KeAddProcessorAffinityEx(asc_140C0B470, a1);
    }
  }
  return v2;
}
