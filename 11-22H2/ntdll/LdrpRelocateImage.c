/*
 * XREFs of LdrpRelocateImage @ 0x180085A68
 * Callers:
 *     LdrpCompleteMapModule @ 0x18002CF00 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180021B9C (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800DB61C (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpIsILOnlyImage @ 0x1800DCCA4 (LdrpIsILOnlyImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DCCF4 (LdrpProtectAndRelocateImage.c)
 */

__int64 __fastcall LdrpRelocateImage(PVOID BaseOfImage, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    356,
    (__int64)"LdrpRelocateImage",
    3u,
    "DLL name: %wZ\n",
    a4);
  v8 = 0;
  if ( (*(_BYTE *)(a3 + 22) & 1) != 0 )
    goto LABEL_11;
  v9 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 5u, &v13, v12);
  v10 = v12[0];
  if ( v9 < 0 )
    v10 = 0LL;
  if ( v10 && v13 )
  {
LABEL_11:
    if ( !(unsigned __int8)LdrpIsILOnlyImage(BaseOfImage) )
    {
      LdrpLogDllRelocationEtwEvent(a4, *(_QWORD *)(a3 + 48), BaseOfImage, a2);
      v8 = LdrpProtectAndRelocateImage(BaseOfImage);
    }
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    396,
    (__int64)"LdrpRelocateImage",
    4u,
    "Status: 0x%08lx\n",
    v8);
  return v8;
}
