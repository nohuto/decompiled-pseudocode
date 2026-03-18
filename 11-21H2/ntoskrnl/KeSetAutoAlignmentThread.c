/*
 * XREFs of KeSetAutoAlignmentThread @ 0x140961444
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetAutoAlignmentThread(__int64 a1, int a2)
{
  if ( a2 )
    return _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 2u);
  else
    return _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 2u);
}
