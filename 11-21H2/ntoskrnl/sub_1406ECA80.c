/*
 * XREFs of sub_1406ECA80 @ 0x1406ECA80
 * Callers:
 *     sub_1406EC524 @ 0x1406EC524 (sub_1406EC524.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 */

NTSTATUS __fastcall sub_1406ECA80(PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           *((PVOID *)KeGetCurrentThread() + 23),
           0x200u,
           0LL,
           0x28u,
           (POBJECT_TYPE)PsProcessType,
           0,
           Handle);
}
