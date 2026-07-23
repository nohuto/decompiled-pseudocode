/*
 * XREFs of sub_1409D4850 @ 0x1409D4850
 * Callers:
 *     sub_1409D790C @ 0x1409D790C (sub_1409D790C.c)
 *     sub_1409D82D4 @ 0x1409D82D4 (sub_1409D82D4.c)
 * Callees:
 *     ZwSetSystemInformation @ 0x14041EE00 (ZwSetSystemInformation.c)
 *     sub_1409D48D8 @ 0x1409D48D8 (sub_1409D48D8.c)
 */

int __fastcall sub_1409D4850(int a1, int a2)
{
  int *v2; // rax
  _DWORD SystemInformation[2]; // [rsp+30h] [rbp-20h] BYREF
  int *v5; // [rsp+38h] [rbp-18h]
  __int64 v6; // [rsp+40h] [rbp-10h]
  int v7; // [rsp+70h] [rbp+20h] BYREF
  int v8; // [rsp+74h] [rbp+24h]
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF

  v6 = 8LL;
  v9 = 0LL;
  v2 = &v7;
  SystemInformation[1] = 4;
  v5 = &v7;
  v8 = a2;
  SystemInformation[0] = 1;
  v7 = 1;
  if ( a1 )
  {
    if ( a1 == 1 )
      LODWORD(v2) = ZwSetSystemInformation(SystemStoreInformation, SystemInformation, 0x18u);
  }
  else
  {
    LODWORD(v2) = sub_1409D48D8(qword_140D32160, 0, (__int64)&v9);
  }
  return (int)v2;
}
