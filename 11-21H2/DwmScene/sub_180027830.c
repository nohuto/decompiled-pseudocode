/*
 * XREFs of sub_180027830 @ 0x180027830
 * Callers:
 *     sub_180027D80 @ 0x180027D80 (sub_180027D80.c)
 *     sub_180059BA0 @ 0x180059BA0 (sub_180059BA0.c)
 *     sub_1800D90D8 @ 0x1800D90D8 (sub_1800D90D8.c)
 *     sub_18010340F @ 0x18010340F (sub_18010340F.c)
 *     sub_18010C93A @ 0x18010C93A (sub_18010C93A.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18001E060 @ 0x18001E060 (sub_18001E060.c)
 *     sub_180026A88 @ 0x180026A88 (sub_180026A88.c)
 *     sub_180026C48 @ 0x180026C48 (sub_180026C48.c)
 *     sub_180029368 @ 0x180029368 (sub_180029368.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_18007B198 @ 0x18007B198 (sub_18007B198.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180027830(__int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax
  volatile signed __int32 *v14; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  sub_180029368();
  sub_180026C48(a1 + 4120, a1 + 4120, *(char **)(*(_QWORD *)(a1 + 4120) + 8LL));
  sub_180010884(*(char **)(a1 + 4120), 0x40uLL);
  sub_1800FC250(a1 + 4104);
  *(_QWORD *)(a1 + 4096) = &Spectre::Engine::IGpuQueryPool::`vftable';
  sub_180010910(a1 + 4080);
  sub_180010910(a1 + 4064);
  sub_180010910(a1 + 4048);
  sub_180010910(a1 + 4024);
  sub_180010910(a1 + 4008);
  sub_180010910(a1 + 3992);
  v2 = *(_QWORD *)(a1 + 3856);
  if ( v2 )
  {
    sub_180026A88(v2, *(_QWORD *)(a1 + 3864));
    sub_180010884(*(char **)(a1 + 3856), (*(_QWORD *)(a1 + 3872) - *(_QWORD *)(a1 + 3856)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 3856) = 0LL;
    *(_QWORD *)(a1 + 3864) = 0LL;
    *(_QWORD *)(a1 + 3872) = 0LL;
  }
  sub_180010910(a1 + 3840);
  sub_18000B4C0(a1 + 1280, 40LL, 64LL);
  sub_18007B198(a1 + 1056);
  sub_18007B198(a1 + 832);
  sub_18007B198(a1 + 608);
  sub_180010910(a1 + 592);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 512));
  sub_18001E060(a1 + 496, a1 + 496, *(char **)(*(_QWORD *)(a1 + 496) + 8LL));
  sub_180010884(*(char **)(a1 + 496), 0x68uLL);
  sub_180010910(a1 + 360);
  v3 = *(char **)(a1 + 336);
  if ( v3 )
  {
    sub_180010884(v3, (*(_QWORD *)(a1 + 352) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 336) = 0LL;
    *(_QWORD *)(a1 + 344) = 0LL;
    *(_QWORD *)(a1 + 352) = 0LL;
  }
  sub_180010910(a1 + 272);
  v6 = *(_QWORD *)(a1 + 248);
  if ( v6 )
  {
    sub_1800126E8(v6, *(_QWORD *)(a1 + 256));
    sub_180010884(*(char **)(a1 + 248), (*(_QWORD *)(a1 + 264) - *(_QWORD *)(a1 + 248)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 232);
  if ( v7 >= 8 )
    sub_180010884(*(char **)(a1 + 208), 2 * v7 + 2);
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 7LL;
  *(_WORD *)(a1 + 208) = 0;
  v8 = *(_QWORD *)(a1 + 200);
  if ( v8 >= 8 )
    sub_180010884(*(char **)(a1 + 176), 2 * v8 + 2);
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 7LL;
  *(_WORD *)(a1 + 176) = 0;
  v9 = *(_QWORD *)(a1 + 168);
  if ( v9 >= 8 )
    sub_180010884(*(char **)(a1 + 144), 2 * v9 + 2);
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 7LL;
  *(_WORD *)(a1 + 144) = 0;
  v10 = *(_QWORD *)(a1 + 136);
  if ( v10 >= 8 )
    sub_180010884(*(char **)(a1 + 112), 2 * v10 + 2);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 7LL;
  *(_WORD *)(a1 + 112) = 0;
  v11 = *(_QWORD *)(a1 + 104);
  if ( v11 >= 8 )
    sub_180010884(*(char **)(a1 + 80), 2 * v11 + 2);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_WORD *)(a1 + 80) = 0;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    sub_180011138(v12, *(_QWORD *)(a1 + 64));
    sub_180010884(*(char **)(a1 + 56), (*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 40) )
    j_LanguageEnumProc(*(_QWORD *)(a1 + 32), v11, v4, v5);
  result = sub_1800FC250(a1 + 24);
  v14 = *(volatile signed __int32 **)(a1 + 16);
  if ( v14 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  return result;
}
