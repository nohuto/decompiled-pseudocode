/*
 * XREFs of sub_18002D880 @ 0x18002D880
 * Callers:
 *     sub_18002DC00 @ 0x18002DC00 (sub_18002DC00.c)
 *     sub_1800DEF9C @ 0x1800DEF9C (sub_1800DEF9C.c)
 *     sub_1800F190C @ 0x1800F190C (sub_1800F190C.c)
 *     unknown_libname_79 @ 0x18010CB71 (unknown_libname_79.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180026A88 @ 0x180026A88 (sub_180026A88.c)
 *     sub_18002CC9C @ 0x18002CC9C (sub_18002CC9C.c)
 *     sub_18002D64C @ 0x18002D64C (sub_18002D64C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002D880(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  __int64 *v6; // rdi
  char **v7; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1 + 208;
  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  v3 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 208) = 0LL;
  v11[0] = v3;
  v4 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = 0LL;
  v11[1] = v4;
  v12 = 0LL;
  sub_180010910((__int64)v11);
  sub_180010910((__int64)&v12);
  v5 = *(volatile signed __int32 **)(a1 + 496);
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *(__int64 **)(a1 + 472);
  if ( v6 )
  {
    sub_18002D64C(v6 + 27);
    sub_18002D64C(v6 + 2);
    sub_18000B998(v6);
  }
  sub_180010910(a1 + 456);
  sub_180010910(a1 + 440);
  v7 = *(char ***)(a1 + 416);
  if ( v7 )
  {
    sub_18002CC9C(v7, *(char ***)(a1 + 424));
    sub_180010884(*(char **)(a1 + 416), 8 * ((__int64)(*(_QWORD *)(a1 + 432) - *(_QWORD *)(a1 + 416)) >> 3));
    *(_QWORD *)(a1 + 416) = 0LL;
    *(_QWORD *)(a1 + 424) = 0LL;
    *(_QWORD *)(a1 + 432) = 0LL;
  }
  sub_180010910(a1 + 384);
  _Mtx_destroy_in_situ((_Mtx_t)(a1 + 304));
  sub_180010910(a1 + 256);
  sub_180010910(a1 + 240);
  sub_180010910(v1);
  v8 = *(_QWORD *)(a1 + 128);
  if ( v8 )
  {
    sub_180026A88(v8, *(_QWORD *)(a1 + 136));
    sub_180010884(*(char **)(a1 + 128), (*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v9 = *(volatile signed __int32 **)(a1 + 88);
  if ( v9 && _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  return sub_18002D7E4(a1);
}
