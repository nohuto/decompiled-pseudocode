/*
 * XREFs of sub_1406D2264 @ 0x1406D2264
 * Callers:
 *     sub_1403DDA6C @ 0x1403DDA6C (sub_1403DDA6C.c)
 *     sub_1403DED54 @ 0x1403DED54 (sub_1403DED54.c)
 *     sub_140602644 @ 0x140602644 (sub_140602644.c)
 *     sub_140662030 @ 0x140662030 (sub_140662030.c)
 *     sub_1406DBDA0 @ 0x1406DBDA0 (sub_1406DBDA0.c)
 *     sub_140828004 @ 0x140828004 (sub_140828004.c)
 *     sub_140858BF8 @ 0x140858BF8 (sub_140858BF8.c)
 *     sub_14085B100 @ 0x14085B100 (sub_14085B100.c)
 *     sub_140860A10 @ 0x140860A10 (sub_140860A10.c)
 *     sub_1408633F0 @ 0x1408633F0 (sub_1408633F0.c)
 *     sub_140864B00 @ 0x140864B00 (sub_140864B00.c)
 *     sub_140908C90 @ 0x140908C90 (sub_140908C90.c)
 *     sub_140A5464C @ 0x140A5464C (sub_140A5464C.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B03800 @ 0x140B03800 (sub_140B03800.c)
 *     sub_140B1BC34 @ 0x140B1BC34 (sub_140B1BC34.c)
 *     sub_140B1E5EC @ 0x140B1E5EC (sub_140B1E5EC.c)
 *     sub_140B21F30 @ 0x140B21F30 (sub_140B21F30.c)
 *     sub_140B24C44 @ 0x140B24C44 (sub_140B24C44.c)
 *     sub_140B272B0 @ 0x140B272B0 (sub_140B272B0.c)
 *     sub_140B2E584 @ 0x140B2E584 (sub_140B2E584.c)
 *     sub_140B5446C @ 0x140B5446C (sub_140B5446C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     EtwSetInformation @ 0x1406DEBF0 (EtwSetInformation.c)
 */

__int64 __fastcall sub_1406D2264(char *CallbackContext, __int64 a2, __int64 a3)
{
  ULONGLONG *v3; // rsi
  bool v4; // zf
  unsigned int v6; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = (ULONGLONG *)(CallbackContext + 32);
  v4 = *((_QWORD *)CallbackContext + 4) == 0LL;
  ProviderId = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
  if ( !v4 )
    __fastfail(5u);
  *((_QWORD *)CallbackContext + 5) = a2;
  *((_QWORD *)CallbackContext + 6) = a3;
  v6 = EtwRegister(&ProviderId, sub_1406E99B0, CallbackContext, v3);
  if ( !v6 )
    EtwSetInformation(
      *v3,
      (EVENT_INFO_CLASS)2,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  return v6;
}
