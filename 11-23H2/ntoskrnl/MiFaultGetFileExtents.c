/*
 * XREFs of MiFaultGetFileExtents @ 0x140645E84
 * Callers:
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 * Callees:
 *     MiDereferenceControlArea @ 0x14020B890 (MiDereferenceControlArea.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSessionIdForVa @ 0x1402A16D0 (MiGetSessionIdForVa.c)
 *     MiFreeInPageSupportBlock @ 0x1402BD2FC (MiFreeInPageSupportBlock.c)
 *     MiReleaseFaultState @ 0x1402EF2A0 (MiReleaseFaultState.c)
 *     MiReleaseFaultCharges @ 0x1403636B0 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140364968 (MiRetainSubsection.c)
 *     MiGetSharedProtos @ 0x140369D8C (MiGetSharedProtos.c)
 *     MiAllocateFileExtents @ 0x140A33068 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v5; // r14
  unsigned int SessionIdForVa; // r15d
  unsigned int FileExtents; // ebx

  v2 = *(_QWORD *)(a2 + 208);
  v5 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 34) & 2) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(a1, *(_QWORD *)(a2 + 224));
    MiGetSharedProtos(v5, SessionIdForVa, v2);
  }
  else
  {
    SessionIdForVa = 0;
  }
  MiRetainSubsection((__int64 *)v2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  FileExtents = MiAllocateFileExtents(v2, 2, SessionIdForVa);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)a2);
  MiDereferenceControlArea(v5);
  MiReleaseFaultCharges((__int64 *)v2);
  return FileExtents;
}
