/*
 * XREFs of HvlpAllocatePageListResources @ 0x140941890
 * Callers:
 *     PopAllocateHiberContext @ 0x140987F38 (PopAllocateHiberContext.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall HvlpAllocatePageListResources(__int64 a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx

  v2 = a2 + 2;
  v3 = -1073741670;
  HvlpHibernateScratchPage = (PVOID)ExAllocatePool2(64LL, (unsigned int)((a2 + 2) << 12), 541873736LL);
  if ( HvlpHibernateScratchPage )
  {
    HvlpHibernateScratchPageCount = v2;
    return 0;
  }
  return v3;
}
