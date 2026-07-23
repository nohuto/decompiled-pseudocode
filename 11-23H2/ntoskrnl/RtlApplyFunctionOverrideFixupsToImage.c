/*
 * XREFs of RtlApplyFunctionOverrideFixupsToImage @ 0x1403760F4
 * Callers:
 *     MiMapSystemImageWithLargePage @ 0x140A49E14 (MiMapSystemImageWithLargePage.c)
 *     MiApplyFunctionOverrideToBootDrivers @ 0x140B45AC0 (MiApplyFunctionOverrideToBootDrivers.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140214B60 (RtlImageNtHeaderEx.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x140376160 (RtlpCaptureDynamicRelocationTableRva.c)
 */

NTSTATUS __fastcall RtlApplyFunctionOverrideFixupsToImage(PVOID BaseOfImage, ULONG64 Size)
{
  unsigned int v2; // ebx
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v5; // [rsp+40h] [rbp+18h] BYREF
  int v6; // [rsp+48h] [rbp+20h]

  v2 = Size;
  v6 = 0;
  result = RtlImageNtHeaderEx(0, BaseOfImage, (unsigned int)Size, &v5);
  if ( result >= 0 )
  {
    result = RtlpCaptureDynamicRelocationTableRva(BaseOfImage, v2);
    if ( result == -1073741637 )
    {
      return 0;
    }
    else if ( result >= 0 )
    {
      return 0;
    }
  }
  return result;
}
