/*
 * XREFs of PopBcdReadElement @ 0x140805418
 * Callers:
 *     PopBcdSetDefaultResumeObjectElements @ 0x140804DD8 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdRegenerateResumeObject @ 0x14099CCB4 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopBcdReadElement(HANDLE BcdObjectHandle, ULONG BcdElement, _QWORD *a3, _DWORD *a4)
{
  void *Pool2; // rdi
  BCD_FLAGS v9; // r8d
  NTSTATUS ElementDataWithFlags; // ebx
  ULONG BufferSize[6]; // [rsp+30h] [rbp-18h] BYREF

  BufferSize[0] = 0;
  if ( BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)a3, 0LL, BufferSize) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, BufferSize[0], 1684226640LL);
    if ( Pool2 )
    {
      ElementDataWithFlags = BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, v9, Pool2, BufferSize);
      if ( ElementDataWithFlags < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        ElementDataWithFlags = 0;
        *a4 = BufferSize[0];
        *a3 = Pool2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)ElementDataWithFlags;
}
