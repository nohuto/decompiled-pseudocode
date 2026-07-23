/*
 * XREFs of sub_140B25110 @ 0x140B25110
 * Callers:
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 */

NTSTATUS sub_140B25110()
{
  __int64 v0; // rax
  unsigned __int64 *v1; // rbx
  __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned __int64 *v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+20h] BYREF
  ULONG Type; // [rsp+68h] [rbp+28h] BYREF
  int Data; // [rsp+70h] [rbp+30h] BYREF

  dword_140C1D120 = 50000;
  dword_140C1E1D0 = 50000;
  v0 = 2 * qword_140D069F8;
  Data = 0;
  qword_140D06C58 = 2 * qword_140D069F8;
  ResultDataSize = 0;
  Type = 0;
  DestinationString = 0LL;
  word_140C1D11C = 0;
  word_140C1E1CC = 0;
  word_140C1D125 = 60;
  word_140C1E1D5 = 60;
  byte_140C1D124 = 40;
  byte_140C1E1D4 = 40;
  if ( !byte_140C09804 )
    v0 = 90 * qword_140D069F8;
  qword_140D06E20 = v0;
  v1 = (unsigned __int64 *)&unk_140D05670;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1LL )
      *v1 = sub_14029394C(v3, 0x989680uLL, qword_140D069F8);
    v1 += 3;
    --v2;
  }
  while ( v2 );
  v4 = (unsigned __int64 *)&unk_140D05C40;
  v5 = 37LL;
  do
  {
    v6 = v4[1];
    if ( v6 != -1LL )
      *v4 = sub_14029394C(v6, 0x989680uLL, qword_140D069F8);
    v4 += 3;
    --v5;
  }
  while ( v5 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
  if ( result >= 0 && ResultDataSize == 4 && Type == 4 )
    byte_140D06A4E = Data != 0;
  if ( dword_140D050BC == -1 )
    dword_140D050BC = 0;
  return result;
}
