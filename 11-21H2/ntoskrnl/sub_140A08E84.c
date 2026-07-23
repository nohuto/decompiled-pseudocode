/*
 * XREFs of sub_140A08E84 @ 0x140A08E84
 * Callers:
 *     ?Process@CPullPin@@AEAAXXZ @ 0x14057C3C0 (-Process@CPullPin@@AEAAXXZ.c)
 * Callees:
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     sub_140644BE4 @ 0x140644BE4 (sub_140644BE4.c)
 *     sub_1406461D0 @ 0x1406461D0 (sub_1406461D0.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 */

__int64 sub_140A08E84()
{
  struct _KPROCESS *v0; // rdi
  int v1; // ebx
  int ProcessId; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0;
  v0 = (struct _KPROCESS *)*((_QWORD *)KeGetCurrentThread() + 23);
  sub_140644BE4((void **)&v5, (unsigned int *)&v4);
  v1 = sub_1407D80A4((__int64)v0, 0xC0000713);
  if ( v1 >= 0 )
  {
    ProcessId = (unsigned int)PsGetProcessId(v0);
    sub_1406461D0(ProcessId, v5, v4);
  }
  return (unsigned int)v1;
}
