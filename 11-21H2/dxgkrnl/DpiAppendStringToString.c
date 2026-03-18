/*
 * XREFs of DpiAppendStringToString @ 0x1C0204A0C
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1C0203310 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x1C0204478 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0026CEC (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, unsigned __int16 *a2, PUNICODE_STRING UnicodeString)
{
  int v6; // eax
  unsigned int v7; // r11d
  __int64 v8; // rbx
  int v9; // eax
  unsigned __int16 v10; // bx
  wchar_t *PoolWithTag; // rax
  NTSTATUS appended; // eax
  NTSTATUS v13; // eax
  __int64 v15; // rcx
  unsigned __int64 v16[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  v17 = 0LL;
  v16[0] = 0LL;
  v6 = RtlStringCbLengthW(Source, 0x208uLL, &v17);
  v8 = v6;
  if ( v6 < 0 || (v9 = RtlStringCbLengthW(a2, v7, v16), v8 = v9, v9 < 0) )
  {
    v15 = 2LL;
    goto LABEL_10;
  }
  v10 = LOWORD(v16[0]) + v17 + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x74727044u);
  UnicodeString->Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801LL;
    v15 = 6LL;
    goto LABEL_10;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v10;
  memset(PoolWithTag, 0, v10);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  v8 = appended;
  if ( appended < 0 || (v13 = RtlAppendUnicodeToString(UnicodeString, a2), v8 = v13, v13 < 0) )
  {
    v15 = 2LL;
LABEL_10:
    WdLogSingleEntry1(v15, v8);
    RtlFreeUnicodeString(UnicodeString);
  }
  return (unsigned int)v8;
}
