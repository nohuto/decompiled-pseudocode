/*
 * XREFs of sub_1800552F8 @ 0x1800552F8
 * Callers:
 *     sub_180030AC4 @ 0x180030AC4 (sub_180030AC4.c)
 * Callees:
 *     sub_18000B4C0 @ 0x18000B4C0 (sub_18000B4C0.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001E104 @ 0x18001E104 (sub_18001E104.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     sub_1800547AC @ 0x1800547AC (sub_1800547AC.c)
 *     sub_180054858 @ 0x180054858 (sub_180054858.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800552F8(__int64 a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  volatile signed __int32 *v6; // rcx

  v2 = *(char **)(a1 + 18664);
  if ( v2 )
  {
    sub_180010884(v2, (*(_QWORD *)(a1 + 18680) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)(a1 + 18664) = 0LL;
    *(_QWORD *)(a1 + 18672) = 0LL;
    *(_QWORD *)(a1 + 18680) = 0LL;
  }
  sub_180010910(a1 + 18648);
  sub_180010910(a1 + 18632);
  sub_180029C94((__int64 *)(a1 + 18608));
  sub_180054858(a1 + 18592, a1 + 18592, *(char **)(*(_QWORD *)(a1 + 18592) + 8LL));
  sub_180010884(*(char **)(a1 + 18592), 0x50uLL);
  sub_1800547AC(a1 + 18576, a1 + 18576, *(char **)(*(_QWORD *)(a1 + 18576) + 8LL));
  sub_180010884(*(char **)(a1 + 18576), 0x68uLL);
  sub_180054858(a1 + 18560, a1 + 18560, *(char **)(*(_QWORD *)(a1 + 18560) + 8LL));
  sub_180010884(*(char **)(a1 + 18560), 0x50uLL);
  v3 = *(_QWORD *)(a1 + 18552);
  if ( v3 >= 0x10 )
    sub_180010884(*(char **)(a1 + 18528), v3 + 1);
  *(_QWORD *)(a1 + 18544) = 0LL;
  *(_QWORD *)(a1 + 18552) = 15LL;
  *(_BYTE *)(a1 + 18528) = 0;
  v4 = *(_QWORD *)(a1 + 18520);
  if ( v4 >= 0x10 )
    sub_180010884(*(char **)(a1 + 18496), v4 + 1);
  *(_QWORD *)(a1 + 18512) = 0LL;
  *(_QWORD *)(a1 + 18520) = 15LL;
  *(_BYTE *)(a1 + 18496) = 0;
  sub_18000B4C0(a1 + 2104, 32LL, 512LL);
  sub_18001E104(a1 + 2088, a1 + 2088, *(char **)(*(_QWORD *)(a1 + 2088) + 8LL));
  sub_180010884(*(char **)(a1 + 2088), 0x48uLL);
  sub_18000B4C0(a1 + 32, 32LL, 64LL);
  sub_18001E104(a1 + 16, a1 + 16, *(char **)(*(_QWORD *)(a1 + 16) + 8LL));
  result = sub_180010884(*(char **)(a1 + 16), 0x48uLL);
  v6 = *(volatile signed __int32 **)(a1 + 8);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
