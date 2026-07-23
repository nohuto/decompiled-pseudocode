/*
 * XREFs of sub_1409CE4F8 @ 0x1409CE4F8
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140669A90 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     sub_1406B5B9C @ 0x1406B5B9C (sub_1406B5B9C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1405F4040 @ 0x1405F4040 (sub_1405F4040.c)
 *     sub_140882B96 @ 0x140882B96 (sub_140882B96.c)
 */

void __fastcall sub_1409CE4F8(const UNICODE_STRING *a1, int a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 && a1->Buffer )
  {
    v9[0] = 0LL;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceSharedLite(&stru_140CF6650, 1u);
    if ( (int)sub_140882B96(v9, 0LL, a1, 0) >= 0 )
    {
      v10 = 0;
      sub_1405F4040(*(_QWORD *)(v9[0] + 24), a2, a3, &v10);
      *a4 |= v10;
    }
    ExReleaseResourceLite(&stru_140CF6650);
    KeLeaveCriticalRegion();
  }
}
