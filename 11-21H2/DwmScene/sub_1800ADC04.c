/*
 * XREFs of sub_1800ADC04 @ 0x1800ADC04
 * Callers:
 *     sub_1800ADBE0 @ 0x1800ADBE0 (sub_1800ADBE0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_180068348 @ 0x180068348 (sub_180068348.c)
 *     sub_1800694A0 @ 0x1800694A0 (sub_1800694A0.c)
 */

char __fastcall sub_1800ADC04(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  void **v19; // rbx
  int v20; // eax
  __int64 *v21; // rdx
  size_t v22; // r8
  __int64 *v23; // rax
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbx
  _QWORD *v29; // rcx
  __int64 v31; // [rsp+28h] [rbp-19h] BYREF
  __int64 v32; // [rsp+30h] [rbp-11h]
  __int64 v33[4]; // [rsp+38h] [rbp-9h] BYREF
  __m128i si128; // [rsp+58h] [rbp+17h] BYREF
  int v35; // [rsp+68h] [rbp+27h]
  int v36; // [rsp+6Ch] [rbp+2Bh]
  int v37; // [rsp+70h] [rbp+2Fh]
  __int128 v38; // [rsp+74h] [rbp+33h]
  int v39; // [rsp+84h] [rbp+43h]
  int v40; // [rsp+88h] [rbp+47h]

  v4 = sub_18002850C(a2);
  v5 = sub_180037388(v4);
  v6 = sub_18001875C(si128.m128i_i64, (__int64)&qword_1801F5FF8);
  v7 = sub_180057684(v5, v33, (char **)v6);
  v8 = *v7;
  v9 = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  v31 = *(_QWORD *)(a1 + 304);
  v10 = *(_QWORD *)(a1 + 312);
  *(_QWORD *)(a1 + 304) = v8;
  v32 = v10;
  *(_QWORD *)(a1 + 312) = v9;
  sub_180010910((__int64)&v31);
  sub_180010910((__int64)v33);
  v11 = (__int64 *)sub_1800694A0(*(_QWORD *)(a1 + 304), v33);
  v12 = *v11;
  v13 = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  v31 = *(_QWORD *)(a1 + 288);
  v14 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 288) = v12;
  v32 = v14;
  *(_QWORD *)(a1 + 296) = v13;
  sub_180010910((__int64)&v31);
  sub_180010910((__int64)v33);
  v15 = sub_180068348(*(__int128 **)(a1 + 304), v33);
  v16 = *v15;
  v17 = v15[1];
  *v15 = 0LL;
  v15[1] = 0LL;
  v31 = *(_QWORD *)(a1 + 272);
  v18 = *(_QWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 272) = v16;
  v32 = v18;
  *(_QWORD *)(a1 + 280) = v17;
  sub_180010910((__int64)&v31);
  sub_180010910((__int64)v33);
  v19 = (void **)(a1 + 336);
  sub_180012190((__int64 *)(a1 + 336), byte_180128042, 0LL);
  v20 = *(_DWORD *)(a1 + 372);
  switch ( v20 )
  {
    case 8:
      v21 = (__int64 *)&qword_1801F5F58;
      if ( v19 != &qword_1801F5F58 )
      {
        v22 = qword_1801F5F68;
        if ( (unsigned __int64)qword_1801F5F70 >= 0x10 )
          v21 = (__int64 *)qword_1801F5F58;
        goto LABEL_15;
      }
      break;
    case 16:
      v21 = &qword_1801F5F78;
      if ( v19 != (void **)&qword_1801F5F78 )
      {
        v22 = qword_1801F5F88;
        if ( (unsigned __int64)qword_1801F5F90 >= 0x10 )
          v21 = (__int64 *)qword_1801F5F78;
        goto LABEL_15;
      }
      break;
    case 32:
      v21 = &qword_1801F5F98;
      if ( v19 != (void **)&qword_1801F5F98 )
      {
        v22 = qword_1801F5FA8;
        if ( (unsigned __int64)qword_1801F5FB0 >= 0x10 )
          v21 = (__int64 *)qword_1801F5F98;
LABEL_15:
        sub_180012190((__int64 *)(a1 + 336), v21, v22);
      }
      break;
  }
  v23 = (__int64 *)sub_18002850C(a2);
  v24 = sub_180017428(v23, v33);
  v25 = *v24;
  v26 = v24[1];
  *v24 = 0LL;
  v24[1] = 0LL;
  v31 = *(_QWORD *)(a1 + 320);
  v27 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 320) = v25;
  v32 = v27;
  *(_QWORD *)(a1 + 328) = v26;
  sub_180010910((__int64)&v31);
  sub_180010910((__int64)v33);
  v28 = *(_QWORD *)(a1 + 320);
  v33[2] = 0LL;
  v33[3] = 15LL;
  LOBYTE(v33[0]) = 0;
  sub_180012190(v33, "Image Processing Blur Sampler", 0x1DuLL);
  sub_18002BC44(v28, v33);
  v35 = 0;
  v39 = 0;
  v29 = *(_QWORD **)(a1 + 320);
  v40 = 2139095039;
  v38 = 0LL;
  v36 = 1;
  v37 = 7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7B0);
  return sub_18005C210(v29, &si128, 0LL);
}
