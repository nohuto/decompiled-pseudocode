/*
 * XREFs of LdrpInitializeExceptionTable @ 0x1800DD970
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180020CE0 (RtlpxLookupFunctionTable.c)
 *     RtlImageNtHeaderEx @ 0x180024AA0 (RtlImageNtHeaderEx.c)
 *     RtlInsertInvertedFunctionTable @ 0x18002C31C (RtlInsertInvertedFunctionTable.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     RtlRemoveInvertedFunctionTable @ 0x1800736B0 (RtlRemoveInvertedFunctionTable.c)
 */

__int64 __fastcall LdrpInitializeExceptionTable(unsigned __int64 a1)
{
  int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v6);
  v2 = *(_DWORD *)(v6 + 80);
  RtlInsertInvertedFunctionTable(a1, v2);
  RtlpxLookupFunctionTable(a1, (__int64 *)&v4);
  LdrProtectMrdata(0);
  qword_180199530 = v5;
  xmmword_180199520 = v4;
  LODWORD(qword_180199530) = v2;
  RtlRemoveInvertedFunctionTable(a1);
  return LdrProtectMrdata(1);
}
