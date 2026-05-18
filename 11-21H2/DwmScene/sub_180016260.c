/*
 * XREFs of sub_180016260 @ 0x180016260
 * Callers:
 *     sub_180016640 @ 0x180016640 (sub_180016640.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122B0 @ 0x1800122B0 (sub_1800122B0.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180016778 @ 0x180016778 (sub_180016778.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_18001880C @ 0x18001880C (sub_18001880C.c)
 *     sub_180018DFC @ 0x180018DFC (sub_180018DFC.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 *     sub_180021530 @ 0x180021530 (sub_180021530.c)
 *     sub_180036CD4 @ 0x180036CD4 (sub_180036CD4.c)
 *     sub_180037414 @ 0x180037414 (sub_180037414.c)
 *     sub_180037528 @ 0x180037528 (sub_180037528.c)
 *     sub_18003A0F4 @ 0x18003A0F4 (sub_18003A0F4.c)
 *     sub_18003AC64 @ 0x18003AC64 (sub_18003AC64.c)
 *     sub_18006C5AC @ 0x18006C5AC (sub_18006C5AC.c)
 */

// Hidden C++ exception states: #wind=7
__int64 *__fastcall sub_180016260(__int64 *a1, __int64 a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int128 v18; // xmm6
  __int128 v19; // xmm7
  __int64 v20; // rax
  __int128 v21; // xmm6
  __int128 v22; // xmm7
  __int64 v23; // rax
  _QWORD *v24; // rax
  char v25; // dl
  char v26; // di
  __int64 v28; // rcx
  __int64 v29; // rdi
  void (__fastcall *v30)(__int64, _QWORD, __int64, __int64); // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  __int128 v36; // [rsp+48h] [rbp-210h] BYREF
  __int128 v37; // [rsp+58h] [rbp-200h] BYREF
  __int128 v38; // [rsp+68h] [rbp-1F0h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 v40; // [rsp+88h] [rbp-1D0h]
  _BYTE v41[16]; // [rsp+90h] [rbp-1C8h] BYREF
  _QWORD *v42; // [rsp+A0h] [rbp-1B8h]
  _QWORD *v43; // [rsp+A8h] [rbp-1B0h]
  Spectre::Utils::SpectreException *v44; // [rsp+B0h] [rbp-1A8h] BYREF
  _BYTE v45[24]; // [rsp+B8h] [rbp-1A0h] BYREF
  _OWORD v46[2]; // [rsp+D0h] [rbp-188h] BYREF
  _OWORD v47[2]; // [rsp+F0h] [rbp-168h] BYREF
  _BYTE v48[96]; // [rsp+110h] [rbp-148h] BYREF
  _BYTE v49[96]; // [rsp+170h] [rbp-E8h] BYREF
  char *v50; // [rsp+1D0h] [rbp-88h] BYREF
  unsigned __int64 v51; // [rsp+1E8h] [rbp-70h]

  v42 = a3;
  v43 = a4;
  v9 = 0LL;
  if ( sub_1800122B0(a3) )
  {
    v10 = (__int64 *)sub_180021530(v41);
    v11 = *v10;
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    v39[0] = *a3;
    *a3 = v11;
    v39[1] = a3[1];
    a3[1] = v12;
    sub_180010910((__int64)v39);
    sub_180010910((__int64)v41);
  }
  v13 = sub_18001D684(1632LL);
  try
  {
    v40 = v13;
    if ( v13 )
    {
      v36 = 0LL;
      v14 = a5[1];
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v14 = a5[1];
      }
      *(_QWORD *)&v36 = *a5;
      *((_QWORD *)&v36 + 1) = v14;
      v37 = 0LL;
      v15 = a4[1];
      if ( v15 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v15 = a4[1];
      }
      *(_QWORD *)&v37 = *a4;
      *((_QWORD *)&v37 + 1) = v15;
      v38 = 0LL;
      v16 = a3[1];
      if ( v16 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        v16 = a3[1];
      }
      *(_QWORD *)&v38 = *a3;
      *((_QWORD *)&v38 + 1) = v16;
      v9 = sub_18006C5AC(v13, *(_DWORD *)(a2 + 20), (unsigned int)&v38, (unsigned int)&v37, (__int64)&v36);
    }
    v40 = v9;
    v17 = sub_180036CD4(v9, &v50);
    if ( &xmmword_1801F4BD8 != (__int128 *)v17 )
    {
      if ( *((_QWORD *)&xmmword_1801F4BE8 + 1) >= 0x10uLL )
        sub_180010884((char *)xmmword_1801F4BD8, *((_QWORD *)&xmmword_1801F4BE8 + 1) + 1LL);
      xmmword_1801F4BE8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1801BD760);
      LOBYTE(xmmword_1801F4BD8) = 0;
      xmmword_1801F4BD8 = *(_OWORD *)v17;
      xmmword_1801F4BE8 = *(_OWORD *)(v17 + 16);
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_QWORD *)(v17 + 24) = 15LL;
      *(_BYTE *)v17 = 0;
    }
    if ( v51 >= 0x10 )
      sub_180010884(v50, v51 + 1);
    *(_OWORD *)(v9 + 528) = *(_OWORD *)a2;
    *(_OWORD *)(v9 + 544) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(v9 + 560) = *(_QWORD *)(a2 + 32);
    sub_180018DFC(v9 + 568, a2 + 40);
    *(_OWORD *)(v9 + 664) = *(_OWORD *)(a2 + 136);
    *(_OWORD *)(v9 + 680) = *(_OWORD *)(a2 + 152);
    v18 = *(_OWORD *)(a2 + 136);
    v19 = *(_OWORD *)(a2 + 152);
    v20 = sub_18001880C(v48, a2 + 40);
    v46[0] = v18;
    v46[1] = v19;
    sub_1800169B8(v9, v45, v20, v46);
    sub_180037528(v9, a2);
    if ( (unsigned int)_std_type_info_compare(&qword_1801EAE80, &qword_1801EAE08) )
    {
      v21 = *(_OWORD *)(a2 + 136);
      v22 = *(_OWORD *)(a2 + 152);
      v23 = sub_18001880C(v49, a2 + 40);
      v47[0] = v21;
      v47[1] = v22;
      sub_180016778(v9, v41, v23, v47);
      sub_180010910((__int64)v41);
    }
    sub_18003A0F4(v9);
    if ( *(_BYTE *)(a2 + 28) )
    {
      v24 = (_QWORD *)sub_180037414(v9, v39);
      if ( sub_1800122C0(v24) )
      {
        v26 = v25;
LABEL_25:
        if ( (v25 & 1) != 0 )
          sub_180010910((__int64)v39);
        if ( v26 )
          sub_18003AC64(v9);
        *a1 = v9;
        goto LABEL_36;
      }
    }
    else
    {
      v25 = 0;
    }
    v26 = 0;
    goto LABEL_25;
  }
  catch ( Spectre::Utils::SpectreException *v44 )
  {
    if ( sub_1800122C0(a5) )
    {
      v29 = sub_180016254(v28);
      v30 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v29 + 24LL);
      v31 = (*(__int64 (__fastcall **)(Spectre::Utils::SpectreException *))(*(_QWORD *)v44 + 8LL))(v44);
      v34 = sub_180037278(v33, v32, v31);
      v30(v29, 0LL, v35, v34);
    }
    throw;
  }
LABEL_36:
  sub_180010910((__int64)v45);
  sub_180010910((__int64)a3);
  sub_180010910((__int64)a4);
  sub_180010910((__int64)a5);
  return a1;
}
