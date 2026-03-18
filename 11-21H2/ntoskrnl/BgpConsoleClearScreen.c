/*
 * XREFs of BgpConsoleClearScreen @ 0x140AB09E0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x140AB0A18 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx

  BgpFwAcquireLock();
  if ( qword_140CE1AD8 )
    v4 = BgpConsoleClearScreenEx(v1, v0, v2, v3);
  else
    v4 = -1073741823;
  BgpFwReleaseLock();
  return v4;
}
