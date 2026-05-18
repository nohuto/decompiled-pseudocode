/*
 * XREFs of sub_180014650 @ 0x180014650
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013E78 @ 0x180013E78 (sub_180013E78.c)
 *     sub_180014620 @ 0x180014620 (sub_180014620.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180014650(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  _BYTE v16[24]; // [rsp+50h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  try
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    if ( v4 )
    {
      sub_18001246C(&v10, (_QWORD *)(v4 + 32));
      v5 = *(_QWORD *)sub_18001265C(v10, &v14) + 16LL;
      sub_18002A0C4(v5, v16);
      if ( v15 )
        sub_180010530(v15);
      sub_180013E78(v10, &v12);
      if ( a2 )
        v6 = a2 + 2;
      else
        v6 = (_QWORD *)(qword_1801D3390 + 96);
      v7 = sub_18001246C(&v14, v6);
      sub_180014620(v12, v7);
      if ( (_QWORD *)a1[1] != a2 )
      {
        if ( a2 )
          (*(void (__fastcall **)(_QWORD *))(*a2 + 8LL))(a2);
        v8 = a1[1];
        a1[1] = a2;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      if ( v13 )
        sub_180010530(v13);
      sub_180010F54((__int64)v16);
      if ( v11 )
        sub_180010530(v11);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F024(
      retaddr,
      64LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
