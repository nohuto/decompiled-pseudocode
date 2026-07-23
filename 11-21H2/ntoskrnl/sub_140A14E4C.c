/*
 * XREFs of sub_140A14E4C @ 0x140A14E4C
 * Callers:
 *     sub_140843940 @ 0x140843940 (sub_140843940.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A14ECC @ 0x140A14ECC (sub_140A14ECC.c)
 */

__int64 __fastcall sub_140A14E4C(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING v7; // [rsp+30h] [rbp-18h] BYREF

  v7 = 0LL;
  inited = RtlInitUnicodeStringEx(&v7, a3);
  if ( inited >= 0 )
    return (unsigned int)sub_140A14ECC(a1, a2, &v7);
  else
    sub_1406E0C3C(1LL, (__int64)"AslRegistryGetUInt32");
  return (unsigned int)inited;
}
