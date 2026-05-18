/*
 * XREFs of sub_1800144E0 @ 0x1800144E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_180013E78 @ 0x180013E78 (sub_180013E78.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18004CA0C @ 0x18004CA0C (sub_18004CA0C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800144E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int128 *v5; // rax
  char v6; // bl
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  __int128 v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-40h]
  __int64 v15; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h] BYREF
  __int64 v17; // [rsp+68h] [rbp-20h]
  _BYTE v18[24]; // [rsp+70h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
    sub_18001246C(&v10, (_QWORD *)(v3 + 32));
    v4 = *(_QWORD *)sub_18001265C(v10, &v12) + 16LL;
    sub_18002A0C4(v4, v18);
    if ( *((_QWORD *)&v12 + 1) )
      sub_180010530(*((__int64 *)&v12 + 1));
    sub_180013E78(v10, &v13);
    if ( a2 )
    {
      v5 = (__int128 *)sub_18001246C(&v16, (_QWORD *)(a2 + 16));
      v6 = 1;
    }
    else
    {
      v12 = 0LL;
      v5 = &v12;
      v6 = 2;
    }
    v7 = sub_18001246C(&v15, v5);
    sub_18004CA0C(v8, v7);
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      if ( *((_QWORD *)&v12 + 1) )
        sub_180010530(*((__int64 *)&v12 + 1));
    }
    if ( (v6 & 1) != 0 && v17 )
      sub_180010530(v17);
    if ( v14 )
      sub_180010530(v14);
    sub_180010F54((__int64)v18);
    if ( v11 )
      sub_180010530(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F024(
      retaddr,
      87LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectremeshcomponent.cpp",
      2147500037LL);
    return 2147500037LL;
  }
  return result;
}
