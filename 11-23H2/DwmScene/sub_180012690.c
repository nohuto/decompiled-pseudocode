/*
 * XREFs of sub_180012690 @ 0x180012690
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_18001265C @ 0x18001265C (sub_18001265C.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180012690(__int64 a1, _OWORD *a2)
{
  _QWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm3
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-60h]
  _BYTE v11[16]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v12[4]; // [rsp+40h] [rbp-48h] BYREF

  v4 = (_QWORD *)sub_18001265C(*(_QWORD *)(a1 + 16), &v9);
  sub_18002A0C4(*v4 + 16LL, v11);
  if ( v10 )
    sub_180010530(v10);
  sub_18003C72C(*(_QWORD *)(a1 + 16), v12);
  v5 = v12[1];
  v6 = v12[2];
  v7 = v12[3];
  *a2 = v12[0];
  a2[1] = v5;
  a2[2] = v6;
  a2[3] = v7;
  sub_180010F54((__int64)v11);
  return 0LL;
}
