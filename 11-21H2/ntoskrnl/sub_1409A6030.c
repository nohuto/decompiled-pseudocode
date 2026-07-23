/*
 * XREFs of sub_1409A6030 @ 0x1409A6030
 * Callers:
 *     sub_1409A4620 @ 0x1409A4620 (sub_1409A4620.c)
 * Callees:
 *     sub_1409A556C @ 0x1409A556C (sub_1409A556C.c)
 *     sub_1409A5E3C @ 0x1409A5E3C (sub_1409A5E3C.c)
 *     sub_1409A61C4 @ 0x1409A61C4 (sub_1409A61C4.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409A97E0 @ 0x1409A97E0 (sub_1409A97E0.c)
 */

__int64 __fastcall sub_1409A6030(unsigned int *a1, unsigned int a2, char a3)
{
  char v4; // bl
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v14 = 0LL;
  if ( sub_1409A556C((__int64)a1, a2, &v14) )
  {
    v7 = v14;
    v8 = *(_DWORD *)(v14 + 40);
    if ( a3 )
    {
      if ( v8 == -1 )
      {
        v9 = 1088LL;
        v10 = 3221225621LL;
LABEL_5:
        sub_1409A8628("TtmpUpdateDisplayRequiredPowerRequest", v9, v10, 0xFFFFFFFFLL);
        goto LABEL_13;
      }
      v11 = v8 + 1;
      *(_DWORD *)(v14 + 40) = v11;
      if ( v11 == 1 )
        sub_1409A61C4(a1, 0LL, v7);
    }
    else
    {
      if ( !v8 )
      {
        v9 = 1113LL;
        v10 = 3221225485LL;
        goto LABEL_5;
      }
      v12 = v8 - 1;
      *(_DWORD *)(v14 + 40) = v12;
      if ( !v12 )
      {
        sub_1409A61C4(a1, 0LL, v7);
        sub_1409A5E3C((__int64)a1, a2);
      }
    }
    v4 = 1;
  }
LABEL_13:
  LOBYTE(v7) = v4;
  return sub_1409A97E0(*a1, a2, v7);
}
