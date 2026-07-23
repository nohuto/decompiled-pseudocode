/*
 * XREFs of sub_1407A0EA0 @ 0x1407A0EA0
 * Callers:
 *     sub_140232EF0 @ 0x140232EF0 (sub_140232EF0.c)
 *     RtlAddAtomToAtomTableEx @ 0x1402F1090 (RtlAddAtomToAtomTableEx.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406AB320 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1406AB410 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406C7C90 (RtlPinAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1407A0A30 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x1407A0C90 (RtlLookupAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1409B8CC0 (RtlEmptyAtomTable.c)
 *     sub_1409B8DC8 @ 0x1409B8DC8 (sub_1409B8DC8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall sub_1407A0EA0(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  return 1;
}
