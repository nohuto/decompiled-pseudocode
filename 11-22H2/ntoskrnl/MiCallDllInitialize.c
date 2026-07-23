/*
 * XREFs of MiCallDllInitialize @ 0x14081357C
 * Callers:
 *     MmCallDllInitialize @ 0x1408133E0 (MmCallDllInitialize.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x1403C39E0 (RtlPcToFileHeader.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlFindExportedRoutineByName @ 0x1406AD3F0 (RtlFindExportedRoutineByName.c)
 */

__int64 (__fastcall *__fastcall MiCallDllInitialize(__int64 a1, __int64 a2))(__int64)
{
  __int64 (__fastcall *result)(__int64); // rax
  __int64 (__fastcall *BugCheckParameter4)(__int64); // rbx
  PVOID BaseOfImage; // [rsp+40h] [rbp+8h] BYREF

  BaseOfImage = 0LL;
  result = (__int64 (__fastcall *)(__int64))RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "DllInitialize");
  BugCheckParameter4 = result;
  if ( result )
  {
    RtlPcToFileHeader(*(PVOID *)(a1 + 48), &BaseOfImage);
    if ( BaseOfImage != *(PVOID *)(a1 + 48) )
      KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
    return (__int64 (__fastcall *)(__int64))BugCheckParameter4(a2);
  }
  return result;
}
