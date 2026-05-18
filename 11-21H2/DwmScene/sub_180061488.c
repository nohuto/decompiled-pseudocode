/*
 * XREFs of sub_180061488 @ 0x180061488
 * Callers:
 *     sub_1800617A0 @ 0x1800617A0 (sub_1800617A0.c)
 *     sub_18009D100 @ 0x18009D100 (sub_18009D100.c)
 *     sub_1800A1D00 @ 0x1800A1D00 (sub_1800A1D00.c)
 *     sub_1800A82E0 @ 0x1800A82E0 (sub_1800A82E0.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_0 @ 0x180106A3D (-dtor$0@-0--_Getcat@-$ctype@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_0.c)
 *     sub_180106E3E @ 0x180106E3E (sub_180106E3E.c)
 *     sub_180107048 @ 0x180107048 (sub_180107048.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001FF34 @ 0x18001FF34 (sub_18001FF34.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_180060694 @ 0x180060694 (sub_180060694.c)
 *     sub_1800609D0 @ 0x1800609D0 (sub_1800609D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_180061488(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = a1 + 1704;
  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  v4 = *(_QWORD *)(a1 + 1760);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  sub_180010910(a1 + 1680);
  sub_180010910(a1 + 1664);
  sub_180010910(a1 + 1648);
  sub_180010910(a1 + 1632);
  sub_1800609D0(a1 + 1616, a1 + 1616, *(char **)(*(_QWORD *)(a1 + 1616) + 8LL));
  sub_180010884(*(char **)(a1 + 1616), 0x58uLL);
  sub_180029C94((__int64 *)(a1 + 448));
  v5 = *(_QWORD *)(a1 + 416);
  if ( v5 )
  {
    sub_18001FF34(v5, *(_QWORD *)(a1 + 424));
    sub_180010884(*(char **)(a1 + 416), (*(_QWORD *)(a1 + 432) - *(_QWORD *)(a1 + 416)) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)(a1 + 416) = 0LL;
    *(_QWORD *)(a1 + 424) = 0LL;
    *(_QWORD *)(a1 + 432) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 388) )
    *(_BYTE *)(a1 + 388) = 0;
  v6 = *(_QWORD *)(a1 + 272);
  if ( v6 >= 0x10 )
    sub_180010884(*(char **)(a1 + 248), v6 + 1);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 15LL;
  *(_BYTE *)(a1 + 248) = 0;
  v7 = *(_QWORD *)(a1 + 240);
  if ( v7 >= 0x10 )
    sub_180010884(*(char **)(a1 + 216), v7 + 1);
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 15LL;
  *(_BYTE *)(a1 + 216) = 0;
  v8 = *(_QWORD *)(a1 + 208);
  if ( v8 >= 0x10 )
    sub_180010884(*(char **)(a1 + 184), v8 + 1);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 15LL;
  *(_BYTE *)(a1 + 184) = 0;
  sub_180010910(a1 + 152);
  sub_180010910(a1 + 136);
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    sub_180060694(v9, *(_QWORD *)(a1 + 112));
    sub_180010884(*(char **)(a1 + 104), 16 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 4));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return sub_180048280(a1);
}
