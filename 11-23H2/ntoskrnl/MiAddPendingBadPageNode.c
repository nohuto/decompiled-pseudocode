/*
 * XREFs of MiAddPendingBadPageNode @ 0x1406296E8
 * Callers:
 *     MiSetPfnRemovalRequested @ 0x14064DEB4 (MiSetPfnRemovalRequested.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402880C0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiAddPendingBadPageNode(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v2; // bl
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  v2 = 0;
  if ( a2 )
    *(_QWORD *)(a2 + 24) = a1;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67310);
  if ( !a2 )
  {
    ++qword_140C67318;
    goto LABEL_13;
  }
  v5 = (_QWORD *)qword_140C67300;
  if ( !qword_140C67300 )
    goto LABEL_11;
  while ( a1 < v5[3] )
  {
    v6 = (_QWORD *)*v5;
    if ( !*v5 )
      goto LABEL_11;
LABEL_9:
    v5 = v6;
  }
  v6 = (_QWORD *)v5[1];
  if ( v6 )
    goto LABEL_9;
  v2 = 1;
LABEL_11:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C67300, (unsigned __int64)v5, v2, a2);
LABEL_13:
  ++qword_140C67308;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67310);
}
