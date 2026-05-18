/*
 * XREFs of sub_18003B3E4 @ 0x18003B3E4
 * Callers:
 *     sub_18003B6A0 @ 0x18003B6A0 (sub_18003B6A0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18001B880 @ 0x18001B880 (sub_18001B880.c)
 *     sub_18003182C @ 0x18003182C (sub_18003182C.c)
 *     sub_1800385C8 @ 0x1800385C8 (sub_1800385C8.c)
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 *     sub_18003E0C8 @ 0x18003E0C8 (sub_18003E0C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_18003B3E4(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  _QWORD *v4; // rsi
  _QWORD *j; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  volatile signed __int32 *v15; // rcx
  volatile signed __int32 *v16; // rcx
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rcx
  volatile signed __int32 *v19; // rcx
  void **result; // rax
  volatile signed __int32 *v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::SceneNode::`vftable';
  sub_18003E0C8();
  v2 = *(_QWORD **)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 32); i != v2; i += 2 )
  {
    v22 = 0LL;
    sub_18003D504(*i, &v22);
  }
  v4 = *(_QWORD **)(a1 + 384);
  for ( j = *(_QWORD **)(a1 + 376); j != v4; j += 2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*j + 112LL))(*j);
  v6 = *(_QWORD *)(a1 + 584);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 584) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *(_QWORD *)(a1 + 576);
  if ( v7 )
    sub_180010530(v7);
  v8 = *(_QWORD *)(a1 + 560);
  if ( v8 )
    sub_180010530(v8);
  v9 = *(_QWORD *)(a1 + 544);
  if ( v9 )
    sub_180010530(v9);
  v10 = *(_QWORD *)(a1 + 528);
  if ( v10 )
    sub_180010530(v10);
  v11 = *(_QWORD *)(a1 + 512);
  if ( v11 )
    sub_180010530(v11);
  v12 = *(_QWORD *)(a1 + 496);
  if ( v12 )
    sub_180010530(v12);
  v13 = *(_QWORD *)(a1 + 480);
  if ( v13 )
    sub_180010530(v13);
  v14 = *(_QWORD *)(a1 + 464);
  if ( v14 )
    sub_180010530(v14);
  sub_18003182C((void **)(a1 + 432));
  sub_180011B24(a1 + 400);
  sub_1800385C8(a1 + 376);
  sub_18001B880(a1 + 184);
  v15 = *(volatile signed __int32 **)(a1 + 136);
  if ( v15 )
    sub_180010574(v15);
  v16 = *(volatile signed __int32 **)(a1 + 120);
  if ( v16 )
    sub_180010574(v16);
  v17 = *(volatile signed __int32 **)(a1 + 96);
  if ( v17 )
    sub_180010574(v17);
  v18 = *(volatile signed __int32 **)(a1 + 80);
  if ( v18 )
    sub_180010574(v18);
  v19 = *(volatile signed __int32 **)(a1 + 64);
  if ( v19 )
    sub_180010574(v19);
  sub_180013300(a1 + 32);
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  v21 = *(volatile signed __int32 **)(a1 + 16);
  if ( v21 )
    return (void **)sub_180010574(v21);
  return result;
}
