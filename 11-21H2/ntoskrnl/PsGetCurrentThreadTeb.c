/*
 * XREFs of PsGetCurrentThreadTeb @ 0x140280140
 * Callers:
 *     sub_1406F61A4 @ 0x1406F61A4 (sub_1406F61A4.c)
 *     sub_1406F653C @ 0x1406F653C (sub_1406F653C.c)
 * Callees:
 *     <none>
 */

PVOID PsGetCurrentThreadTeb(void)
{
  struct _KTHREAD *CurrentThread; // rcx

  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 29) & 0x400) != 0 || *((_BYTE *)CurrentThread + 586) == 1 )
    return 0LL;
  else
    return (PVOID)*((_QWORD *)CurrentThread + 30);
}
