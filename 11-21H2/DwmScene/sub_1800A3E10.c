/*
 * XREFs of sub_1800A3E10 @ 0x1800A3E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180017428 @ 0x180017428 (sub_180017428.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18005C210 @ 0x18005C210 (sub_18005C210.c)
 *     sub_1800A3BA0 @ 0x1800A3BA0 (sub_1800A3BA0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800A3E10(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __m128i si128; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  _BYTE v20[20]; // [rsp+58h] [rbp-28h]
  int v21; // [rsp+6Ch] [rbp-14h]
  int v22; // [rsp+70h] [rbp-10h]

  v4 = (__int64 *)sub_18002850C(a2);
  v5 = sub_180017428(v4, &si128);
  v6 = *v5;
  v7 = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  v16 = *(_QWORD *)(a1 + 216);
  v17 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(a1 + 216) = v6;
  *(_QWORD *)(a1 + 224) = v7;
  sub_180010910((__int64)&v16);
  sub_180010910((__int64)&si128);
  v8 = *(_QWORD *)(a1 + 216);
  v19 = 0LL;
  *(_QWORD *)v20 = 15LL;
  si128.m128i_i8[0] = 0;
  sub_180012190(si128.m128i_i64, "Image Processing Blur Sampler", 0x1DuLL);
  sub_18002BC44(v8, si128.m128i_i64);
  v9 = *(_QWORD **)(a1 + 216);
  v19 = 0x100000000LL;
  v21 = 0;
  v22 = 2139095039;
  *(_OWORD *)&v20[4] = 0LL;
  *(_DWORD *)v20 = 7;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801BD7B0);
  sub_18005C210(v9, &si128, 0LL);
  v10 = *(int *)(a1 + 144);
  v11 = sub_1800A3BA0((__int64 *)a1, si128.m128i_i64);
  v12 = *v11;
  v13 = v11[1];
  *v11 = 0LL;
  v11[1] = 0LL;
  v16 = *(_QWORD *)(a1 + 184);
  v14 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 184) = v12;
  v17 = v14;
  *(_QWORD *)(a1 + 192) = v13;
  sub_180010910((__int64)&v16);
  sub_180010910((__int64)&si128);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, int))(**(_QWORD **)(a1 + 184) + 40LL))(
           *(_QWORD *)(a1 + 184),
           a2,
           2LL,
           (unsigned int)dword_180137208[v10],
           dword_1801371F8[v10]);
}
