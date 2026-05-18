/*
 * XREFs of sub_1800F1C20 @ 0x1800F1C20
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
 *     sub_1800E71C4 @ 0x1800E71C4 (sub_1800E71C4.c)
 *     sub_1800E77D8 @ 0x1800E77D8 (sub_1800E77D8.c)
 *     sub_1800F27A8 @ 0x1800F27A8 (sub_1800F27A8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall sub_1800F1C20(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  char result; // al
  _QWORD v11[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+10h] BYREF
  __int64 v16; // [rsp+78h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 520);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)(a1 + 528);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 528) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  sub_1800F27A8(a1, &v13);
  if ( (_QWORD)v13 )
  {
    v16 = 0LL;
    v4 = (_QWORD *)sub_180028460(v13);
    v5 = v4[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = v4[1];
    }
    v11[0] = *v4;
    v11[1] = v5;
    v6 = 0LL;
    if ( sub_1800122C0(v11) )
    {
      sub_1800DEA0C((__int64 *)&v12, v11);
      v7 = sub_1800E77D8(v12, &v15);
      v6 = *v7;
      *v7 = 0LL;
      v16 = v6;
      v8 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      sub_1800E71C4(v12);
      sub_180010910((__int64)&v12);
    }
    v12 = 0LL;
    sub_18002F050(a1, &v12);
    v12 = 0LL;
    sub_18002EEDC(a1, &v12);
    if ( sub_180010D08(&v16) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 880LL))(v6);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 888LL))(v6);
    }
    sub_180010910((__int64)v11);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  sub_180010910((__int64)&v13);
  v9 = (_QWORD *)(a1 + 536);
  result = sub_1800122C0(v9);
  if ( result )
  {
    (**(void (__fastcall ***)(_QWORD))*v9)(*v9);
    v13 = 0LL;
    v14[0] = *v9;
    *v9 = 0LL;
    v14[1] = v9[1];
    v9[1] = 0LL;
    sub_180010910((__int64)v14);
    return sub_180010910((__int64)&v13);
  }
  return result;
}
