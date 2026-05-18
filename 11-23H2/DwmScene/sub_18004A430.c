/*
 * XREFs of sub_18004A430 @ 0x18004A430
 * Callers:
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18003C04C @ 0x18003C04C (sub_18003C04C.c)
 *     sub_180040B20 @ 0x180040B20 (sub_180040B20.c)
 *     sub_180042130 @ 0x180042130 (sub_180042130.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18004A430(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
{
  __int128 v6; // [rsp+28h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-9h]
  __int128 v8; // [rsp+40h] [rbp-1h] BYREF
  __int64 v9; // [rsp+50h] [rbp+Fh]
  __int128 v10; // [rsp+58h] [rbp+17h] BYREF
  __int128 v11; // [rsp+78h] [rbp+37h]
  __int128 v12; // [rsp+88h] [rbp+47h]

  sub_180011C50(a1 + 56, &v6);
  sub_18003C04C(v6, (__int64)&v10);
  if ( *((_QWORD *)&v6 + 1) )
    sub_180010530(*((__int64 *)&v6 + 1));
  v6 = xmmword_18019BA00;
  v7 = 0x3F8000003F800000LL;
  sub_180042130((unsigned __int64 *)(a1 + 88), (__int64)&v6, *(double *)&v11, *(double *)&v12);
  if ( *a3 )
  {
    v8 = xmmword_18019BA00;
    v9 = 0x3F8000003F800000LL;
    sub_180040B20((__int64)&v8, a2, (unsigned __int64 *)&v6);
    *(_OWORD *)a2 = v8;
    a2[2] = v9;
  }
  else
  {
    *(_OWORD *)a2 = v6;
    a2[2] = v7;
    *a3 = 1;
  }
}
