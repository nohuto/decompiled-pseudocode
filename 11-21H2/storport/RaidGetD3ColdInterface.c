/*
 * XREFs of RaidGetD3ColdInterface @ 0x1C002026C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 *     RaidSetD3Cold @ 0x1C0020224 (RaidSetD3Cold.c)
 *     RaidAdapterStartDevice @ 0x1C0037D70 (RaidAdapterStartDevice.c)
 *     RaUnitStartDeviceIrp @ 0x1C0087C34 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidQueryD3ColdInterface @ 0x1C0020348 (RaidQueryD3ColdInterface.c)
 */

__int64 __fastcall RaidGetD3ColdInterface(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  _QWORD *DeviceExtension; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  __int64 v7; // rax
  void *Pool; // rbx
  int D3ColdInterface; // ebp

  DeviceExtension = DeviceObject->DeviceExtension;
  v4 = 0LL;
  v5 = 0LL;
  if ( *(_DWORD *)DeviceExtension )
  {
    if ( *(_DWORD *)DeviceExtension != 1 )
      return 3221225485LL;
    v5 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[219];
      goto LABEL_5;
    }
  }
  else
  {
    v4 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[655];
LABEL_5:
      if ( v7 )
      {
        *a2 = v7;
        return 0LL;
      }
    }
  }
  if ( KeGetCurrentIrql() )
    return 3221225800LL;
  Pool = (void *)RaidAllocatePool(64LL, 72LL, 1464885586LL, (__int64)DeviceObject);
  if ( !Pool )
    return 3221225626LL;
  D3ColdInterface = RaidQueryD3ColdInterface(DeviceObject);
  if ( D3ColdInterface >= 0 )
  {
    *a2 = Pool;
    if ( v4 )
    {
      v4[655] = Pool;
    }
    else if ( v5 )
    {
      v5[219] = Pool;
    }
  }
  else
  {
    ExFreePoolWithTag(Pool, 0x57506152u);
  }
  return (unsigned int)D3ColdInterface;
}
