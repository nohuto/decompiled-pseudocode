/*
 * XREFs of sub_1409A20D0 @ 0x1409A20D0
 * Callers:
 *     sub_1409A1E04 @ 0x1409A1E04 (sub_1409A1E04.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409A2D68 @ 0x1409A2D68 (sub_1409A2D68.c)
 *     sub_1409A2E54 @ 0x1409A2E54 (sub_1409A2E54.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 */

void __fastcall sub_1409A20D0(int a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  int v5; // [rsp+28h] [rbp-40h]
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 )
  {
    v5 = *(_DWORD *)(a2 + 596);
    memset(v6, 0, sizeof(v6));
    v7 = 0LL;
    sub_1409A2D68((unsigned int)v6, a1, a2, 1, v2, v5);
    v4 = sub_14042A5E0(*(_QWORD *)(a2 + 24), *(unsigned int *)(a2 + 596));
    sub_1409A2E54(v6, (unsigned int)v4);
    if ( v4 < 0 )
      sub_1409A8628("TtmpCallAssignedToTerminal", 2380LL, (unsigned int)v4, 0xFFFFFFFFLL);
  }
}
