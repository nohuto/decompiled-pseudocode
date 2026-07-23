/*
 * XREFs of ExpSetProcessorMicrocodeUpdateInformation @ 0x1409F7854
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSetProcessorMicrocodeUpdateInformation(unsigned int *a1, unsigned int a2)
{
  __int64 v3; // rcx

  if ( a2 < 4 )
    return 3221225476LL;
  v3 = *a1;
  if ( (_DWORD)v3 == 1 )
    return ExpMicrocodeInformationLoad(v3);
  if ( (_DWORD)v3 == 2 )
    return ExpMicrocodeInformationUnload(v3);
  return 3221225485LL;
}
