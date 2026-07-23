/*
 * XREFs of MiCallDllUnload @ 0x140865670
 * Callers:
 *     MiUnloadApproved @ 0x1407E9C5C (MiUnloadApproved.c)
 * Callees:
 *     RtlPcToFileHeader @ 0x1403C39E0 (RtlPcToFileHeader.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     RtlFindExportedRoutineByName @ 0x1406AD3F0 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall MiCallDllUnload(__int64 a1)
{
  __int64 (*BugCheckParameter4)(void); // rbx
  PVOID BaseOfImage; // [rsp+40h] [rbp+8h] BYREF

  BaseOfImage = 0LL;
  BugCheckParameter4 = (__int64 (*)(void))RtlFindExportedRoutineByName(*(PVOID *)(a1 + 48), "DllUnload");
  if ( !BugCheckParameter4 )
    return 3221226021LL;
  RtlPcToFileHeader(*(PVOID *)(a1 + 48), &BaseOfImage);
  if ( BaseOfImage != *(PVOID *)(a1 + 48) )
    KeBugCheckEx(0x139u, 0xAuLL, 0LL, 0LL, (ULONG_PTR)BugCheckParameter4);
  return BugCheckParameter4();
}
