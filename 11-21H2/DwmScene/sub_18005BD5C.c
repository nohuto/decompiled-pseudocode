/*
 * XREFs of sub_18005BD5C @ 0x18005BD5C
 * Callers:
 *     sub_180018204 @ 0x180018204 (sub_180018204.c)
 *     sub_1800191D0 @ 0x1800191D0 (sub_1800191D0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005BD5C(_QWORD *a1)
{
  __int64 *v2; // r14
  _QWORD *v3; // rdi
  char *v4; // r15
  char *v5; // rbx
  volatile signed __int32 *v6; // rcx

  *a1 = &Spectre::Engine::Sampler::`vftable';
  v2 = a1 + 16;
  v3 = (_QWORD *)a1[16];
  v4 = (char *)v3[1];
  while ( !v4[25] )
  {
    sub_180029948((__int64)v2, (__int64)v2, *((char **)v4 + 2));
    v5 = v4;
    v4 = *(char **)v4;
    sub_180010910((__int64)(v5 + 40));
    sub_180010884(v5, 0x38uLL);
  }
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  v2[1] = 0LL;
  sub_180029C94(v2);
  sub_180010910((__int64)(a1 + 14));
  v6 = (volatile signed __int32 *)a1[13];
  if ( v6 && _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  return sub_180029DE4((__int64)a1);
}
