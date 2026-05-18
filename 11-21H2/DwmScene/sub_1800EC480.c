/*
 * XREFs of sub_1800EC480 @ 0x1800EC480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800DA968 @ 0x1800DA968 (sub_1800DA968.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800EC480(__int64 a1, unsigned int **a2)
{
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rsi
  unsigned int *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int128 *, __int64); // r12
  __int64 v13; // rcx
  int v14; // eax
  unsigned int *v15; // rcx
  unsigned int *v16; // rdx
  __int128 v18; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  unsigned int v24; // [rsp+80h] [rbp-80h]
  __m128i si128; // [rsp+88h] [rbp-78h]
  int v26; // [rsp+98h] [rbp-68h]
  __m128i v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+B0h] [rbp-50h]
  __m128i v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+C8h] [rbp-38h]
  _OWORD v31[2]; // [rsp+D0h] [rbp-30h]
  int v32; // [rsp+F0h] [rbp-10h]
  int v33; // [rsp+F4h] [rbp-Ch]
  int v34; // [rsp+F8h] [rbp-8h]
  _DWORD v35[8]; // [rsp+100h] [rbp+0h]

  v20[2] = a2;
  v18 = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 8);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
      if ( v6 == v5 )
      {
        v7 = *(_QWORD *)(a1 + 72);
        v18 = *(_OWORD *)(a1 + 72);
        goto LABEL_6;
      }
    }
  }
  v7 = v18;
LABEL_6:
  v8 = *a2;
  v31[0] = _mm_load_si128((const __m128i *)&xmmword_1801BD860);
  v31[1] = _mm_load_si128((const __m128i *)&xmmword_1801BD780);
  v32 = 4;
  v33 = 5;
  v34 = 16;
  LODWORD(v21) = *((_DWORD *)v31 + *v8);
  si128 = _mm_load_si128(&xmmword_180128850);
  v26 = 5;
  DWORD1(v21) = si128.m128i_i32[v8[1]];
  v27 = si128;
  v28 = 5;
  DWORD2(v21) = v27.m128i_i32[v8[2]];
  v29 = si128;
  v30 = 5;
  HIDWORD(v21) = v29.m128i_i32[v8[3]];
  v9 = 0LL;
  v10 = 1;
  do
    v35[v9++] = v10++;
  while ( v9 < 8 );
  DWORD2(v22) = v35[v8[6]];
  DWORD1(v22) = v8[5];
  v24 = v8[12];
  HIDWORD(v23) = v8[11];
  LODWORD(v22) = v8[4];
  HIDWORD(v22) = v8[7];
  *(_QWORD *)&v23 = *((_QWORD *)v8 + 4);
  DWORD2(v23) = v8[10];
  sub_1800DA968(v7, &v19);
  v11 = v19;
  v12 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v19 + 184LL);
  v13 = *(_QWORD *)(a1 + 184);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 184) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v12(v11, &v21, a1 + 184);
  sub_1800DD668(v7, v14);
  *(_OWORD *)(a1 + 128) = v21;
  *(_OWORD *)(a1 + 144) = v22;
  *(_OWORD *)(a1 + 160) = v23;
  *(_DWORD *)(a1 + 176) = v24;
  v15 = *a2;
  v16 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v20[0] = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v15;
  v20[1] = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v16;
  sub_180010910((__int64)v20);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  sub_180010910((__int64)&v18);
  return sub_180010910((__int64)a2);
}
