/*
 * XREFs of sub_1406C2248 @ 0x1406C2248
 * Callers:
 *     sub_1406C1FDC @ 0x1406C1FDC (sub_1406C1FDC.c)
 *     sub_140784454 @ 0x140784454 (sub_140784454.c)
 *     sub_140788A80 @ 0x140788A80 (sub_140788A80.c)
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 *     sub_1408265D0 @ 0x1408265D0 (sub_1408265D0.c)
 *     sub_1408273E0 @ 0x1408273E0 (sub_1408273E0.c)
 *     sub_140859460 @ 0x140859460 (sub_140859460.c)
 *     sub_140A2E2C4 @ 0x140A2E2C4 (sub_140A2E2C4.c)
 *     sub_140A304B4 @ 0x140A304B4 (sub_140A304B4.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall sub_1406C2248(__int64 a1, const WCHAR *a2, const UNICODE_STRING **a3)
{
  NTSTATUS inited; // edi
  const UNICODE_STRING **v6; // rsi
  const UNICODE_STRING *i; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  String2 = 0LL;
  inited = RtlInitUnicodeStringEx(&String2, a2);
  if ( inited >= 0 )
  {
    v6 = (const UNICODE_STRING **)(a1 + 16);
    inited = -1073741772;
    for ( i = *v6; i != (const UNICODE_STRING *)v6; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( RtlEqualUnicodeString(i + 1, &String2, 1u) )
      {
        inited = 0;
        *a3 = i;
        return (unsigned int)inited;
      }
    }
  }
  return (unsigned int)inited;
}
