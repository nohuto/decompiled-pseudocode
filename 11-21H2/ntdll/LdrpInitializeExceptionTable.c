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

signed __int64 __fastcall LdrpInitializeExceptionTable(unsigned __int64 a1)
{
  int v2; // ebx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v15);
  v2 = *(_DWORD *)(v15 + 80);
  RtlInsertInvertedFunctionTable(a1, v2);
  RtlpxLookupFunctionTable(a1, (__int64 *)&v13);
  LdrProtectMrdata(0, v3, v4, v5);
  xmmword_18018F510 = v13;
  qword_18018F520 = v14;
  LODWORD(qword_18018F520) = v2;
  RtlRemoveInvertedFunctionTable(a1, v6, v7, v8);
  return LdrProtectMrdata(1, v9, v10, v11);
}
