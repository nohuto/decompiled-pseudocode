/*
 * XREFs of HvlSvmDeletePrQueue @ 0x140548A40
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14039DD80 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmDeletePrQueue(unsigned int a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = a1;
  v1 = HvcallFastExtended(65704LL, (__int64)v3, 8u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
