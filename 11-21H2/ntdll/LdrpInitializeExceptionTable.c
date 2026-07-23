/*
 * XREFs of LdrpInitializeExceptionTable @ 0x1800DD1F0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlInsertInvertedFunctionTable @ 0x18003449C (RtlInsertInvertedFunctionTable.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     RtlImageNtHeaderEx @ 0x18003CF10 (RtlImageNtHeaderEx.c)
 *     RtlRemoveInvertedFunctionTable @ 0x18007A558 (RtlRemoveInvertedFunctionTable.c)
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
  xmmword_18018F510 = v3;
  qword_18018F520 = v4;
  LODWORD(qword_18018F520) = SizeOfImage;
  RtlRemoveInvertedFunctionTable((__int64)BaseAddress);
  LdrProtectMrdata(1);
}
