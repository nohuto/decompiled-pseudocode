/*
 * XREFs of MiIncludeSharedCommit @ 0x1402A0ED0
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x1402A0E14 (MiReleaseControlAreaCharges.c)
 *     MiInsertSharedCommitNode @ 0x140722020 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1407223A0 (MiRemoveSharedCommitNode.c)
 *     MiUpdateProcessSharedCommit @ 0x1407482A8 (MiUpdateProcessSharedCommit.c)
 *     MiVadHasSharedCommit @ 0x140A43D98 (MiVadHasSharedCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIncludeSharedCommit(__int64 a1)
{
  int v1; // eax
  int v3; // edx
  _QWORD *i; // rax

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 )
    return 1LL;
  if ( (v1 & 0x400) == 0 && a1 != qword_140C65820 && !*(_QWORD *)(a1 + 64) )
  {
    v3 = 0;
    for ( i = &unk_140C657B8; a1 != *i; i += 8 )
    {
      if ( ++v3 )
        return 1LL;
    }
  }
  return 0LL;
}
