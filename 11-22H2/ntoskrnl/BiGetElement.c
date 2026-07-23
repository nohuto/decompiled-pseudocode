/*
 * XREFs of BiGetElement @ 0x140A5C9A0
 * Callers:
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140A5D834 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x140A5DA9C (BiCreateBootEntry.c)
 *     BiExportEfiBootManager @ 0x140A5E63C (BiExportEfiBootManager.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140A5EA5C (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x140A5EF5C (BiUpdateEfiEntry.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiGetElement(HANDLE BcdObjectHandle, ULONG BcdElement, _QWORD *a3, ULONG *a4)
{
  NTSTATUS ElementDataWithFlags; // ebx
  void *Pool2; // rdi
  BCD_FLAGS v10; // r8d
  ULONG BufferSize; // [rsp+60h] [rbp+18h] BYREF

  BufferSize = 0;
  *a4 = 0;
  *a3 = 0LL;
  ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)a3, 0LL, &BufferSize);
  if ( ElementDataWithFlags == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(258LL, BufferSize, 1262764866LL);
    if ( Pool2 )
    {
      ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, v10, Pool2, &BufferSize);
      if ( ElementDataWithFlags < 0 )
      {
        ExFreePoolWithTag(Pool2, 0x4B444342u);
      }
      else
      {
        *a4 = BufferSize;
        *a3 = Pool2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)ElementDataWithFlags;
}
