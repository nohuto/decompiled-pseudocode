/*
 * XREFs of sub_1409A21EC @ 0x1409A21EC
 * Callers:
 *     sub_1409A2AF4 @ 0x1409A2AF4 (sub_1409A2AF4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409A2D68 @ 0x1409A2D68 (sub_1409A2D68.c)
 *     sub_1409A2E54 @ 0x1409A2E54 (sub_1409A2E54.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

void __fastcall sub_1409A21EC(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v6; // ebx
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  v3 = *(_QWORD *)(a2 + 56);
  if ( v3 )
  {
    memset(v7, 0, sizeof(v7));
    v8 = 0LL;
    sub_1409A2D68((unsigned int)v7, a1, a2, 4, v3, a3);
    v6 = sub_14042A5E0(*(_QWORD *)(a2 + 24), a3);
    sub_1409A2E54(v7, (unsigned int)v6);
    if ( v6 < 0 )
      sub_1409A8628("TtmpCallSetDisplayState", 2440LL, (unsigned int)v6, 0xFFFFFFFFLL);
  }
}
