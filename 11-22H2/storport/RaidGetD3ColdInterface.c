/*
 * XREFs of RaidGetD3ColdInterface @ 0x1C0020144
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 *     RaidSetD3Cold @ 0x1C00200FC (RaidSetD3Cold.c)
 *     RaidAdapterStartDevice @ 0x1C00391DC (RaidAdapterStartDevice.c)
 *     RaUnitStartDeviceIrp @ 0x1C00A15D8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidQueryD3ColdInterface @ 0x1C0020228 (RaidQueryD3ColdInterface.c)
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
  if ( *(_DWORD *)DeviceExtension == 1094997074 )
  {
    v4 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[663];
LABEL_5:
      if ( v7 )
      {
        *a2 = v7;
        return 0LL;
      }
    }
  }
  else
  {
    if ( *(_DWORD *)DeviceExtension != 1431193940 )
      return 3221225485LL;
    v5 = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v7 = DeviceExtension[225];
      goto LABEL_5;
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
      v4[663] = Pool;
    }
    else if ( v5 )
    {
      v5[225] = Pool;
    }
  }
  else
  {
    ExFreePoolWithTag(Pool, 0x57506152u);
  }
  return (unsigned int)D3ColdInterface;
}
