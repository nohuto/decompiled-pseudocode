/*
 * XREFs of sub_1800DF530 @ 0x1800DF530
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180010D08 @ 0x180010D08 (sub_180010D08.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_18002EEDC @ 0x18002EEDC (sub_18002EEDC.c)
 *     sub_18002F050 @ 0x18002F050 (sub_18002F050.c)
 *     sub_1800DEA0C @ 0x1800DEA0C (sub_1800DEA0C.c)
 *     sub_1800E0390 @ 0x1800E0390 (sub_1800E0390.c)
 *     sub_1800E71C4 @ 0x1800E71C4 (sub_1800E71C4.c)
 *     sub_1800E77D8 @ 0x1800E77D8 (sub_1800E77D8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800DF530(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 v6; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+18h] BYREF
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF

  sub_1800E0390(a1, v10);
  if ( v10[0] )
  {
    v12 = 0LL;
    v2 = (_QWORD *)sub_180028460(v10[0]);
    v3 = v2[1];
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      v3 = v2[1];
    }
    v8[0] = *v2;
    v8[1] = v3;
    v4 = 0LL;
    if ( sub_1800122C0(v8) )
    {
      sub_1800DEA0C((__int64 *)&v9, v8);
      v5 = (__int64 *)sub_1800E77D8(v9, &v11);
      v4 = *v5;
      *v5 = 0LL;
      v12 = v4;
      v6 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      sub_1800E71C4(v9);
      sub_180010910((__int64)&v9);
    }
    v9 = 0LL;
    sub_18002F050(a1, &v9);
    v9 = 0LL;
    sub_18002EEDC(a1, &v9);
    if ( sub_180010D08(&v12) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 880LL))(v4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 888LL))(v4);
    }
    sub_180010910((__int64)v8);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_180010910((__int64)v10);
}
