/*
 * XREFs of sub_1800187B0 @ 0x1800187B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180016B9C @ 0x180016B9C (sub_180016B9C.c)
 *     sub_180016DFC @ 0x180016DFC (sub_180016DFC.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_1800333A4 @ 0x1800333A4 (sub_1800333A4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800187B0(_QWORD *a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  _BYTE v11[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+18h]
  __int64 v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF

  sub_1800333A4(a1[7], &v9);
  sub_18002A0C4(v9 + 16, v11);
  v13 = 0LL;
  v4 = sub_180016B9C(&v13, (__int64)&v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v14 = v13;
    v7 = (_QWORD *)a1[15];
    if ( v7 == (_QWORD *)a1[16] )
    {
      sub_180016DFC(a1 + 14, (__int64)v7, &v14);
    }
    else
    {
      *v7 = v13;
      a1[15] += 8LL;
    }
    v8 = v13;
    v13 = 0LL;
    *a2 = v8;
    sub_18000E72C(&v13);
    sub_180010F54((__int64)v11);
    if ( v10 )
      sub_180010530(v10);
    return 0LL;
  }
  else
  {
    sub_18000F024(
      retaddr,
      299LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v4);
    sub_18000E72C(&v13);
    sub_180010F54((__int64)v11);
    if ( v10 )
      sub_180010530(v10);
    return v5;
  }
}
