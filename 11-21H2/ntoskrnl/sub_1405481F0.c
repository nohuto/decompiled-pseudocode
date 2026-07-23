/*
 * XREFs of sub_1405481F0 @ 0x1405481F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 */

__int64 __fastcall sub_1405481F0(__int64 a1, int a2, __int64 a3, char a4, _OWORD *a5)
{
  unsigned int v9; // esi
  _QWORD *v10; // rax
  __int16 v11; // bx
  __int64 v12; // rdx
  __int16 v13; // cx
  __int64 v14; // r8
  __int64 result; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  __m256i v18; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v19; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+60h] [rbp-A8h]
  _BYTE v21[2080]; // [rsp+68h] [rbp-A0h] BYREF

  v19.m256i_i32[0] = 0;
  v20 = 0;
  memset(&v18.m256i_u64[1], 0, 24);
  memset(&v19.m256i_u64[1], 0, 24);
  memset(v21, 0, 0x81FuLL);
  v9 = 0;
  while ( 1 )
  {
    v10 = sub_14039DF90((PHYSICAL_ADDRESS *)&v18.m256i_i64[1], 1, (__int64)v21, 40LL);
    *(_DWORD *)v10 = 6;
    v10[1] = a1;
    *((_DWORD *)v10 + 4) = a2;
    v10[3] = a3;
    *((_BYTE *)v10 + 32) = a4;
    v11 = HvlInvokeHypercall(111);
    sub_14039D8F0((__int64)&v18.m256i_i64[1]);
    if ( !sub_140459C2A(v11) )
      break;
    result = sub_1405438E8(v13, v12, v14);
    if ( (int)result < 0 )
      return result;
  }
  if ( v11 )
    return 3221225473LL;
  v16 = sub_14039DF90((PHYSICAL_ADDRESS *)&v18.m256i_i64[1], 1, (__int64)v21, 8LL);
  v17 = sub_14039DF90((PHYSICAL_ADDRESS *)&v19.m256i_i64[1], 2, (__int64)&v21[16], 1032LL);
  *(_DWORD *)v16 = 7;
  if ( (unsigned __int16)HvlInvokeHypercall(123) )
    v9 = -1073741823;
  else
    *a5 = *(_OWORD *)v17;
  sub_14039D8F0((__int64)&v19.m256i_i64[1]);
  sub_14039D8F0((__int64)&v18.m256i_i64[1]);
  return v9;
}
