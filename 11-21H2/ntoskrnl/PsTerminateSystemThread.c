/*
 * XREFs of PsTerminateSystemThread @ 0x1406E5A70
 * Callers:
 *     sub_1403B1270 @ 0x1403B1270 (sub_1403B1270.c)
 *     sub_140550E80 @ 0x140550E80 (sub_140550E80.c)
 *     sub_14061AAA0 @ 0x14061AAA0 (sub_14061AAA0.c)
 *     sub_140799440 @ 0x140799440 (sub_140799440.c)
 *     sub_1407FC360 @ 0x1407FC360 (sub_1407FC360.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_1409F7CD0 @ 0x1409F7CD0 (sub_1409F7CD0.c)
 * Callees:
 *     sub_14079F130 @ 0x14079F130 (sub_14079F130.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  char v3; // r8

  v1 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_DWORD *)CurrentThread + 29) & 0x400) == 0 )
    return -1073741811;
  v3 = 1;
  return sub_14079F130(CurrentThread, v1, v3);
}
