/*
 * XREFs of sub_140547F80 @ 0x140547F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054C8F0 @ 0x14054C8F0 (sub_14054C8F0.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140547F80(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  _OWORD *v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  int v16; // ecx
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned int v19; // ebx
  __m256i v21; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  _DWORD v24[68]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v25[32]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v26[256]; // [rsp+1A8h] [rbp+A0h] BYREF

  v22.m256i_i32[0] = 0;
  LODWORD(v23) = 0;
  memset(&v21.m256i_u64[1], 0, 24);
  memset(&v22.m256i_u64[1], 0, 24);
  memset(&v24[2], 0, 0x100uLL);
  v9 = 0LL;
  v10 = sub_14039DF90((PHYSICAL_ADDRESS *)&v21.m256i_i64[1], 1, (__int64)v26, 128LL);
  *(_OWORD *)v10 = 0LL;
  *((_OWORD *)v10 + 1) = 0LL;
  *((_OWORD *)v10 + 2) = 0LL;
  v10[6] = 0LL;
  *(_OWORD *)(v10 + 5) = *a3;
  v24[0] = 2097153;
  memset(&v24[1], 0, 0x104uLL);
  v11 = *((unsigned __int16 *)a4 + 4);
  v12 = *a4;
  if ( (_WORD)v11 )
  {
    if ( HIWORD(v24[0]) <= (unsigned __int16)v11 )
      goto LABEL_5;
    LOWORD(v24[0]) = v11 + 1;
  }
  *(_QWORD *)&v24[2 * v11 + 2] |= v12;
LABEL_5:
  v13 = sub_14054C8F0(v24, v10 + 6, (v21.m256i_i8[8] & 2) != 0 ? 64 : 4032);
  if ( v13 == -1 )
  {
    sub_14039D8F0((__int64)&v21.m256i_i64[1]);
    v10 = sub_14039DF90((PHYSICAL_ADDRESS *)&v21.m256i_i64[1], 1, 0LL, 0LL);
    *(_OWORD *)v10 = 0LL;
    *((_OWORD *)v10 + 1) = 0LL;
    *((_OWORD *)v10 + 2) = 0LL;
    v10[6] = 0LL;
    *(_OWORD *)(v10 + 5) = *a3;
    v13 = sub_14054C8F0(v24, v10 + 6, 4032LL);
  }
  *((_DWORD *)v10 + 11) |= 2u;
  v14 = v13 + 64;
  *v10 = -1LL;
  v10[1] = a1;
  *((_OWORD *)v10 + 1) = *a2;
  if ( a5 )
  {
    v15 = sub_14039DF90((PHYSICAL_ADDRESS *)&v22.m256i_i64[1], 2, (__int64)v25, 16LL);
    v16 = 127;
    v9 = v15;
  }
  else
  {
    v16 = 126;
  }
  v17 = (v14 << 14) - 802816;
  if ( v14 <= 0x38 )
    v17 = 114688;
  v18 = HvlInvokeHypercall(v16 | v17 & 0x3FE0000u);
  if ( v18 )
  {
    v19 = sub_14054CA70(v18);
    if ( a5 )
      goto LABEL_16;
  }
  else
  {
    v19 = 0;
    if ( a5 )
    {
      *a5 = *v9;
LABEL_16:
      sub_14039D8F0((__int64)&v22.m256i_i64[1]);
    }
  }
  sub_14039D8F0((__int64)&v21.m256i_i64[1]);
  return v19;
}
