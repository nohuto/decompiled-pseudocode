/*
 * XREFs of sub_1409A2EE4 @ 0x1409A2EE4
 * Callers:
 *     sub_1409A2AF4 @ 0x1409A2AF4 (sub_1409A2AF4.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_1409A2D68 @ 0x1409A2D68 (sub_1409A2D68.c)
 *     sub_1409A2E54 @ 0x1409A2E54 (sub_1409A2E54.c)
 */

char __fastcall sub_1409A2EE4(int *a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  _OWORD v5[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v6; // [rsp+60h] [rbp-18h]
  unsigned int Buffer; // [rsp+90h] [rbp+18h] BYREF

  Buffer = a3;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v3 = *(_DWORD *)(a2 + 72);
    if ( (v3 & 1) != 0 )
    {
      memset(v5, 0, sizeof(v5));
      v6 = 0LL;
      sub_1409A2D68((__int64)v5, a1, a2, 6, (__int64)ZwUpdateWnfStateData, a3);
      ZwUpdateWnfStateData(&stru_1400133C0, &Buffer, 4u, 0LL, 0LL, 0, 0);
      LOBYTE(v3) = sub_1409A2E54((__int64)v5, 0);
    }
  }
  return v3;
}
