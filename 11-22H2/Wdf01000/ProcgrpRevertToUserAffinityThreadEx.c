/*
 * XREFs of ProcgrpRevertToUserAffinityThreadEx @ 0x1C008A5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ProcgrpRevertToUserAffinityThreadEx(unsigned __int64 Affinity)
{
  if ( !Affinity )
    KeRevertToUserAffinityThread();
}
