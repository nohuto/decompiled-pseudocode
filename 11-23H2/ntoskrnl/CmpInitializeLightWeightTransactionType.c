/*
 * XREFs of CmpInitializeLightWeightTransactionType @ 0x14080C9E0
 * Callers:
 *     CmInitSystem1 @ 0x140B3626C (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObjectTypeEx @ 0x14081F4F0 (ObCreateObjectTypeEx.c)
 */

__int64 CmpInitializeLightWeightTransactionType()
{
  _QWORD v1[15]; // [rsp+30h] [rbp-29h] BYREF

  memset(v1, 0, sizeof(v1));
  v1[6] = 0LL;
  v1[3] = 0x1F003F001F003FLL;
  LOWORD(v1[0]) = 120;
  v1[1] = 0x12000100000030LL;
  v1[7] = 0LL;
  BYTE2(v1[0]) = BYTE2(v1[0]) & 0xE3 | 0xC;
  v1[8] = CmpCloseLightWeightTransaction;
  v1[9] = CmpDeleteLightWeightTransaction;
  v1[2] = 0x1200180012003ELL;
  LODWORD(v1[5]) = 32;
  HIDWORD(v1[4]) = 1;
  return ObCreateObjectTypeEx(&CmpTransactionTypeNameString, (__int64)&CmRegistryTransactionType);
}
