/*
 * XREFs of sub_140781748 @ 0x140781748
 * Callers:
 *     sub_1406CC2C8 @ 0x1406CC2C8 (sub_1406CC2C8.c)
 *     sub_140781DE0 @ 0x140781DE0 (sub_140781DE0.c)
 *     sub_14083E6C0 @ 0x14083E6C0 (sub_14083E6C0.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_140781790 @ 0x140781790 (sub_140781790.c)
 */

NTSTATUS __fastcall sub_140781748(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return sub_140781790(a1, &DestinationString, a4);
  return result;
}
