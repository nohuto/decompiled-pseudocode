/*
 * XREFs of NtAllocateLocallyUniqueId @ 0x1407ABE60
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAllocateLocallyUniqueId(PLUID Luid)
{
  __int64 v1; // rdx

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v1 = (__int64)Luid;
    if ( ((unsigned __int8)Luid & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)Luid >= 0x7FFFFFFF0000LL )
      v1 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v1 = *(_BYTE *)v1;
    *(_BYTE *)(v1 + 7) = *(_BYTE *)(v1 + 7);
  }
  *Luid = (struct _LUID)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
  return 0;
}
