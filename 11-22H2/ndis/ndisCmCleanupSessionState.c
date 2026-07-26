/*
 * XREFs of ndisCmCleanupSessionState @ 0x1C00B6C58
 * Callers:
 *     ndisCmCleanupWorkRoutine @ 0x1C013DFC0 (ndisCmCleanupWorkRoutine.c)
 * Callees:
 *     <none>
 */

void ndisCmCleanupSessionState()
{
  KIRQL v0; // al
  unsigned int v1; // r8d
  __int64 i; // rbx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D78);
  v1 = dword_1C00F7620;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)qword_1C00F7628 + 3 * i + 1) )
    {
      KeReleaseSpinLock(&qword_1C00F5D78, v0);
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D78);
      v1 = dword_1C00F7620;
    }
  }
  KeReleaseSpinLock(&qword_1C00F5D78, v0);
}
