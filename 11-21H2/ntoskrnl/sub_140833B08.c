/*
 * XREFs of sub_140833B08 @ 0x140833B08
 * Callers:
 *     sub_1408337BC @ 0x1408337BC (sub_1408337BC.c)
 *     sub_140833A64 @ 0x140833A64 (sub_140833A64.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 */

NTSTATUS __fastcall sub_140833B08(unsigned int a1, UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbx
  wchar_t *v5; // rdx

  v3 = a1;
  RtlAppendUnicodeToString(a2, L"\\REGISTRY\\");
  v4 = 23 * v3;
  RtlAppendUnicodeToString(a2, off_140C02530[v4 + 1]);
  v5 = off_140C02530[v4 + 2];
  if ( !v5 )
  {
    v5 = off_140C02530[v4];
    off_140C02530[v4 + 2] = v5;
  }
  return RtlAppendUnicodeToString(a2, v5);
}
