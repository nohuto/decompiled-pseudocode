/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x140269180
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406F2420 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x1402691C4 (MiTranslateWsType.c)
 *     MiGetCurrentMultiplexedVm @ 0x14026920C (MiGetCurrentMultiplexedVm.c)
 */

char *__fastcall MmGetWorkingSetLeafSize(__int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax

  if ( (_DWORD)a1 == 2 )
  {
    result = (char *)MiGetCurrentMultiplexedVm(a1, a2, a3);
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140C53580 + 320 * (int)MiTranslateWsType();
  }
  return (char *)*((_QWORD *)result + 16);
}
