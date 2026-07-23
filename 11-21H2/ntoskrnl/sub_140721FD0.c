/*
 * XREFs of sub_140721FD0 @ 0x140721FD0
 * Callers:
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_14067E8E0 @ 0x14067E8E0 (sub_14067E8E0.c)
 *     sub_14067E9B8 @ 0x14067E9B8 (sub_14067E9B8.c)
 *     sub_14067EF3C @ 0x14067EF3C (sub_14067EF3C.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_1406A50C8 @ 0x1406A50C8 (sub_1406A50C8.c)
 *     sub_1406A52D4 @ 0x1406A52D4 (sub_1406A52D4.c)
 *     sub_1406A7690 @ 0x1406A7690 (sub_1406A7690.c)
 *     sub_1406EB534 @ 0x1406EB534 (sub_1406EB534.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_140720F74 @ 0x140720F74 (sub_140720F74.c)
 *     sub_140721D00 @ 0x140721D00 (sub_140721D00.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C3070 @ 0x1407C3070 (sub_1407C3070.c)
 *     sub_1407C3490 @ 0x1407C3490 (sub_1407C3490.c)
 *     sub_1407C8AE0 @ 0x1407C8AE0 (sub_1407C8AE0.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB45A0 @ 0x140AB45A0 (sub_140AB45A0.c)
 * Callees:
 *     sub_1409196EC @ 0x1409196EC (sub_1409196EC.c)
 */

char __fastcall sub_140721FD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r8

  if ( !a1 || !a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 && (v4 = *(_QWORD *)(a2 + 56)) != 0 )
    return v3 == v4;
  else
    return sub_1409196EC(a1 + 88, a2 + 88);
}
