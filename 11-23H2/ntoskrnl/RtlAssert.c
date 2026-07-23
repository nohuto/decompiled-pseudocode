/*
 * XREFs of RtlAssert @ 0x1405AA630
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x140693B60 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringDuplicate @ 0x1406942D4 (KsepStringDuplicate.c)
 *     KsepStringConcatenate @ 0x140694384 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x1406944C4 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x1406948CC (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x140694900 (KsepStringDuplicateUnicode.c)
 *     KseShimDatabaseClose @ 0x140694D78 (KseShimDatabaseClose.c)
 *     KseDriverUnloadImage @ 0x140697128 (KseDriverUnloadImage.c)
 *     KsepStringTransform @ 0x1408084F8 (KsepStringTransform.c)
 *     KsepRegistryQueryDWORD @ 0x1408448D8 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x1408449DC (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x14085A91C (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x1409779E8 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x140977E1C (KsepRegistryQueryValue.c)
 *     KsepEngineInitialize @ 0x140B611A8 (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x140B6126C (KsepEngineReadFlags.c)
 *     KseShimDatabaseBootInitialize @ 0x140B73254 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x14041BB50 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x140429360 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1405A7CE0 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x1409BD708 (RtlpTerminateCurrentProcess.c)
 */

void __stdcall RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  bool v8; // zf
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  _CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  if ( !MutableMessage )
    MutableMessage = (PSTR)&Src;
  while ( 1 )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n",
      MutableMessage,
      (const char *)VoidFailedAssertion,
      (const char *)VoidFileName,
      LineNumber);
    if ( (MEMORY[0xFFFFF780000002D4] & 3) != 3 )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_17:
      RtlpTerminateCurrentProcess();
      return;
    }
    if ( Response[0] > 98 )
    {
      v9 = Response[0] - 105;
      v8 = Response[0] == 105;
    }
    else
    {
      if ( Response[0] == 98 || Response[0] == 66 )
        goto LABEL_15;
      v9 = Response[0] - 73;
      v8 = Response[0] == 73;
    }
    if ( v8 )
      return;
    v10 = v9 - 6;
    if ( !v10 )
    {
LABEL_15:
      DbgPrintEx(0x65u, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_17;
    if ( v11 == 4 )
      ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, -1073741823);
  }
}
