/*
 * XREFs of sub_140B2A640 @ 0x140B2A640
 * Callers:
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     HalWheaUpdateCmciPolicy @ 0x1403DA050 (HalWheaUpdateCmciPolicy.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 */

__int64 sub_140B2A640()
{
  bool v0; // zf
  int v1; // ecx
  int v2; // ecx
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG Type; // [rsp+50h] [rbp+10h] BYREF
  ULONG ResultDataSize; // [rsp+58h] [rbp+18h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF

  ResultDataSize = 0;
  Type = 0;
  Data = 0;
  DestinationString = 0LL;
  if ( dword_140C0C8B8 != -1 )
    byte_140D04C99 = dword_140C0C8B8 != 0;
  if ( dword_140C0C8AC != -1 )
  {
    v0 = dword_140C0C8AC == 0;
    goto LABEL_8;
  }
  RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
    && Type == 4
    && ResultDataSize == 4 )
  {
    v0 = Data == 0;
LABEL_8:
    byte_140CE1AD3 = !v0;
  }
  if ( dword_140C0C8B0 != -1 )
    byte_140D04C98 = dword_140C0C8B0 != 0;
  v1 = dword_140C0C8A4;
  if ( (unsigned int)(dword_140C0C8A4 - 1) <= 0xFFFF
    || (v1 = dword_140C0C8B4, (unsigned int)(dword_140C0C8B4 - 1) <= 0xFFFF) )
  {
    dword_140C0C8C0 = v1;
  }
  v2 = dword_140C0C8A8;
  if ( (unsigned int)(dword_140C0C8A8 - 1) <= 0xFFFF
    || (v2 = dword_140C0C8BC, (unsigned int)(dword_140C0C8BC - 1) <= 0xFFFF) )
  {
    dword_140C0C8D0 = v2;
  }
  if ( (unsigned int)dword_140C0C89C <= 0x93A80 )
    qword_140C0DA98 = 10000000LL * (unsigned int)dword_140C0C89C;
  if ( !dword_140C0C8C0 || !dword_140C0C8D0 )
    byte_140D04C98 = 1;
  if ( dword_140C0C8A0 != -1 )
    byte_140C0DA84 = dword_140C0C8A0 != 0;
  if ( dword_140C0C894 != -1 )
    byte_140C0C8C8 = dword_140C0C894 != 0;
  byte_140C54A6C = byte_140C0C8C8;
  if ( dword_140C0C898 != -1 )
    dword_140C0C8CC = dword_140C0C898;
  HalWheaUpdateCmciPolicy(8, dword_140C0C8CC);
  if ( dword_140C0C88C != -1 )
    dword_140C0C8C4 = dword_140C0C88C;
  HalWheaUpdateCmciPolicy(9, dword_140C0C8C4);
  if ( dword_140C0C890 != -1 )
  {
    dword_140C0DAA0 = dword_140C0C890;
    HalWheaUpdateCmciPolicy(10, dword_140C0C890);
  }
  if ( dword_140C0C884 != -1 )
  {
    dword_140C0DA8C = dword_140C0C884;
    HalWheaUpdateCmciPolicy(11, dword_140C0C884);
  }
  if ( dword_140C0C888 != -1 )
  {
    dword_140C0DA90 = dword_140C0C888;
    HalWheaUpdateCmciPolicy(12, dword_140C0C888);
  }
  result = (unsigned int)dword_140C0C87C;
  if ( dword_140C0C87C != -1 )
    dword_140C0DA94 = dword_140C0C87C;
  if ( dword_140C0C880 != -1 )
    dword_140C0DA88 = dword_140C0C880;
  if ( dword_140C0C874 != -1 )
    dword_140C0DA80 = dword_140C0C874;
  if ( dword_140C0C878 != -1 )
    byte_140D01199 = dword_140C0C878 != 0;
  if ( dword_140C0C8B8 != -1 )
    dword_140D04C94 |= 1u;
  if ( dword_140C0C8AC != -1 )
    dword_140D04C94 |= 2u;
  if ( dword_140C0C8B0 != -1 )
    dword_140D04C94 |= 4u;
  if ( dword_140C0C8A4 != -1 )
    dword_140D04C94 |= 8u;
  if ( dword_140C0C8A8 != -1 )
    dword_140D04C94 |= 0x10u;
  if ( dword_140C0C89C != -1 )
    dword_140D04C94 |= 0x20u;
  if ( dword_140C0C8BC != -1 )
    dword_140D04C94 |= 0x40u;
  if ( dword_140C0C8B4 != -1 )
    dword_140D04C94 |= 0x80u;
  if ( dword_140C0C8A0 != -1 )
    dword_140D04C94 |= 0x100u;
  if ( dword_140C0C894 != -1 )
    dword_140D04C94 |= 0x200u;
  if ( dword_140C0C898 != -1 )
    dword_140D04C94 |= 0x400u;
  if ( dword_140C0C88C != -1 )
    dword_140D04C94 |= 0x800u;
  if ( dword_140C0C890 != -1 )
    dword_140D04C94 |= 0x1000u;
  if ( dword_140C0C884 != -1 )
    dword_140D04C94 |= 0x2000u;
  if ( dword_140C0C888 != -1 )
    dword_140D04C94 |= 0x4000u;
  if ( dword_140C0C87C != -1 )
    dword_140D04C94 |= 0x8000u;
  if ( dword_140C0C880 != -1 )
    dword_140D04C94 |= 0x10000u;
  if ( dword_140C0C874 != -1 )
    dword_140D04C94 |= 0x20000u;
  if ( dword_140C0C878 != -1 )
    dword_140D04C94 |= 0x40000u;
  return result;
}
