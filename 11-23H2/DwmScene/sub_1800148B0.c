/*
 * XREFs of sub_1800148B0 @ 0x1800148B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013E14 @ 0x180013E14 (sub_180013E14.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18004189C @ 0x18004189C (sub_18004189C.c)
 *     sub_18004A604 @ 0x18004A604 (sub_18004A604.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800148B0(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+28h] [rbp-60h]
  __int64 v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h]
  _BYTE v14[16]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+60h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    sub_18001246C(&v8, (_QWORD *)(v2 + 32));
    v3 = *(_QWORD *)sub_18001265C(v8, &v12) + 16LL;
    sub_18002A0C4(v3, v14);
    if ( v13 )
      sub_180010530(v13);
    sub_180013E14(v8, &v10);
    v4 = a1[1];
    if ( v4 )
      sub_18004A604(v10, v4 + 32);
    else
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v5 = *(_QWORD *)sub_18001265C(v8, &v12);
    v6 = sub_180012440(v15, (__int64)&unk_1801D3F68);
    sub_18004189C(v5, v6);
    if ( v13 )
      sub_180010530(v13);
    if ( v11 )
      sub_180010530(v11);
    sub_180010F54((__int64)v14);
    if ( v9 )
      sub_180010530(v9);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F024(
      retaddr,
      118LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
