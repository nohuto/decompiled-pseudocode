/*
 * XREFs of sub_180067BFC @ 0x180067BFC
 * Callers:
 *     sub_1800546B0 @ 0x1800546B0 (sub_1800546B0.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001E104 @ 0x18001E104 (sub_18001E104.c)
 *     sub_18005470C @ 0x18005470C (sub_18005470C.c)
 *     sub_1800671C8 @ 0x1800671C8 (sub_1800671C8.c)
 *     sub_1800679C0 @ 0x1800679C0 (sub_1800679C0.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180067BFC(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  volatile signed __int32 *v6; // rcx

  v2 = *(char **)(a1 + 528);
  if ( v2 )
  {
    sub_180010884(v2, (*(_QWORD *)(a1 + 544) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 528) = 0LL;
    *(_QWORD *)(a1 + 536) = 0LL;
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 520);
  if ( v3 >= 0x10 )
    sub_180010884(*(char **)(a1 + 496), v3 + 1);
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 15LL;
  *(_BYTE *)(a1 + 496) = 0;
  sub_1800671C8(a1 + 480, a1 + 480, *(char **)(*(_QWORD *)(a1 + 480) + 8LL));
  sub_180010884(*(char **)(a1 + 480), 0x30uLL);
  sub_1800FC250(a1 + 472);
  sub_180010910(a1 + 456);
  sub_180010910(a1 + 440);
  sub_1800679C0((__int64 *)(a1 + 416));
  sub_18000B4C0(a1 + 256, 16LL, 10LL);
  sub_18000B4C0(a1 + 96, 16LL, 10LL);
  sub_18001E104(a1 + 80, a1 + 80, *(char **)(*(_QWORD *)(a1 + 80) + 8LL));
  sub_180010884(*(char **)(a1 + 80), 0x48uLL);
  result = sub_18005470C((__int64 *)(a1 + 48), a1 + 48);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 >= 0x10 )
    result = sub_180010884(*(char **)(a1 + 16), v5 + 1);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 15LL;
  *(_BYTE *)(a1 + 16) = 0;
  v6 = *(volatile signed __int32 **)(a1 + 8);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
