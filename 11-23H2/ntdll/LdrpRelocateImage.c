/*
 * XREFs of LdrpRelocateImage @ 0x180086268
 * Callers:
 *     LdrpCompleteMapModule @ 0x18002CD30 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800DAFCC (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpIsILOnlyImage @ 0x1800DC654 (LdrpIsILOnlyImage.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DC6A4 (LdrpProtectAndRelocateImage.c)
 */

__int64 __fastcall LdrpRelocateImage(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    356LL,
    (__int64)"LdrpRelocateImage",
    3LL,
    "DLL name: %wZ\n",
    a4);
  v8 = 0;
  if ( (*(_BYTE *)(a3 + 22) & 1) != 0 )
    goto LABEL_11;
  v9 = RtlpImageDirectoryEntryToDataEx(a1, 1, 5u, &v13, v12);
  v10 = v12[0];
  if ( v9 < 0 )
    v10 = 0LL;
  if ( v10 && v13 )
  {
LABEL_11:
    if ( !(unsigned __int8)LdrpIsILOnlyImage(a1) )
    {
      LdrpLogDllRelocationEtwEvent(a4, *(_QWORD *)(a3 + 48), a1, a2);
      v8 = LdrpProtectAndRelocateImage(a1);
    }
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    396LL,
    (__int64)"LdrpRelocateImage",
    4LL,
    "Status: 0x%08lx\n",
    v8);
  return v8;
}
