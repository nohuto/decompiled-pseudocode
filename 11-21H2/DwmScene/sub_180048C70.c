/*
 * XREFs of sub_180048C70 @ 0x180048C70
 * Callers:
 *     sub_180048FF0 @ 0x180048FF0 (sub_180048FF0.c)
 *     sub_1800670A4 @ 0x1800670A4 (sub_1800670A4.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800299BC @ 0x1800299BC (sub_1800299BC.c)
 *     sub_180049994 @ 0x180049994 (sub_180049994.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180048C70(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rcx
  char *v4; // rdi
  char *v5; // rcx
  volatile signed __int32 *v6; // rcx

  *a1 = &Spectre::Engine::Material::`vftable';
  sub_180049994();
  v2 = (volatile signed __int32 *)a1[28];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[25];
  v4 = *(char **)(v3 + 8);
  if ( !v4[25] )
  {
    do
    {
      sub_1800299BC((__int64)(a1 + 25), (__int64)(a1 + 25), *((char **)v4 + 2));
      v5 = v4;
      v4 = *(char **)v4;
      sub_180010884(v5, 0x28uLL);
    }
    while ( !v4[25] );
    v3 = a1[25];
  }
  sub_180010884((char *)v3, 0x28uLL);
  sub_180010910((__int64)(a1 + 21));
  sub_180010910((__int64)(a1 + 17));
  sub_180010910((__int64)(a1 + 15));
  v6 = (volatile signed __int32 *)a1[13];
  if ( v6 && _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  return sub_180029DE4((__int64)a1);
}
