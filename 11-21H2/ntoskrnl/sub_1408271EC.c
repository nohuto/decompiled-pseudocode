/*
 * XREFs of sub_1408271EC @ 0x1408271EC
 * Callers:
 *     sub_140B01420 @ 0x140B01420 (sub_140B01420.c)
 *     sub_140B014B0 @ 0x140B014B0 (sub_140B014B0.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall sub_1408271EC(wchar_t *a1, unsigned __int16 a2, char *a3, unsigned __int16 a4)
{
  ANSI_STRING v5; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v6; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(&v5.MaximumLength + 1) = 0;
  *(_DWORD *)(&v6.MaximumLength + 1) = 0;
  v6.Buffer = a1;
  v6.MaximumLength = a2;
  v5.Buffer = a3;
  v6.Length = 0;
  v5.MaximumLength = a4;
  v5.Length = a4;
  return RtlAnsiStringToUnicodeString(&v6, &v5, 0);
}
