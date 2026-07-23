/*
 * XREFs of sub_1409A2BAC @ 0x1409A2BAC
 * Callers:
 *     sub_1409A1E04 @ 0x1409A1E04 (sub_1409A1E04.c)
 * Callees:
 *     sub_1409A229C @ 0x1409A229C (sub_1409A229C.c)
 *     sub_1409A2C7C @ 0x1409A2C7C (sub_1409A2C7C.c)
 *     sub_1409A3220 @ 0x1409A3220 (sub_1409A3220.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

char __fastcall sub_1409A2BAC(__int64 a1, __int64 a2)
{
  int v2; // r8d
  char v3; // bl
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // r8
  unsigned int v9; // r8d
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 596);
  v3 = 0;
  v11 = 0LL;
  if ( v2 != -1 )
  {
    v6 = sub_1409A3220(&v11, a1);
    if ( v6 >= 0 )
    {
      v7 = v11;
      v8 = *(unsigned int *)(v11 + 276);
      if ( (*(_DWORD *)(a1 + 4) & 8) != 0 || (unsigned int)(v8 - 2) > 1 )
      {
        sub_1409A2C7C(a1, a2, v8);
        v9 = *(_DWORD *)(v7 + 48);
        if ( v9 == 2 && *(char *)(a2 + 600) >= 0 )
          v9 = 1;
        if ( *(_QWORD *)(a2 + 64) )
          sub_1409A229C(a1, a2, v9);
      }
      else
      {
        return 1;
      }
    }
    else
    {
      sub_1409A8628("TtmpPushTerminalState", 3179LL, (unsigned int)v6, 0xFFFFFFFFLL);
    }
  }
  return v3;
}
