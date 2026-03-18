/*
 * XREFs of DxgkTestBeginTest @ 0x1C0344350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkTestBeginTest(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a1 = a2;
  a1[1] = CurrentThread;
  result = ExAcquirePushLockExclusiveEx(&qword_1C0130EE0, 0LL);
  qword_1C0130400 = (__int64)a1;
  return result;
}
