/*
 * XREFs of sub_1800E8560 @ 0x1800E8560
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 *     sub_18005E27C @ 0x18005E27C (sub_18005E27C.c)
 *     sub_18005E29C @ 0x18005E29C (sub_18005E29C.c)
 *     sub_18005E30C @ 0x18005E30C (sub_18005E30C.c)
 *     sub_18005E3D8 @ 0x18005E3D8 (sub_18005E3D8.c)
 *     sub_18005E428 @ 0x18005E428 (sub_18005E428.c)
 *     sub_18005E468 @ 0x18005E468 (sub_18005E468.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_1800E6248 @ 0x1800E6248 (sub_1800E6248.c)
 *     sub_1800E6288 @ 0x1800E6288 (sub_1800E6288.c)
 *     sub_1800E6A0C @ 0x1800E6A0C (sub_1800E6A0C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800E8560(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r14
  char v5; // bl
  __int64 *v6; // rdx
  char v7; // di
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  __int64 v16; // rdx
  int v17; // r9d
  char *v18; // rdi
  __int64 i; // rcx
  unsigned int v20; // edi
  int v21; // eax
  int v22; // r8d
  int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // r10
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // r8d
  int v29; // r9d
  size_t v30; // r10
  __int64 v31; // r11
  unsigned int v32; // r15d
  unsigned int v33; // esi
  int v34; // r12d
  unsigned int v35; // edi
  unsigned int v37; // [rsp+40h] [rbp-C0h]
  unsigned int v38; // [rsp+44h] [rbp-BCh]
  unsigned int v39; // [rsp+48h] [rbp-B8h]
  unsigned int v41; // [rsp+50h] [rbp-B0h]
  int v42; // [rsp+54h] [rbp-ACh]
  int v43; // [rsp+58h] [rbp-A8h]
  __int128 v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  __int64 v47; // [rsp+80h] [rbp-80h]
  _QWORD v48[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v49[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-58h]
  __int64 v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v53; // [rsp+C0h] [rbp-40h]
  int v54; // [rsp+C4h] [rbp-3Ch]
  _QWORD v55[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E4h] [rbp-1Ch]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  int v60; // [rsp+F0h] [rbp-10h]
  int v61; // [rsp+F4h] [rbp-Ch]
  int v62; // [rsp+F8h] [rbp-8h]
  int v63; // [rsp+FCh] [rbp-4h]
  int v64; // [rsp+100h] [rbp+0h]
  int v65; // [rsp+104h] [rbp+4h]
  int v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+10Ch] [rbp+Ch]
  int v68; // [rsp+110h] [rbp+10h]
  int v69; // [rsp+114h] [rbp+14h]
  int v70; // [rsp+118h] [rbp+18h]
  __m128i si128; // [rsp+11Ch] [rbp+1Ch]
  int v72; // [rsp+12Ch] [rbp+2Ch]
  int v73; // [rsp+130h] [rbp+30h]
  int v74; // [rsp+134h] [rbp+34h]
  int v75; // [rsp+138h] [rbp+38h]
  int v76; // [rsp+13Ch] [rbp+3Ch]
  int v77; // [rsp+140h] [rbp+40h]
  _DWORD v78[2]; // [rsp+150h] [rbp+50h]
  char v79; // [rsp+158h] [rbp+58h] BYREF
  int v80; // [rsp+1A8h] [rbp+A8h]
  int v81; // [rsp+1ACh] [rbp+ACh]
  int v82; // [rsp+1B0h] [rbp+B0h]

  v50 = a3;
  v4 = a1;
  v51 = a1;
  v5 = 1;
  if ( *a2 )
  {
    v6 = sub_18005E29C(*a2, v49, *(_DWORD *)(a1 + 88));
    v7 = 1;
    v8 = *v6;
  }
  else
  {
    v48[1] = 0LL;
    v6 = v48;
    v7 = 2;
    v8 = 0LL;
  }
  v55[0] = v8;
  v55[1] = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    sub_180010910((__int64)v48);
  }
  if ( (v7 & 1) != 0 )
    sub_180010910((__int64)v49);
  if ( (unsigned int)sub_18005E428(v8) == 1 )
  {
    v9 = *sub_1800E6288(v8, &v45);
    v47 = v9;
    v10 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    v9 = *sub_1800E6248(v8, &v46);
    v47 = v9;
    v11 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int64 *))(**(_QWORD **)(v4 + 144) + 112LL))(
          *(_QWORD *)(v4 + 144),
          v9,
          0LL,
          1LL,
          0,
          &v52);
  v44 = 0LL;
  v13 = *(_QWORD *)(v4 + 80);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 + 8);
    while ( v14 )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14);
      if ( v15 == v14 )
      {
        v44 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  sub_1800E6A0C(v49, &v44);
  sub_180010910((__int64)&v44);
  sub_1800DD668(v49[0], v12);
  if ( v12 < 0 )
  {
    sub_18001F2B4(&stru_1801EA548, 3, "Failed to read Texture with HRESULT error 0x%.8x", v12);
    v5 = 0;
  }
  else
  {
    sub_18005E30C(v8);
    v56 = 0;
    v57 = 4;
    v58 = 4;
    v59 = 4;
    v60 = 8;
    v61 = 12;
    v62 = 16;
    v63 = 4;
    v64 = 4;
    v65 = 8;
    v66 = 12;
    v67 = 16;
    v68 = 2;
    v69 = 1;
    v70 = 2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7F0);
    v72 = 2;
    v73 = 4;
    v74 = 8;
    v75 = 4;
    v76 = 1;
    v77 = 2;
    v16 = (unsigned int)sub_18005E30C(v8);
    v78[0] = 0;
    v78[1] = 1;
    v18 = &v79;
    for ( i = (unsigned int)(v17 + 16); i; --i )
    {
      *(_DWORD *)v18 = 1;
      v18 += 4;
    }
    v80 = v17;
    v81 = 1;
    v82 = 1;
    v20 = v78[v16];
    v21 = sub_18005E468(v8);
    v38 = v22 * v21;
    v23 = sub_18005E3D8(v8);
    v43 = v24 * v23;
    v39 = v53;
    v42 = v54;
    v25 = v24;
    if ( v53 <= v24 )
      v25 = v53;
    v48[0] = v25;
    *(_QWORD *)&v44 = v52;
    v41 = (v20 + (unsigned int)sub_18005E3D8(v8) - 1) / v20;
    v26 = sub_18005E27C(v8);
    v37 = v26;
    v32 = 0;
    if ( v26 )
    {
      do
      {
        v33 = 0;
        if ( v27 )
        {
          v34 = v28 * v32;
          do
          {
            v35 = v34 + v38 * v33;
            if ( v35 >= a4 )
              break;
            sub_18001060C((void *)(v50 + v35), v38, (const void *)(v31 + v39 * v33++ + v29 * v32), v30);
            v27 = v41;
            v29 = v42;
            v30 = v48[0];
            v31 = v44;
          }
          while ( v33 < v41 );
          v28 = v43;
          v26 = v37;
        }
        ++v32;
      }
      while ( v32 < v26 );
      v4 = v51;
      v9 = v47;
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v4 + 144) + 120LL))(*(_QWORD *)(v4 + 144), v9, 0LL);
  }
  sub_180010910((__int64)v49);
  sub_180010910((__int64)v55);
  return v5;
}
