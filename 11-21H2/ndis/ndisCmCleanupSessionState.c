/*
 * XREFs of ndisCmCleanupSessionState @ 0x1C00B1A78
 * Callers:
 *     ndisCmCleanupWorkRoutine @ 0x1C01323E0 (ndisCmCleanupWorkRoutine.c)
 * Callees:
 *     <none>
 */

void ndisCmCleanupSessionState()
{
  KIRQL v0; // al
  unsigned int v1; // r8d
  __int64 i; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
  v1 = dword_1C00EE550;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)qword_1C00EE558 + 3 * i + 1) )
    {
      KeReleaseSpinLock(&qword_1C00ECD98, v0);
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
      v1 = dword_1C00EE550;
    }
  }
  KeReleaseSpinLock(&qword_1C00ECD98, v0);
}
