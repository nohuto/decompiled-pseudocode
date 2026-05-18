/*
 * XREFs of sub_1800D94E0 @ 0x1800D94E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_1800C58DC @ 0x1800C58DC (sub_1800C58DC.c)
 *     sub_1800D8DE0 @ 0x1800D8DE0 (sub_1800D8DE0.c)
 *     sub_1800D97D0 @ 0x1800D97D0 (sub_1800D97D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800D94E0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-28h]
  __int64 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF

  sub_1800D97D0(a1, &v9);
  sub_1800C58DC(v9, &v16);
  v2 = **(_QWORD **)(a1 + 552);
  v15 = v2;
  v3 = v16;
  while ( !*(_BYTE *)(v2 + 25) )
  {
    v4 = *(_QWORD *)(v2 + 40) + 144LL;
    if ( *(_QWORD *)(v2 + 40) + 48LL != v4 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(v2 + 40) + 64LL);
      do
      {
        v6 = *(v5 - 2);
        v11 = v6;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v7 = *(v5 - 1);
        v12 = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        sub_18001246C(&v13, v5);
        sub_18001246C(&v14, v5 + 2);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 944LL))(v3, v11);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 944LL))(v3, v12);
        sub_1800D8DE0(&v11);
        v5 += 6;
      }
      while ( v5 - 2 != (_QWORD *)v4 );
    }
    sub_18001D3F8(&v15);
    v2 = v15;
  }
  result = sub_18000E72C(&v16);
  if ( v10 )
    return sub_180010530(v10);
  return result;
}
