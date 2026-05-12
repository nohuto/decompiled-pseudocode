/*
 * XREFs of RaidGetResetInterface @ 0x1C0059654
 * Callers:
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidQueryResetInterface @ 0x1C005A9D0 (RaidQueryResetInterface.c)
 */

__int64 __fastcall RaidGetResetInterface(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _DWORD *DeviceExtension; // rsi
  _QWORD *v5; // rbx
  void *Pool; // rax
  void *v8; // rdi
  int ResetInterface; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *DeviceExtension != 1094997074 )
    return 3221225485LL;
  v5 = DeviceExtension + 1328;
  if ( DeviceExtension && *v5 )
  {
    *a2 = *v5;
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
          *v5 = v8;
      }
      return (unsigned int)ResetInterface;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
