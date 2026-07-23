/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x14021DAC0
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F34 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiGetCurrentMultiplexedVm @ 0x14021DB04 (MiGetCurrentMultiplexedVm.c)
 *     MiTranslateWsType @ 0x14021DB44 (MiTranslateWsType.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(int a1)
{
  char *result; // rax

  if ( a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm();
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140C69A00 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 16);
}
