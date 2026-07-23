/*
 * XREFs of SbCleanupTrace @ 0x1800518D0
 * Callers:
 *     LdrShutdownProcess @ 0x1800514A0 (LdrShutdownProcess.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 */

__int64 SbCleanupTrace()
{
  unsigned int v0; // ebx
  char *pShimData; // rdi
  char *v2; // rdi
  REGHANDLE v3; // rcx

  v0 = 0;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v2 = pShimData + 2016;
    if ( v2 )
    {
      if ( *((_DWORD *)v2 + 12) )
      {
        v3 = *((_QWORD *)v2 + 2);
        if ( v3 )
        {
          EtwNotificationUnregister(v3, 0LL);
          *((_QWORD *)v2 + 2) = 0LL;
          return 1;
        }
      }
    }
  }
  return v0;
}
