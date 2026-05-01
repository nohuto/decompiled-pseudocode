/*
 * XREFs of sub_180006F5C @ 0x180006F5C
 * Callers:
 *     HamCreateActivityForProcess @ 0x180002590 (HamCreateActivityForProcess.c)
 *     HamAssociateActivityContext @ 0x180014660 (HamAssociateActivityContext.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall sub_180006F5C(__int64 a1)
{
  DWORD result; // eax

  RtlAcquireSRWLockExclusive(a1 + 8);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
