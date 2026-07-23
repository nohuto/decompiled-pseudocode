/*
 * XREFs of LdrpInitializeExceptionTable @ 0x1800DD320
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020B00 (RtlpxLookupFunctionTable.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002C14C (RtlInsertInvertedFunctionTable.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     RtlRemoveInvertedFunctionTable @ 0x180073D20 (RtlRemoveInvertedFunctionTable.c)
 */

void __fastcall LdrpInitializeExceptionTable(PVOID BaseAddress)
{
  unsigned int SizeOfImage; // ebx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders);
  SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
  RtlInsertInvertedFunctionTable((__int64)BaseAddress, SizeOfImage);
  RtlpxLookupFunctionTable(BaseAddress, (__int64 *)&v3);
  LdrProtectMrdata(0);
  qword_18019C540 = v4;
  xmmword_18019C530 = v3;
  LODWORD(qword_18019C540) = SizeOfImage;
  RtlRemoveInvertedFunctionTable((__int64)BaseAddress);
  LdrProtectMrdata(1);
}
