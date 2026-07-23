/*
 * XREFs of PopSessionConnectionChange @ 0x1407EBC54
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x14032A93C (PopPrintEx.c)
 *     PopSessionDisconnected @ 0x140683338 (PopSessionDisconnected.c)
 *     PopSessionConnected @ 0x1407EBAAC (PopSessionConnected.c)
 *     PopAcquireAdaptiveLock @ 0x1407EC16C (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopSessionConnectionChange(__int64 a1, char *a2, __int64 a3)
{
  char v3; // di
  unsigned int v4; // esi
  char v5; // bl
  const char *v8; // rax
  const char *v9; // r8

  v3 = *a2;
  v4 = a1;
  v5 = a2[1];
  LOBYTE(a1) = 1;
  PopAcquireAdaptiveLock(a1);
  v8 = "Connected";
  if ( !v3 )
    v8 = "Disconnected";
  v9 = "Console";
  if ( !v5 )
    v9 = "Remote";
  PopPrintEx(3u, (__int64)"PopAdaptive:>>>>>%s session %u is %s\n", v9, v4, v8);
  if ( v3 )
    PopSessionConnected(v4, (__int64)a2, a3);
  else
    PopSessionDisconnected(v4, a3);
  return PopReleaseAdaptiveLock();
}
