/*
 * XREFs of ?ndisAllocateMdlInternal@@YAPEAU_MDL@@PEAK@Z @ 0x1C00404A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PMDL __fastcall ndisAllocateMdlInternal(unsigned int *BufferSize)
{
  unsigned int v1; // edi
  int v3; // ebx
  unsigned int v4; // edi
  ULONG v5; // eax
  struct _MDL *Pool2; // rbx
  __int64 v7; // r10

  v1 = *BufferSize;
  v3 = 7 - ((MmSizeOfMdl((PVOID)0xFFF, *BufferSize) - 1) & 7);
  v4 = v3 + MmSizeOfMdl((PVOID)0xFFF, v1);
  v5 = v4 + *BufferSize;
  if ( v5 < v4 )
    return 0LL;
  Pool2 = (struct _MDL *)ExAllocatePool2(66LL, v5, 1684948046);
  if ( !Pool2 )
    return 0LL;
  v7 = *BufferSize;
  Pool2->Next = 0LL;
  Pool2->MdlFlags = 0;
  Pool2->ByteCount = v7;
  Pool2->StartVa = (PVOID)(((unsigned __int64)Pool2 + v4) & 0xFFFFFFFFFFFFF000uLL);
  Pool2->Size = 8 * ((((((unsigned int)Pool2 + v4) & 0xFFFuLL) + v7 + 4095) >> 12) + 6);
  Pool2->ByteOffset = ((_DWORD)Pool2 + v4) & 0xFFF;
  MmBuildMdlForNonPagedPool(Pool2);
  return Pool2;
}
