/*
 * XREFs of sub_18003F8F4 @ 0x18003F8F4
 * Callers:
 *     sub_18003FC40 @ 0x18003FC40 (sub_18003FC40.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_180030CC8 @ 0x180030CC8 (sub_180030CC8.c)
 *     sub_1800424DC @ 0x1800424DC (sub_1800424DC.c)
 *     sub_180043408 @ 0x180043408 (sub_180043408.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18003F8F4(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rbx
  _QWORD *v4; // rsi
  _QWORD *j; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rcx
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rcx
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 result; // rax
  volatile signed __int32 *v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::SceneNode::`vftable';
  sub_180043408();
  v2 = *(_QWORD **)(a1 + 40);
  for ( i = *(_QWORD **)(a1 + 32); i != v2; i += 2 )
  {
    v18 = 0LL;
    sub_1800424DC(*i, &v18);
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
  sub_180010910(a1 + 568);
  sub_180010910(a1 + 552);
  sub_180010910(a1 + 536);
  sub_180010910(a1 + 520);
  sub_180010910(a1 + 504);
  sub_180010910(a1 + 488);
  sub_180010910(a1 + 472);
  sub_180010910(a1 + 456);
  sub_180030CC8(a1 + 432, a1 + 432, *(char **)(*(_QWORD *)(a1 + 432) + 8LL));
  sub_180010884(*(char **)(a1 + 432), 0x60uLL);
  v7 = *(_QWORD *)(a1 + 424);
  if ( v7 >= 0x10 )
    sub_180010884(*(char **)(a1 + 400), v7 + 1);
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 15LL;
  *(_BYTE *)(a1 + 400) = 0;
  v8 = *(_QWORD *)(a1 + 376);
  if ( v8 )
  {
    sub_1800126E8(v8, *(_QWORD *)(a1 + 384));
    sub_180010884(*(char **)(a1 + 376), (*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 376)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 376) = 0LL;
    *(_QWORD *)(a1 + 384) = 0LL;
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  v9 = *(char **)(a1 + 184);
  if ( v9 )
  {
    sub_180010884(v9, (*(_QWORD *)(a1 + 200) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  v10 = *(volatile signed __int32 **)(a1 + 136);
  if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = *(volatile signed __int32 **)(a1 + 120);
  if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = *(volatile signed __int32 **)(a1 + 96);
  if ( v12 && _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = *(volatile signed __int32 **)(a1 + 80);
  if ( v13 && _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = *(volatile signed __int32 **)(a1 + 64);
  if ( v14 && _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = *(_QWORD *)(a1 + 32);
  if ( v15 )
  {
    sub_1800126E8(v15, *(_QWORD *)(a1 + 40));
    sub_180010884(*(char **)(a1 + 32), (*(_QWORD *)(a1 + 48) - *(_QWORD *)(a1 + 32)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  result = (unsigned __int64)&Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  v17 = *(volatile signed __int32 **)(a1 + 16);
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
  }
  return result;
}
