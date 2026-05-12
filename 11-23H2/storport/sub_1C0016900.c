/*
 * XREFs of sub_1C0016900 @ 0x1C0016900
 * Callers:
 *     sub_1C00152B0 @ 0x1C00152B0 (sub_1C00152B0.c)
 *     sub_1C0016130 @ 0x1C0016130 (sub_1C0016130.c)
 * Callees:
 *     sub_1C00A1480 @ 0x1C00A1480 (sub_1C00A1480.c)
 */

__int64 __fastcall sub_1C0016900(__int64 a1)
{
  struct _UNICODE_STRING v3; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v3, L"PowerCycleCount");
  return sub_1C00A1480(*(_QWORD *)(a1 + 8), (unsigned int)&DestinationString, (unsigned int)&v3, 4, a1 + 3264, 4);
}
