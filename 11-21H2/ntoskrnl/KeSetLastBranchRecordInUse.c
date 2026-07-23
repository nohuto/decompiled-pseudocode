/*
 * XREFs of KeSetLastBranchRecordInUse @ 0x140960CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeSetLastBranchRecordInUse(char a1)
{
  if ( a1 )
    _interlockedbittestandset(&dword_140C2BD48, 1u);
  else
    _interlockedbittestandreset(&dword_140C2BD48, 1u);
}
