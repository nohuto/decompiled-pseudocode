/*
 * XREFs of sub_14078014C @ 0x14078014C
 * Callers:
 *     sub_1403C5610 @ 0x1403C5610 (sub_1403C5610.c)
 *     sub_14067B470 @ 0x14067B470 (sub_14067B470.c)
 *     sub_1406997B8 @ 0x1406997B8 (sub_1406997B8.c)
 *     sub_1406BE094 @ 0x1406BE094 (sub_1406BE094.c)
 *     sub_1406C1D24 @ 0x1406C1D24 (sub_1406C1D24.c)
 *     sub_1406E2FE8 @ 0x1406E2FE8 (sub_1406E2FE8.c)
 *     sub_1406E6424 @ 0x1406E6424 (sub_1406E6424.c)
 *     sub_14076CE48 @ 0x14076CE48 (sub_14076CE48.c)
 *     sub_14076D4A4 @ 0x14076D4A4 (sub_14076D4A4.c)
 *     sub_14077F420 @ 0x14077F420 (sub_14077F420.c)
 *     sub_140781268 @ 0x140781268 (sub_140781268.c)
 *     sub_140781A70 @ 0x140781A70 (sub_140781A70.c)
 *     sub_14080B090 @ 0x14080B090 (sub_14080B090.c)
 *     sub_14080BFE0 @ 0x14080BFE0 (sub_14080BFE0.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     sub_14082EC0C @ 0x14082EC0C (sub_14082EC0C.c)
 *     sub_14083DA50 @ 0x14083DA50 (sub_14083DA50.c)
 *     sub_14083DC20 @ 0x14083DC20 (sub_14083DC20.c)
 *     sub_14083DE38 @ 0x14083DE38 (sub_14083DE38.c)
 *     sub_14083DEC8 @ 0x14083DEC8 (sub_14083DEC8.c)
 *     sub_14083E2B8 @ 0x14083E2B8 (sub_14083E2B8.c)
 *     sub_14094017C @ 0x14094017C (sub_14094017C.c)
 *     sub_140946BB8 @ 0x140946BB8 (sub_140946BB8.c)
 *     sub_14094CAB8 @ 0x14094CAB8 (sub_14094CAB8.c)
 *     sub_140952178 @ 0x140952178 (sub_140952178.c)
 *     sub_140955274 @ 0x140955274 (sub_140955274.c)
 *     sub_140955628 @ 0x140955628 (sub_140955628.c)
 *     sub_140A23328 @ 0x140A23328 (sub_140A23328.c)
 *     sub_140A23A34 @ 0x140A23A34 (sub_140A23A34.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 *     sub_140A25AC0 @ 0x140A25AC0 (sub_140A25AC0.c)
 *     sub_140A264F4 @ 0x140A264F4 (sub_140A264F4.c)
 *     sub_140A26994 @ 0x140A26994 (sub_140A26994.c)
 *     sub_140A281F8 @ 0x140A281F8 (sub_140A281F8.c)
 *     sub_140A28FC4 @ 0x140A28FC4 (sub_140A28FC4.c)
 *     sub_140A293B4 @ 0x140A293B4 (sub_140A293B4.c)
 *     sub_140A2A3F4 @ 0x140A2A3F4 (sub_140A2A3F4.c)
 *     sub_140A2C72C @ 0x140A2C72C (sub_140A2C72C.c)
 *     sub_140B0046C @ 0x140B0046C (sub_140B0046C.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 *     sub_140B0F0F4 @ 0x140B0F0F4 (sub_140B0F0F4.c)
 *     sub_140B0F180 @ 0x140B0F180 (sub_140B0F180.c)
 *     sub_140B23340 @ 0x140B23340 (sub_140B23340.c)
 *     sub_140B28AB0 @ 0x140B28AB0 (sub_140B28AB0.c)
 *     sub_140B501D0 @ 0x140B501D0 (sub_140B501D0.c)
 *     sub_140B503E0 @ 0x140B503E0 (sub_140B503E0.c)
 * Callees:
 *     sub_1407801B8 @ 0x1407801B8 (sub_1407801B8.c)
 */

__int64 __fastcall sub_14078014C(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // r8

  v4 = *(_QWORD *)(a1 + 8LL * a2 + 96);
  if ( !v4 )
  {
    if ( a2 > 11 )
    {
      if ( a2 <= 13 || a2 > 15 )
        goto LABEL_9;
    }
    else if ( a2 < 9 && a2 != 5 )
    {
      goto LABEL_9;
    }
    v6 = *(_QWORD *)(a1 + 56);
    v4 = v6 - 16;
    if ( v6 != a1 + 56 )
    {
LABEL_10:
      *(_QWORD *)(a1 + 8LL * a2 + 96) = v4;
      return sub_1407801B8(a1, v4, (unsigned int)a2, a3);
    }
LABEL_9:
    v4 = *(_QWORD *)(a1 + 88);
    goto LABEL_10;
  }
  return sub_1407801B8(a1, v4, (unsigned int)a2, a3);
}
