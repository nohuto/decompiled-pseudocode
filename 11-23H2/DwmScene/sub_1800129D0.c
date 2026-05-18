/*
 * XREFs of sub_1800129D0 @ 0x1800129D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F024 @ 0x18000F024 (sub_18000F024.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18003DA14 @ 0x18003DA14 (sub_18003DA14.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800129D0(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  unsigned int v5; // ebx
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  _BYTE v12[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]

  v4 = (_QWORD *)sub_18001265C(*(_QWORD *)(a1 + 16), &v10);
  sub_18002A0C4(*v4 + 16LL, v12);
  v5 = 0;
  if ( v11 )
    sub_180010530(v11);
  v6 = a2[1];
  v7 = a2[2];
  v8 = a2[3];
  v13[0] = *a2;
  v13[1] = v6;
  v13[2] = v7;
  v13[3] = v8;
  if ( !(unsigned __int8)sub_18003DA14(*(_QWORD *)(a1 + 16), v13) )
  {
    v5 = -2147024809;
    sub_18000F024(
      retaddr,
      232LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrelightnode.cpp",
      2147942487LL);
  }
  sub_180010F54((__int64)v12);
  return v5;
}
