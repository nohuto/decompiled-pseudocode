/*
 * XREFs of RtlAssert @ 0x1405E6EA0
 * Callers:
 *     sub_1406EAFE4 @ 0x1406EAFE4 (sub_1406EAFE4.c)
 *     sub_14075C588 @ 0x14075C588 (sub_14075C588.c)
 *     sub_14075C924 @ 0x14075C924 (sub_14075C924.c)
 *     sub_14075C9D4 @ 0x14075C9D4 (sub_14075C9D4.c)
 *     sub_14075CB14 @ 0x14075CB14 (sub_14075CB14.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 *     sub_14075CDF8 @ 0x14075CDF8 (sub_14075CDF8.c)
 *     sub_14075EC70 @ 0x14075EC70 (sub_14075EC70.c)
 *     sub_1407ED3AC @ 0x1407ED3AC (sub_1407ED3AC.c)
 *     sub_140826B28 @ 0x140826B28 (sub_140826B28.c)
 *     sub_140826C10 @ 0x140826C10 (sub_140826C10.c)
 *     sub_140964E64 @ 0x140964E64 (sub_140964E64.c)
 *     sub_1409651B8 @ 0x1409651B8 (sub_1409651B8.c)
 *     sub_1409655BC @ 0x1409655BC (sub_1409655BC.c)
 *     sub_140B01140 @ 0x140B01140 (sub_140B01140.c)
 *     sub_140B01250 @ 0x140B01250 (sub_140B01250.c)
 *     sub_140B01670 @ 0x140B01670 (sub_140B01670.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041C1C0 @ 0x14041C1C0 (sub_14041C1C0.c)
 *     RtlCaptureContext @ 0x1404299A0 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1405E4170 (DbgPrompt.c)
 *     sub_1409BA44C @ 0x1409BA44C (sub_1409BA44C.c)
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
    MutableMessage = (PSTR)&File;
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
      sub_1409BA44C();
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
      sub_14041C1C0(-2LL, 3221225473LL);
  }
}
