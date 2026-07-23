/*
 * XREFs of sub_1407FC360 @ 0x1407FC360
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     PsTerminateSystemThread @ 0x1406E5A70 (PsTerminateSystemThread.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1407FC360(_QWORD *a1)
{
  __int64 v1; // rdx
  PVOID Object[2]; // [rsp+20h] [rbp-38h]
  __int64 v4; // [rsp+40h] [rbp-18h]

  *(_OWORD *)Object = *(_OWORD *)a1;
  v4 = a1[2];
  ExFreePoolWithTag(a1, 0);
  sub_14042A5E0(v4, v1);
  ObfDereferenceObject(Object[0]);
  return PsTerminateSystemThread(0);
}
