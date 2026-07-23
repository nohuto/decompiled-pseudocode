/*
 * XREFs of sub_140983680 @ 0x140983680
 * Callers:
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14024B428 @ 0x14024B428 (sub_14024B428.c)
 *     sub_140250BDC @ 0x140250BDC (sub_140250BDC.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_14029BA28 @ 0x14029BA28 (sub_14029BA28.c)
 *     sub_1402CBF80 @ 0x1402CBF80 (sub_1402CBF80.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402EB3DC @ 0x1402EB3DC (sub_1402EB3DC.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14056B044 @ 0x14056B044 (sub_14056B044.c)
 *     sub_1405B8348 @ 0x1405B8348 (sub_1405B8348.c)
 *     sub_1405C4A48 @ 0x1405C4A48 (sub_1405C4A48.c)
 *     sub_14079D08C @ 0x14079D08C (sub_14079D08C.c)
 *     sub_1407BF070 @ 0x1407BF070 (sub_1407BF070.c)
 */

__int64 __fastcall sub_140983680(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9)
{
  int v9; // ebp
  ULONG_PTR *v14; // r12
  __int64 v15; // r13
  __int64 v16; // rdi
  int v17; // r9d
  unsigned int v18; // r15d
  unsigned int j; // edx
  __int128 *v20; // r13
  int v21; // eax
  unsigned __int64 v22; // r13
  BOOL v23; // eax
  int v24; // [rsp+28h] [rbp-70h]
  __int128 v25; // [rsp+40h] [rbp-58h] BYREF
  __int128 v26; // [rsp+50h] [rbp-48h] BYREF
  __int64 v27; // [rsp+60h] [rbp-38h]
  __int64 i; // [rsp+A8h] [rbp+10h]

  v9 = a4;
  v26 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  if ( !a8 )
  {
    sub_14024B428(a4 * ((unsigned int)(a7 != 0) + 2) + 1, a4 * ((a7 != 0) + 2) + 1, (__int64)&v26);
    if ( !DWORD1(v26) )
      return 3221225626LL;
    sub_140339C20(0LL, 0, (__int64)&v25);
  }
  v14 = (ULONG_PTR *)sub_14030EC14(a1);
  if ( v9 )
  {
    v15 = a2 - (_QWORD)a3;
    for ( i = v15; ; v15 = i )
    {
      if ( a8 )
      {
        v16 = sub_14079D08C(v14, a5, 0);
      }
      else
      {
        v18 = sub_1402EB3DC((__int64)&v25);
        for ( j = v18; ; j = v18 )
        {
          v16 = sub_1403250B0((__int64)v14, j, 0);
          if ( v16 != -1 )
            break;
          sub_1405B8348(v14);
        }
      }
      sub_1405C4A48(v16, (unsigned __int64 *)((char *)a3 + v15), a5, v17);
      if ( a8 )
      {
        v20 = a9;
        v21 = sub_14056B044(v16, a9, *a3, a8, 0LL, 0);
        if ( v21 < 0 )
          KeBugCheckEx(0x1Au, 0x5150AuLL, *a3, v16, v21);
        sub_14026C644(48 * v16 - 0x220000000000LL, 0);
      }
      else
      {
        sub_1402E7D60(v16, *a3, (unsigned int *)&v26, 72);
        if ( a7 )
        {
          v22 = (unsigned __int64)sub_1402CBF80((unsigned int *)&v26, v16, -1LL);
          sub_1407BF070(a1, (__int64)(v22 << 25) >> 16, a6, v16, a7, v24, 37);
          v23 = sub_140317A80(v22) && (unsigned int)sub_140229550();
          *(_QWORD *)v22 = 0LL;
          if ( v23 )
            sub_1402294F0(v22, 0LL);
        }
        sub_14029BA28(48 * v16 - 0x220000000000LL);
        v20 = a9;
      }
      ++a6;
      ++a3;
      --v9;
      if ( a8 )
      {
        *(_QWORD *)a8 += 4096LL;
        *(_QWORD *)v20 += 4096LL;
      }
      if ( !v9 )
        break;
    }
  }
  sub_140250BDC((__int64)&v26);
  return 0LL;
}
