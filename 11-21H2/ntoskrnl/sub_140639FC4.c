/*
 * XREFs of sub_140639FC4 @ 0x140639FC4
 * Callers:
 *     sub_14082DE40 @ 0x14082DE40 (sub_14082DE40.c)
 *     ExSetLicenseTamperState @ 0x1409F97C0 (ExSetLicenseTamperState.c)
 *     sub_1409F9AD0 @ 0x1409F9AD0 (sub_1409F9AD0.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 * Callees:
 *     ntoskrnl_20 @ 0x1406A71F0 (ntoskrnl_20.c)
 */

__int64 __fastcall sub_140639FC4(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 46988) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ntoskrnl_20(a1, v3, 2LL, 0LL);
}
