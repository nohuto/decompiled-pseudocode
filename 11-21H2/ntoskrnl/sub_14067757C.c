/*
 * XREFs of sub_14067757C @ 0x14067757C
 * Callers:
 *     SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140206FA0 (SeConvertSecurityDescriptorToStringSecurityDescriptor.c)
 *     SeConvertStringSidToSid @ 0x1403CBD40 (SeConvertStringSidToSid.c)
 *     sub_140675DA8 @ 0x140675DA8 (sub_140675DA8.c)
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_1406768BC @ 0x1406768BC (sub_1406768BC.c)
 *     sub_140676AC0 @ 0x140676AC0 (sub_140676AC0.c)
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 *     sub_1406775C8 @ 0x1406775C8 (sub_1406775C8.c)
 *     sub_1406C85A0 @ 0x1406C85A0 (sub_1406C85A0.c)
 *     sub_140743E60 @ 0x140743E60 (sub_140743E60.c)
 *     sub_140843D74 @ 0x140843D74 (sub_140843D74.c)
 *     sub_1409D00CC @ 0x1409D00CC (sub_1409D00CC.c)
 *     sub_1409D01AC @ 0x1409D01AC (sub_1409D01AC.c)
 *     sub_1409D0360 @ 0x1409D0360 (sub_1409D0360.c)
 *     sub_1409D0420 @ 0x1409D0420 (sub_1409D0420.c)
 *     sub_1409D0588 @ 0x1409D0588 (sub_1409D0588.c)
 *     sub_1409D0A60 @ 0x1409D0A60 (sub_1409D0A60.c)
 *     sub_1409D1048 @ 0x1409D1048 (sub_1409D1048.c)
 *     sub_1409D11F4 @ 0x1409D11F4 (sub_1409D11F4.c)
 *     sub_1409D1418 @ 0x1409D1418 (sub_1409D1418.c)
 *     sub_1409D1A80 @ 0x1409D1A80 (sub_1409D1A80.c)
 *     sub_1409D1D04 @ 0x1409D1D04 (sub_1409D1D04.c)
 *     sub_1409D23E8 @ 0x1409D23E8 (sub_1409D23E8.c)
 *     sub_1409D3004 @ 0x1409D3004 (sub_1409D3004.c)
 *     sub_1409D3874 @ 0x1409D3874 (sub_1409D3874.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_14067757C(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x64536553u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, Size);
  return v3;
}
