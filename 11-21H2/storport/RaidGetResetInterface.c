/*
 * XREFs of RaidGetResetInterface @ 0x1C004EB30
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidQueryResetInterface @ 0x1C004F338 (RaidQueryResetInterface.c)
 */

__int64 __fastcall RaidGetResetInterface(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v5; // rax
  void *Pool; // rax
  void *v8; // rdi
  int ResetInterface; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *(_DWORD *)DeviceExtension )
    return 3221225485LL;
  if ( DeviceExtension && (v5 = DeviceExtension[656]) != 0 )
  {
    *a2 = v5;
    return 0LL;
  }
  else if ( KeGetCurrentIrql() )
  {
    return 3221225800LL;
  }
  else
  {
    Pool = (void *)RaidAllocatePool(64LL, 80LL, 1347379538LL, (__int64)DeviceObject);
    v8 = Pool;
    if ( Pool )
    {
      ResetInterface = RaidQueryResetInterface(DeviceObject, Pool);
      if ( ResetInterface < 0 )
      {
        ExFreePoolWithTag(v8, 0x504F6152u);
      }
      else
      {
        *a2 = v8;
        if ( DeviceExtension )
          DeviceExtension[656] = v8;
      }
      return (unsigned int)ResetInterface;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
