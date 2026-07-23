/*
 * XREFs of sub_1403C6D20 @ 0x1403C6D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140210EA0 @ 0x140210EA0 (sub_140210EA0.c)
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 *     sub_140299FBC @ 0x140299FBC (sub_140299FBC.c)
 *     sub_14029A6E0 @ 0x14029A6E0 (sub_14029A6E0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 */

void __noreturn sub_1403C6D20()
{
  _QWORD *v0; // rdx
  int v1; // r8d
  __int64 v2; // r9
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  while ( 1 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&dword_140D00B50, 0, 1) == 1 )
      sub_140299FBC();
    v3 = (_QWORD *)_InterlockedExchange64(&qword_140C2BB68, 0LL);
    if ( v3 )
      sub_140210EA0(v3);
    v4 = (_QWORD *)_InterlockedExchange64(&qword_140C2BBB8, 0LL);
    if ( v4 )
      sub_14021119C(v4, v0, v1, v2);
    v5 = (_QWORD *)_InterlockedExchange64(&qword_140C2BB70, 0LL);
    if ( v5 )
      sub_14029A6E0(v5);
  }
}
