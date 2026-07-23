/*
 * XREFs of SbCleanupTrace @ 0x180051A30
 * Callers:
 *     LdrShutdownProcess @ 0x180051600 (LdrShutdownProcess.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
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
