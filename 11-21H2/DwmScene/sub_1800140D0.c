/*
 * XREFs of sub_1800140D0 @ 0x1800140D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180013B3C @ 0x180013B3C (sub_180013B3C.c)
 *     sub_180049AB8 @ 0x180049AB8 (sub_180049AB8.c)
 *     sub_180049D98 @ 0x180049D98 (sub_180049D98.c)
 *     sub_18004A080 @ 0x18004A080 (sub_18004A080.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800140D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r9
  __int64 v9; // rcx
  char v10; // bl
  __int64 v11; // r9
  __int64 v12; // rcx
  __int128 *v13; // r8
  char v14; // bl
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  __int64 result; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  char v22; // [rsp+20h] [rbp-A8h]
  _QWORD v23[2]; // [rsp+28h] [rbp-A0h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-90h] BYREF
  __int128 v25; // [rsp+48h] [rbp-80h] BYREF
  __int128 v26; // [rsp+58h] [rbp-70h] BYREF
  __int64 v27; // [rsp+68h] [rbp-60h]
  char *v28; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]
  __int64 retaddr; // [rsp+C8h] [rbp+0h]

  v27 = a2;
  v8 = *(_QWORD *)(a1 + 16);
  if ( a3 )
  {
    v9 = *(_QWORD *)(a3 + 24);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(a3 + 24);
    }
    v23[0] = *(_QWORD *)(a3 + 16);
    v23[1] = v9;
    v10 = 1;
  }
  else
  {
    v25 = 0LL;
    v10 = 2;
  }
  try
  {
    v22 = v10;
    sub_180049D98(v8);
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      v22 = v10;
      sub_180010910((__int64)&v25);
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      v22 = v10;
      sub_180010910((__int64)v23);
    }
    v11 = *(_QWORD *)(a1 + 16);
    if ( a4 )
    {
      v12 = *(_QWORD *)(a4 + 24);
      if ( v12 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        v12 = *(_QWORD *)(a4 + 24);
        v10 = v22;
      }
      v24[0] = *(_QWORD *)(a4 + 16);
      v24[1] = v12;
      v13 = (__int128 *)v24;
      v14 = v10 | 4;
    }
    else
    {
      v26 = 0LL;
      v13 = &v26;
      v14 = v10 | 8;
    }
    sub_18004A080(v11, a2, v13);
    if ( (v14 & 8) != 0 )
    {
      v14 &= ~8u;
      sub_180010910((__int64)&v26);
    }
    if ( (v14 & 4) != 0 )
      sub_180010910((__int64)v24);
    v15 = *(_QWORD *)(a1 + 16);
    v16 = sub_180013B3C(&v28, a2, &qword_1801F5E18);
    LOBYTE(v17) = a3 != 0;
    sub_180049AB8(v15, v16, v17);
    if ( v29 >= 0x10 )
      sub_180010884(v28, v29 + 1);
    v18 = *(_QWORD *)(a2 + 24);
    if ( v18 >= 0x10 )
      sub_180010884(*(char **)a2, v18 + 1);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 15LL;
    *(_BYTE *)a2 = 0;
    result = 0LL;
  }
  catch ( ... )
  {
    sub_18000F364(
      retaddr,
      249LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrematerial.cpp",
      2147500037LL);
    v20 = v27;
    v21 = *(_QWORD *)(v27 + 24);
    if ( v21 >= 0x10 )
      sub_180010884(*(char **)v27, v21 + 1);
    *(_QWORD *)(v20 + 16) = 0LL;
    *(_QWORD *)(v20 + 24) = 15LL;
    *(_BYTE *)v20 = 0;
    return 2147500037LL;
  }
  return result;
}
