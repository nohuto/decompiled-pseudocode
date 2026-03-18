/*
 * XREFs of FindRSAccess @ 0x1C00295DC
 * Callers:
 *     RegRSAccess @ 0x1C00294E4 (RegRSAccess.c)
 *     RawFieldAccess @ 0x1C0069244 (RawFieldAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindRSAccess(int a1)
{
  KIRQL v2; // al
  __int64 i; // rbx

  v2 = ExAcquireSpinLockShared(&RSAccessLock);
  for ( i = gpRSAccessHead; i && *(_DWORD *)(i + 8) != a1; i = *(_QWORD *)i )
    ;
  ExReleaseSpinLockShared(&RSAccessLock, v2);
  return i;
}
