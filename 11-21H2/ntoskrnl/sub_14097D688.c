/*
 * XREFs of sub_14097D688 @ 0x14097D688
 * Callers:
 *     sub_14097BD88 @ 0x14097BD88 (sub_14097BD88.c)
 * Callees:
 *     RtlCopyBitMapEx @ 0x140230180 (RtlCopyBitMapEx.c)
 *     sub_140281A58 @ 0x140281A58 (sub_140281A58.c)
 *     sub_14030B820 @ 0x14030B820 (sub_14030B820.c)
 *     sub_1405AB970 @ 0x1405AB970 (sub_1405AB970.c)
 *     sub_1405AC8D4 @ 0x1405AC8D4 (sub_1405AC8D4.c)
 *     sub_14097CAE8 @ 0x14097CAE8 (sub_14097CAE8.c)
 *     sub_14097CF84 @ 0x14097CF84 (sub_14097CF84.c)
 */

__int64 __fastcall sub_14097D688(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 result; // rax
  __int128 *v10; // r14
  __int64 *v11; // rdx
  __int128 v12; // [rsp+28h] [rbp-29h] BYREF
  __int128 v13; // [rsp+38h] [rbp-19h] BYREF
  __m256i v14; // [rsp+48h] [rbp-9h] BYREF
  __int128 v15; // [rsp+68h] [rbp+17h]
  __int128 v16; // [rsp+78h] [rbp+27h]
  __int128 v17; // [rsp+88h] [rbp+37h]
  __int64 v18; // [rsp+98h] [rbp+47h]

  CurrentThread = KeGetCurrentThread();
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
    v3 = *((_QWORD *)CurrentThread + 23);
  else
    v3 = 0LL;
  v4 = *(_OWORD *)(a1 + 16);
  v13 = *(_OWORD *)a1;
  v5 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)v14.m256i_i8 = v4;
  v6 = *(_OWORD *)(a1 + 48);
  *(_OWORD *)&v14.m256i_u64[2] = v5;
  v7 = *(_OWORD *)(a1 + 64);
  v15 = v6;
  v8 = *(_OWORD *)(a1 + 80);
  v16 = v7;
  v18 = *(_QWORD *)(a1 + 96);
  v17 = v8;
  result = sub_14097CAE8((__int64)&v13);
  if ( (int)result >= 0 )
  {
    v10 = (__int128 *)(a1 + 24);
    if ( v3 )
    {
      sub_14030B820((__int64)CurrentThread, v3);
      if ( (*(_DWORD *)(v3 + 1124) & 0x20) != 0 )
      {
        sub_140281A58((__int64)CurrentThread, v3);
        sub_14097CF84(v3, &v14.m256i_i64[1]);
        return 3221225738LL;
      }
    }
    sub_1405AB970(a1, (__int64)CurrentThread);
    if ( v14.m256i_i64[1] > *(_QWORD *)v10 )
    {
      RtlCopyBitMapEx((unsigned __int64 *)(a1 + 24), &v14.m256i_i64[1], 0LL);
      v12 = *v10;
      *v10 = *(_OWORD *)&v14.m256i_u64[1];
      sub_1405AC8D4(a1, (__int64)CurrentThread);
      if ( v3 )
        sub_140281A58((__int64)CurrentThread, v3);
      if ( !*((_QWORD *)&v12 + 1) )
        return 0LL;
      v11 = (__int64 *)&v12;
    }
    else
    {
      sub_1405AC8D4(a1, (__int64)CurrentThread);
      if ( v3 )
        sub_140281A58((__int64)CurrentThread, v3);
      v11 = &v14.m256i_i64[1];
    }
    sub_14097CF84(v3, v11);
    return 0LL;
  }
  return result;
}
