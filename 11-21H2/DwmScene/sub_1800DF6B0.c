/*
 * XREFs of sub_1800DF6B0 @ 0x1800DF6B0
 * Callers:
 *     sub_180011700 @ 0x180011700 (sub_180011700.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180026640 @ 0x180026640 (sub_180026640.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002EEDC @ 0x18002EEDC (sub_18002EEDC.c)
 *     sub_18007A8C0 @ 0x18007A8C0 (sub_18007A8C0.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     sub_1800EE3C8 @ 0x1800EE3C8 (sub_1800EE3C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800DF6B0(__int64 a1)
{
  int v2; // ebx
  int v3; // eax
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int128 v7; // [rsp+30h] [rbp-9h] BYREF
  __int64 v8[2]; // [rsp+40h] [rbp+7h] BYREF
  __int128 v9; // [rsp+50h] [rbp+17h] BYREF
  __int128 v10; // [rsp+60h] [rbp+27h] BYREF
  __int64 v11[4]; // [rsp+70h] [rbp+37h] BYREF

  sub_1800E0390(a1, v8);
  if ( v8[0] )
  {
    v11[2] = 0LL;
    v11[3] = 15LL;
    LOBYTE(v11[0]) = 0;
    sub_180012190(v11, "RenderOutput DepthBuffer", 0x18uLL);
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    sub_1800EE3C8((unsigned int)&v10, (unsigned int)v8, v3, v2, (__int64)v11);
    v4 = (__int64 *)sub_18002850C(v8[0]);
    sub_180026640(v4, &v7);
    v5 = (__int64 *)v7;
    v9 = 0LL;
    if ( *((_QWORD *)&v10 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL));
    v9 = v10;
    sub_18007A8C0(v5, &v9, 0);
    v9 = v7;
    v7 = 0LL;
    sub_18002EEDC(a1, &v9);
    sub_180010910((__int64)&v7);
    sub_180010910((__int64)&v10);
  }
  return sub_180010910((__int64)v8);
}
