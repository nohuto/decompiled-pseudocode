/*
 * XREFs of sub_14075B444 @ 0x14075B444
 * Callers:
 *     sub_14075B0E4 @ 0x14075B0E4 (sub_14075B0E4.c)
 *     sub_14075B1B8 @ 0x14075B1B8 (sub_14075B1B8.c)
 *     sub_14075B270 @ 0x14075B270 (sub_14075B270.c)
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_1407ECFCC @ 0x1407ECFCC (sub_1407ECFCC.c)
 *     sub_1407ED0C8 @ 0x1407ED0C8 (sub_1407ED0C8.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140841610 @ 0x140841610 (sub_140841610.c)
 *     sub_1408422F0 @ 0x1408422F0 (sub_1408422F0.c)
 *     sub_140842D98 @ 0x140842D98 (sub_140842D98.c)
 *     sub_140843AA4 @ 0x140843AA4 (sub_140843AA4.c)
 *     sub_140843B58 @ 0x140843B58 (sub_140843B58.c)
 *     sub_140A108BC @ 0x140A108BC (sub_140A108BC.c)
 *     sub_140A10AD0 @ 0x140A10AD0 (sub_140A10AD0.c)
 *     sub_140A111BC @ 0x140A111BC (sub_140A111BC.c)
 *     sub_140A11614 @ 0x140A11614 (sub_140A11614.c)
 *     sub_140A124A4 @ 0x140A124A4 (sub_140A124A4.c)
 *     sub_140A129F4 @ 0x140A129F4 (sub_140A129F4.c)
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 *     sub_140A13308 @ 0x140A13308 (sub_140A13308.c)
 *     sub_140A139FC @ 0x140A139FC (sub_140A139FC.c)
 *     sub_140A14498 @ 0x140A14498 (sub_140A14498.c)
 *     sub_140A1483C @ 0x140A1483C (sub_140A1483C.c)
 *     sub_140A14988 @ 0x140A14988 (sub_140A14988.c)
 *     sub_140A15C98 @ 0x140A15C98 (sub_140A15C98.c)
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 *     sub_140A1641C @ 0x140A1641C (sub_140A1641C.c)
 *     sub_140A16C68 @ 0x140A16C68 (sub_140A16C68.c)
 *     sub_140A16DA4 @ 0x140A16DA4 (sub_140A16DA4.c)
 *     sub_140A16F94 @ 0x140A16F94 (sub_140A16F94.c)
 *     sub_140A17490 @ 0x140A17490 (sub_140A17490.c)
 *     sub_140A177D8 @ 0x140A177D8 (sub_140A177D8.c)
 *     sub_140A1A2F8 @ 0x140A1A2F8 (sub_140A1A2F8.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall sub_14075B444(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x74705041u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, a2);
  return v4;
}
