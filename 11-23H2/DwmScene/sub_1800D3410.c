/*
 * XREFs of sub_1800D3410 @ 0x1800D3410
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18008C3B4 @ 0x18008C3B4 (sub_18008C3B4.c)
 *     sub_1800CF95C @ 0x1800CF95C (sub_1800CF95C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D3410(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rax
  char v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h]
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h]
  __int64 v14; // [rsp+60h] [rbp+10h] BYREF

  LODWORD(v14) = 0;
  if ( *a2 )
  {
    v3 = sub_18008C3B4(*a2, &v12, *(_DWORD *)(a1 + 88));
    v4 = 1;
    v5 = *v3;
  }
  else
  {
    v10 = 0LL;
    v3 = &v9;
    v4 = 2;
    v5 = 0LL;
  }
  v11[0] = v5;
  v6 = v3[1];
  v11[1] = v6;
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v10 )
      sub_180010530(v10);
  }
  if ( (v4 & 1) != 0 && v13 )
    sub_180010530(v13);
  sub_1800CF95C(&v9, v11);
  v7 = v9;
  if ( v9 )
  {
    v7 = *(_QWORD *)(v9 + 144);
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    sub_18000E72C(&v14);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 136LL))(*(_QWORD *)(a1 + 144), v7);
  if ( v10 )
    result = sub_180010530(v10);
  if ( v6 )
    return sub_180010530(v6);
  return result;
}
