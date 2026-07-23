/*
 * XREFs of sub_1409A216C @ 0x1409A216C
 * Callers:
 *     sub_1409A2AF4 @ 0x1409A2AF4 (sub_1409A2AF4.c)
 * Callees:
 *     sub_1405DC0A0 @ 0x1405DC0A0 (sub_1405DC0A0.c)
 *     sub_1409A2D68 @ 0x1409A2D68 (sub_1409A2D68.c)
 *     sub_1409A2E54 @ 0x1409A2E54 (sub_1409A2E54.c)
 */

__int64 __fastcall sub_1409A216C(int *a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    result = *(unsigned int *)(a2 + 72);
    if ( (result & 1) != 0 )
    {
      memset(v6, 0, sizeof(v6));
      v7 = 0LL;
      sub_1409A2D68((unsigned int)v6, (_DWORD)a1, a2, 5, (__int64)sub_1405DC0A0, a3);
      sub_1405DC0A0(a3, *a1);
      return sub_1409A2E54(v6, 0LL);
    }
  }
  return result;
}
