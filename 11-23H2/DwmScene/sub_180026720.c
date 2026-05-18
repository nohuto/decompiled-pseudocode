/*
 * XREFs of sub_180026720 @ 0x180026720
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180024964 @ 0x180024964 (sub_180024964.c)
 *     sub_180024E9C @ 0x180024E9C (sub_180024E9C.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180026720(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v14[3]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h]
  unsigned int v16; // [rsp+80h] [rbp+40h] BYREF

  v16 = a3;
  v5 = a1 + 8;
  v15 = a1 + 8;
  sub_18002A570(a1 + 8);
  v6 = sub_180024E9C((__int64 *)(a1 + 24), (__int64)v14, (int *)&v16);
  v7 = *(_QWORD *)v6;
  v8 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
  if ( *(_QWORD *)(*(_QWORD *)v6 + 40LL) == v8 )
  {
    sub_180024964(*(_QWORD *)(a1 + 16), v14);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14[0] + 40LL))(
           v14[0],
           *(_QWORD *)(a1 + 16),
           v16) )
    {
      *(_OWORD *)a2 = *(_OWORD *)v14;
      *(_OWORD *)v14 = 0LL;
      sub_18002A62C(v5);
    }
    else
    {
      if ( v14[1] )
        sub_180010530(v14[1]);
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      sub_18002A62C(v5);
    }
  }
  else
  {
    v9 = *(_QWORD *)(v8 - 8);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v5 = v15;
    }
    v10 = *(_QWORD *)(v8 - 16);
    v11 = *(_QWORD *)(v8 - 8);
    v12 = *(_QWORD *)(*(_QWORD *)(v7 + 48) - 8LL);
    if ( v12 )
      sub_180010530(v12);
    *(_QWORD *)(v7 + 48) -= 16LL;
    *(_QWORD *)a2 = v10;
    *(_QWORD *)(a2 + 8) = v11;
    sub_18002A62C(v5);
  }
  return a2;
}
