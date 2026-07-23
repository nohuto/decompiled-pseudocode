/*
 * XREFs of LdrpRelocateImage @ 0x180088D94
 * Callers:
 *     LdrpCompleteMapModule @ 0x18004CFB8 (LdrpCompleteMapModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpProtectAndRelocateImage @ 0x180088EBC (LdrpProtectAndRelocateImage.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x1800890C4 (LdrpLogDllRelocationEtwEvent.c)
 */

__int64 __fastcall LdrpRelocateImage(PVOID BaseOfImage, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  _QWORD OutHeaders[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF

  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    354,
    (__int64)"LdrpRelocateImage",
    3u,
    "DLL name: %wZ\n",
    a4);
  v8 = 0;
  if ( (*(_BYTE *)(a3 + 22) & 1) != 0 )
    goto LABEL_7;
  v9 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 5u, &v15, (PIMAGE_NT_HEADERS)OutHeaders);
  v10 = OutHeaders[0];
  if ( v9 < 0 )
    v10 = 0LL;
  if ( v10 && v15 )
  {
LABEL_7:
    v12 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, 1, 0xEu, &v15, (PIMAGE_NT_HEADERS)OutHeaders);
    v13 = OutHeaders[0];
    if ( v12 < 0 )
      v13 = 0LL;
    if ( !v13 || v15 < 0x48 || (*(_BYTE *)(v13 + 16) & 1) == 0 )
    {
      LdrpLogDllRelocationEtwEvent(a4, *(_QWORD *)(a3 + 48), BaseOfImage, a2);
      v8 = LdrpProtectAndRelocateImage(BaseOfImage);
    }
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrmap.c",
    394,
    (__int64)"LdrpRelocateImage",
    4u,
    "Status: 0x%08lx\n",
    v8);
  return v8;
}
