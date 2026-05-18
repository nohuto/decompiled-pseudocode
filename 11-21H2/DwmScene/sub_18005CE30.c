/*
 * XREFs of sub_18005CE30 @ 0x18005CE30
 * Callers:
 *     sub_180018210 @ 0x180018210 (sub_180018210.c)
 *     sub_1800193C0 @ 0x1800193C0 (sub_1800193C0.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029948 @ 0x180029948 (sub_180029948.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005CE30(_QWORD *a1)
{
  __int64 *v2; // r14
  _QWORD *v3; // rdi
  char *v4; // r15
  char *v5; // rbx
  void (__fastcall ***v6)(_QWORD, __int64); // rcx
  void *v7; // rcx
  volatile signed __int32 *v8; // rcx

  *a1 = &Spectre::Engine::Texture::`vftable';
  v2 = a1 + 14;
  v3 = (_QWORD *)a1[14];
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
  v6 = (void (__fastcall ***)(_QWORD, __int64))a1[17];
  if ( v6 )
    (**v6)(v6, 1LL);
  v7 = (void *)a1[16];
  if ( v7 )
    sub_18000B998(v7);
  sub_180029C94(v2);
  v8 = (volatile signed __int32 *)a1[13];
  if ( v8 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
  return sub_180029DE4((__int64)a1);
}
