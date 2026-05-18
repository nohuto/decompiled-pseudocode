/*
 * XREFs of sub_1800A6640 @ 0x1800A6640
 * Callers:
 *     <none>
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
 *     sub_1800A3BA0 @ 0x1800A3BA0 (sub_1800A3BA0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A6640(__int64 a1, __int64 a2)
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
  __int64 *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rcx
  __int64 v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v32; // [rsp+30h] [rbp-29h] BYREF
  __int64 v33; // [rsp+38h] [rbp-21h]
  __int64 v34[4]; // [rsp+40h] [rbp-19h] BYREF
  __m128i si128; // [rsp+60h] [rbp+7h] BYREF
  int v36; // [rsp+70h] [rbp+17h]
  int v37; // [rsp+74h] [rbp+1Bh]
  int v38; // [rsp+78h] [rbp+1Fh]
  __int128 v39; // [rsp+7Ch] [rbp+23h]
  int v40; // [rsp+8Ch] [rbp+33h]
  int v41; // [rsp+90h] [rbp+37h]

  v4 = sub_18002850C(a2);
  v5 = sub_180037388(v4);
  v6 = sub_18001875C(si128.m128i_i64, (__int64)&qword_1801F5FF8);
  v7 = sub_180057684(v5, v34, (char **)v6);
  v8 = *v7;
  v9 = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  v32 = *(_QWORD *)(a1 + 216);
  v10 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 216) = v8;
  v33 = v10;
  *(_QWORD *)(a1 + 224) = v9;
  sub_180010910((__int64)&v32);
  sub_180010910((__int64)v34);
  v11 = (__int64 *)sub_1800694A0(*(_QWORD *)(a1 + 216), v34);
  v12 = *v11;
  v13 = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  v32 = *(_QWORD *)(a1 + 200);
  v14 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = v12;
  v33 = v14;
  *(_QWORD *)(a1 + 208) = v13;
  sub_180010910((__int64)&v32);
  sub_180010910((__int64)v34);
  v15 = sub_180068348(*(__int128 **)(a1 + 216), v34);
  v16 = *v15;
  v17 = v15[1];
  *v15 = 0LL;
  v15[1] = 0LL;
  v32 = *(_QWORD *)(a1 + 248);
  v18 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 248) = v16;
  v33 = v18;
  *(_QWORD *)(a1 + 256) = v17;
  sub_180010910((__int64)&v32);
  sub_180010910((__int64)v34);
  v19 = (__int64 *)sub_18002850C(a2);
  v20 = sub_180017428(v19, v34);
  v21 = *v20;
  v22 = v20[1];
  *v20 = 0LL;
  v20[1] = 0LL;
  v32 = *(_QWORD *)(a1 + 264);
  v23 = *(_QWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 264) = v21;
  v33 = v23;
  *(_QWORD *)(a1 + 272) = v22;
  sub_180010910((__int64)&v32);
  sub_180010910((__int64)v34);
  v24 = *(_QWORD *)(a1 + 264);
  v34[2] = 0LL;
  v34[3] = 15LL;
  LOBYTE(v34[0]) = 0;
  sub_180012190(v34, "Image Processing Bloom Sampler", 0x1EuLL);
  sub_18002BC44(v24, v34);
  v25 = *(_QWORD **)(a1 + 264);
  v36 = 0;
  v40 = 0;
  v41 = 2139095039;
  v39 = 0LL;
  v37 = 1;
  v38 = 7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7B0);
  sub_18005C210(v25, &si128, 0LL);
  v26 = *(int *)(a1 + 144);
  v27 = sub_1800A3BA0((__int64 *)a1, v34);
  v28 = *v27;
  v29 = v27[1];
  *v27 = 0LL;
  v27[1] = 0LL;
  v32 = *(_QWORD *)(a1 + 184);
  v30 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 184) = v28;
  v33 = v30;
  *(_QWORD *)(a1 + 192) = v29;
  sub_180010910((__int64)&v32);
  sub_180010910((__int64)v34);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_180137208[v26],
           dword_180137330[v26]);
}
