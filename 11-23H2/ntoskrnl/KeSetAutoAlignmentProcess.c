/*
 * XREFs of KeSetAutoAlignmentProcess @ 0x14077445C
 * Callers:
 *     PspSetProcessDefaultHardErrorMode @ 0x140774484 (PspSetProcessDefaultHardErrorMode.c)
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetAutoAlignmentProcess(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 0);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 0);
}
