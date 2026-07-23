/*
 * XREFs of sub_1403DEE60 @ 0x1403DEE60
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_14039653C @ 0x14039653C (sub_14039653C.c)
 */

void __noreturn sub_1403DEE60()
{
  char v0; // bl

  while ( 1 )
  {
    v0 = 0;
    KeWaitForSingleObject(&stru_140C1FAE0, Executive, 0, 0, 0LL);
    ExAcquireFastMutex(&stru_140C1FB00);
    byte_140C1FB3D = 0;
    if ( byte_140C1FB3C )
    {
      ++dword_140C1FB40;
      v0 = 1;
    }
    KeReleaseGuardedMutex(&stru_140C1FB00);
    if ( v0 )
      sub_14039653C(0LL);
  }
}
