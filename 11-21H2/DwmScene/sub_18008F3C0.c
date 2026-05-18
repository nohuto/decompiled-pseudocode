/*
 * XREFs of sub_18008F3C0 @ 0x18008F3C0
 * Callers:
 *     sub_1800546F4 @ 0x1800546F4 (sub_1800546F4.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18008E91C @ 0x18008E91C (sub_18008E91C.c)
 *     sub_18008E974 @ 0x18008E974 (sub_18008E974.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18008F3C0(__int64 a1)
{
  char *v2; // rcx
  char *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  char *v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  volatile signed __int32 *v9; // rcx

  v2 = *(char **)(a1 + 1216);
  if ( v2 )
  {
    sub_180010884(v2, (*(_QWORD *)(a1 + 1232) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 1216) = 0LL;
    *(_QWORD *)(a1 + 1224) = 0LL;
    *(_QWORD *)(a1 + 1232) = 0LL;
  }
  v3 = *(char **)(a1 + 1192);
  if ( v3 )
  {
    sub_180010884(v3, (*(_QWORD *)(a1 + 1208) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 1192) = 0LL;
    *(_QWORD *)(a1 + 1200) = 0LL;
    *(_QWORD *)(a1 + 1208) = 0LL;
  }
  sub_180010910(a1 + 1176);
  result = sub_180010910(a1 + 1152);
  v5 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    sub_18008E974(v5, *(_QWORD *)(a1 + 112));
    result = sub_180010884(*(char **)(a1 + 104), 8 * ((__int64)(*(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 104)) >> 3));
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  v6 = *(char **)(a1 + 80);
  if ( v6 )
  {
    result = sub_180010884(v6, (*(_QWORD *)(a1 + 96) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
  {
    sub_18008E91C(v7, *(_QWORD *)(a1 + 64));
    result = sub_180010884(*(char **)(a1 + 56), 8 * ((__int64)(*(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 56)) >> 3));
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 >= 0x10 )
    result = sub_180010884(*(char **)(a1 + 16), v8 + 1);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 15LL;
  *(_BYTE *)(a1 + 16) = 0;
  v9 = *(volatile signed __int32 **)(a1 + 8);
  if ( v9 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  return result;
}
