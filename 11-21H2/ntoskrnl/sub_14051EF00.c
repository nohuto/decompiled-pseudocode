/*
 * XREFs of sub_14051EF00 @ 0x14051EF00
 * Callers:
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MmGetSystemRoutineAddress @ 0x140759130 (MmGetSystemRoutineAddress.c)
 */

__int64 __fastcall sub_14051EF00(_BYTE *a1)
{
  bool v2; // sf
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v5[14]; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v6; // [rsp+C0h] [rbp+67h] BYREF

  v6 = 0;
  memset(v5, 0, sizeof(v5));
  LODWORD(v5[1]) = 288;
  v5[2] = L"ParallelLoad";
  LODWORD(v5[4]) = 0x4000000;
  v5[3] = &v6;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  MmGetSystemRoutineAddress(&DestinationString);
  v2 = (int)sub_14042A5E0(2LL, L"McUpdate") < 0;
  result = v6;
  if ( !v2 )
    result = v6 & 1;
  *a1 = result;
  return result;
}
