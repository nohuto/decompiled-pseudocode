/*
 * XREFs of sub_14059CFBC @ 0x14059CFBC
 * Callers:
 *     sub_14059AEEC @ 0x14059AEEC (sub_14059AEEC.c)
 *     sub_14059D170 @ 0x14059D170 (sub_14059D170.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 */

NTSTATUS __fastcall sub_14059CFBC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PVOID Object)
{
  KeInitializeApc(a2, *(_QWORD *)(a1 + 968), 0, (__int64)_misaligned_access, 0LL, a3, 0, a4);
  KeInsertQueueApc(a2, 0LL, 0LL, 0);
  return KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
}
