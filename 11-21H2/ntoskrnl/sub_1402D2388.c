/*
 * XREFs of sub_1402D2388 @ 0x1402D2388
 * Callers:
 *     sub_1407494FC @ 0x1407494FC (sub_1407494FC.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_1402D2388(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  void *Data; // rdi
  unsigned __int16 v6; // bx
  ULONG RequiredSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG Type; // [rsp+70h] [rbp+18h] BYREF

  RequiredSize = 0;
  Type = 0;
  result = IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &PropertyKey, 0, 0, 0, 0LL, &RequiredSize, &Type);
  if ( result == -1073741789 )
  {
    if ( RequiredSize >= 0xFFFE )
      return result;
    Data = (void *)ExAllocatePool2(64LL, RequiredSize, 1297630800LL);
    if ( !Data )
      return -1073741670;
    v6 = RequiredSize;
  }
  else
  {
    Data = 0LL;
    v6 = 0;
    if ( result < 0 )
      return result;
  }
  result = IoGetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 32), &PropertyKey, 0, 0, v6, Data, &RequiredSize, &Type);
  if ( result >= 0 )
  {
    *(_WORD *)(a2 + 2) = v6;
    *(_WORD *)a2 = v6 - 2;
    *(_QWORD *)(a2 + 8) = Data;
  }
  return result;
}
