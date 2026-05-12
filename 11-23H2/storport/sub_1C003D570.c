/*
 * XREFs of sub_1C003D570 @ 0x1C003D570
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 */

__int64 __fastcall sub_1C003D570(__int64 a1, IRP *a2, PIO_WORKITEM *a3)
{
  signed int Status; // r8d

  Status = a2->IoStatus.Status;
  if ( Status < 0 )
    sub_1C0003440(a2, 0, Status);
  else
    IoQueueWorkItem(*a3, sub_1C003D5C0, HyperCriticalWorkQueue, a3);
  return 3221225494LL;
}
