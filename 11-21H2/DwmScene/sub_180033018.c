/*
 * XREFs of sub_180033018 @ 0x180033018
 * Callers:
 *     sub_180034500 @ 0x180034500 (sub_180034500.c)
 *     sub_18006C83C @ 0x18006C83C (sub_18006C83C.c)
 *     sub_180103E34 @ 0x180103E34 (sub_180103E34.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180029930 @ 0x180029930 (sub_180029930.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180030D80 @ 0x180030D80 (sub_180030D80.c)
 *     sub_180032894 @ 0x180032894 (sub_180032894.c)
 *     sub_180032908 @ 0x180032908 (sub_180032908.c)
 *     sub_180032BB8 @ 0x180032BB8 (sub_180032BB8.c)
 *     sub_18003352C @ 0x18003352C (sub_18003352C.c)
 *     sub_18003ABF8 @ 0x18003ABF8 (sub_18003ABF8.c)
 *     sub_1800802AC @ 0x1800802AC (sub_1800802AC.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_180033018(__int64 a1)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  char *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  __int64 v18; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::Engine::`vftable';
  sub_18003ABF8();
  sub_18003352C(a1 + 1424);
  v2 = *(_QWORD *)(a1 + 1416);
  if ( v2 >= 8 )
    sub_180010884(*(char **)(a1 + 1392), 2 * v2 + 2);
  *(_QWORD *)(a1 + 1408) = 0LL;
  *(_QWORD *)(a1 + 1416) = 7LL;
  *(_WORD *)(a1 + 1392) = 0;
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 1280));
  _Cnd_destroy_in_situ((_Cnd_t)(a1 + 1208));
  if ( *(_DWORD *)(a1 + 1192) )
  {
    sub_180029930(v4, v3);
    JUMPOUT(0x180033526LL);
  }
  v5 = *(_QWORD *)(a1 + 1136);
  if ( v5 )
  {
    sub_180011138(v5, *(_QWORD *)(a1 + 1144));
    sub_180010884(*(char **)(a1 + 1136), (*(_QWORD *)(a1 + 1152) - *(_QWORD *)(a1 + 1136)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 1136) = 0LL;
    *(_QWORD *)(a1 + 1144) = 0LL;
    *(_QWORD *)(a1 + 1152) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 1120) )
    j_LanguageEnumProc(*(_QWORD *)(a1 + 1112));
  sub_1800FC250(a1 + 1104);
  sub_180029C94((__int64 *)(a1 + 1080));
  v6 = *(__int64 **)(a1 + 984);
  if ( v6 )
  {
    sub_180032908(v6 + 2);
    sub_18000B998(v6);
  }
  sub_180010910(a1 + 968);
  v7 = *(_QWORD *)(a1 + 888);
  if ( v7 )
  {
    sub_180011138(v7, *(_QWORD *)(a1 + 896));
    sub_180010884(*(char **)(a1 + 888), (*(_QWORD *)(a1 + 904) - *(_QWORD *)(a1 + 888)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 888) = 0LL;
    *(_QWORD *)(a1 + 896) = 0LL;
    *(_QWORD *)(a1 + 904) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 864);
  if ( v8 )
  {
    sub_180011138(v8, *(_QWORD *)(a1 + 872));
    sub_180010884(*(char **)(a1 + 864), (*(_QWORD *)(a1 + 880) - *(_QWORD *)(a1 + 864)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 864) = 0LL;
    *(_QWORD *)(a1 + 872) = 0LL;
    *(_QWORD *)(a1 + 880) = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 840);
  if ( v9 )
  {
    sub_180011138(v9, *(_QWORD *)(a1 + 848));
    sub_180010884(*(char **)(a1 + 840), (*(_QWORD *)(a1 + 856) - *(_QWORD *)(a1 + 840)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 840) = 0LL;
    *(_QWORD *)(a1 + 848) = 0LL;
    *(_QWORD *)(a1 + 856) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 824) )
    j_LanguageEnumProc(*(_QWORD *)(a1 + 816));
  sub_1800FC250(a1 + 808);
  sub_180032894((__int64 *)(a1 + 728));
  v10 = *(_QWORD *)(a1 + 704);
  if ( v10 )
  {
    sub_1800126E8(v10, *(_QWORD *)(a1 + 712));
    sub_180010884(*(char **)(a1 + 704), (*(_QWORD *)(a1 + 720) - *(_QWORD *)(a1 + 704)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 704) = 0LL;
    *(_QWORD *)(a1 + 712) = 0LL;
    *(_QWORD *)(a1 + 720) = 0LL;
  }
  sub_180010910(a1 + 640);
  v11 = *(char **)(a1 + 616);
  if ( v11 )
  {
    sub_180010884(v11, (*(_QWORD *)(a1 + 632) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 616) = 0LL;
    *(_QWORD *)(a1 + 624) = 0LL;
    *(_QWORD *)(a1 + 632) = 0LL;
  }
  sub_180010910(a1 + 512);
  sub_180010910(a1 + 496);
  sub_180010910(a1 + 480);
  sub_180010910(a1 + 464);
  sub_1800802AC(a1 + 368);
  v12 = *(_QWORD *)(a1 + 344);
  if ( v12 )
  {
    sub_180011138(v12, *(_QWORD *)(a1 + 352));
    sub_180010884(*(char **)(a1 + 344), (*(_QWORD *)(a1 + 360) - *(_QWORD *)(a1 + 344)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 344) = 0LL;
    *(_QWORD *)(a1 + 352) = 0LL;
    *(_QWORD *)(a1 + 360) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 328) )
    j_LanguageEnumProc(*(_QWORD *)(a1 + 320));
  sub_1800FC250(a1 + 312);
  v13 = *(_QWORD *)(a1 + 288);
  if ( v13 )
  {
    sub_180011138(v13, *(_QWORD *)(a1 + 296));
    sub_180010884(*(char **)(a1 + 288), (*(_QWORD *)(a1 + 304) - *(_QWORD *)(a1 + 288)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 288) = 0LL;
    *(_QWORD *)(a1 + 296) = 0LL;
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  v14 = *(char **)(a1 + 256);
  if ( v14 )
  {
    sub_180010884(v14, (*(_QWORD *)(a1 + 272) - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_QWORD *)(a1 + 272) = 0LL;
  }
  sub_180030D80(a1 + 184, a1 + 184, *(char **)(*(_QWORD *)(a1 + 184) + 8LL));
  sub_180010884(*(char **)(a1 + 184), 0x40uLL);
  sub_180032BB8((char **)(a1 + 168));
  v15 = *(_QWORD *)(a1 + 144);
  if ( v15 )
  {
    sub_180011138(v15, *(_QWORD *)(a1 + 152));
    sub_180010884(*(char **)(a1 + 144), (*(_QWORD *)(a1 + 160) - *(_QWORD *)(a1 + 144)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_QWORD *)(a1 + 160) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 128) )
    j_LanguageEnumProc(*(_QWORD *)(a1 + 120));
  sub_1800FC250(a1 + 112);
  v16 = *(_QWORD *)(a1 + 88);
  if ( v16 )
  {
    sub_1800126E8(v16, *(_QWORD *)(a1 + 96));
    sub_180010884(*(char **)(a1 + 88), (*(_QWORD *)(a1 + 104) - *(_QWORD *)(a1 + 88)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v17 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 80);
  if ( v17 )
    (**v17)(v17, 1LL);
  sub_180010910(a1 + 64);
  v18 = *(_QWORD *)(a1 + 40);
  if ( v18 )
  {
    sub_180011138(v18, *(_QWORD *)(a1 + 48));
    sub_180010884(*(char **)(a1 + 40), (*(_QWORD *)(a1 + 56) - *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 24) )
    j_LanguageEnumProc(*(_QWORD *)(a1 + 16));
  return sub_1800FC250(a1 + 8);
}
