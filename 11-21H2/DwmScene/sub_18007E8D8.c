/*
 * XREFs of sub_18007E8D8 @ 0x18007E8D8
 * Callers:
 *     sub_18007D80C @ 0x18007D80C (sub_18007D80C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180049BBC @ 0x180049BBC (sub_180049BBC.c)
 *     sub_180053418 @ 0x180053418 (sub_180053418.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_180065068 @ 0x180065068 (sub_180065068.c)
 *     sub_180065394 @ 0x180065394 (sub_180065394.c)
 *     sub_18006558C @ 0x18006558C (sub_18006558C.c)
 *     sub_180065734 @ 0x180065734 (sub_180065734.c)
 *     sub_1800933B8 @ 0x1800933B8 (sub_1800933B8.c)
 *     sub_1800935DC @ 0x1800935DC (sub_1800935DC.c)
 *     sub_1800A8588 @ 0x1800A8588 (sub_1800A8588.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007E8D8(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdi
  void (__fastcall *v22)(__int64, __int128 *, _QWORD *, __int64, char **); // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int128 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+70h] [rbp-90h] BYREF
  __int128 v30; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+90h] [rbp-70h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v33; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v34; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v36; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v37; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v38; // [rsp+100h] [rbp+0h] BYREF
  __int128 v39; // [rsp+110h] [rbp+10h] BYREF
  __int128 v40; // [rsp+120h] [rbp+20h] BYREF
  __int128 v41; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v42[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v43; // [rsp+148h] [rbp+48h]
  char *v44[3]; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v45; // [rsp+168h] [rbp+68h]

  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a2 + 376LL))(*a2, v42);
  v26 = 0LL;
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 8);
    while ( v8 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8);
      if ( v9 == v8 )
      {
        v26 = *(_OWORD *)v6;
        break;
      }
    }
  }
  v10 = v43;
  if ( v43 && _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, v7, v6);
  v11 = *(__int64 **)(a1 + 272);
  v12 = *v11;
  v34 = 0LL;
  if ( *((_QWORD *)&v26 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL));
  v34 = v26;
  (*(void (__fastcall **)(__int64 *, __int128 *, __int64))(v12 + 88))(v11, &v34, v6);
  v13 = *(_QWORD *)(a1 + 272);
  v28 = 0LL;
  v14 = a3[1];
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a3[1];
  }
  *(_QWORD *)&v28 = *a3;
  *((_QWORD *)&v28 + 1) = v14;
  v36 = 0LL;
  sub_1800A8588(v13, (unsigned int)&v26, (unsigned int)&v36, (unsigned int)&v28, -1);
  v37 = 0LL;
  sub_180065394(*(_QWORD *)(a1 + 272), (__int64 *)&v37);
  *(_BYTE *)(*(_QWORD *)(a1 + 272) + 465LL) &= 0xF8u;
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a2 + 32LL))(*a2, &v35);
  v38 = v35;
  v35 = 0LL;
  sub_18006558C(*(_QWORD *)(a1 + 272), (__int64 *)&v38);
  if ( (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2) != 1.0
    || (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 136LL))(*a2) != 1.0 )
  {
    sub_18005E244(*a3, &v27);
    *(_QWORD *)&v29 = 0LL;
    DWORD2(v29) = (int)*(float *)&v27;
    HIDWORD(v29) = (int)*((float *)&v27 + 1);
    sub_180065734(*(_QWORD *)(a1 + 272), &v29);
  }
  v15 = *(_QWORD *)(a1 + 416);
  v30 = 0LL;
  v16 = a3[1];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = a3[1];
  }
  *(_QWORD *)&v30 = *a3;
  *((_QWORD *)&v30 + 1) = v16;
  sub_1800933B8(v15, &qword_1801F5FD8, &v30);
  v17 = *(_QWORD *)(a1 + 416);
  v31 = 0LL;
  v18 = *(_QWORD *)(a1 + 312);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
    v18 = *(_QWORD *)(a1 + 312);
  }
  *(_QWORD *)&v31 = *(_QWORD *)(a1 + 304);
  *((_QWORD *)&v31 + 1) = v18;
  sub_1800935DC(v17, &qword_1801F5FD8, &v31);
  sub_180049BBC(*(_QWORD **)(a1 + 400), *(_DWORD *)(a1 + 448), 0LL, 2LL);
  v19 = *(_QWORD *)(a1 + 336);
  v32 = 0LL;
  v20 = *(_QWORD *)(a1 + 408);
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = *(_QWORD *)(a1 + 408);
  }
  *(_QWORD *)&v32 = *(_QWORD *)(a1 + 400);
  *((_QWORD *)&v32 + 1) = v20;
  sub_180053418(v19, &v32);
  v21 = *(_QWORD *)(a1 + 272);
  v22 = *(void (__fastcall **)(__int64, __int128 *, _QWORD *, __int64, char **))(*(_QWORD *)v21 + 208LL);
  v44[2] = 0LL;
  v45 = 15LL;
  LOBYTE(v44[0]) = 0;
  sub_180012190((__int64 *)v44, "Display", 7uLL);
  v22(v21, &v26, a2, a1 + 336, v44);
  if ( v45 >= 0x10 )
    sub_180010884(v44[0], v45 + 1);
  sub_180065068(*(_QWORD *)(a1 + 272));
  v39 = 0LL;
  sub_1800933B8(*(_QWORD *)(a1 + 416), &qword_1801F5FD8, &v39);
  v40 = 0LL;
  sub_1800935DC(*(_QWORD *)(a1 + 416), &qword_1801F5FD8, &v40);
  v23 = *(_QWORD *)(a1 + 272);
  v33 = 0LL;
  v24 = a3[1];
  if ( v24 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
    v24 = a3[1];
  }
  *(_QWORD *)&v33 = *a3;
  *((_QWORD *)&v33 + 1) = v24;
  v41 = 0LL;
  sub_1800A8588(v23, (unsigned int)&v26, (unsigned int)&v41, (unsigned int)&v33, -1);
  sub_180010910((__int64)&v35);
  return sub_180010910((__int64)&v26);
}
