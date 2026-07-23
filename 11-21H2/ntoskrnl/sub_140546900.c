/*
 * XREFs of sub_140546900 @ 0x140546900
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_140546900(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  bool v3; // zf
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  int v10; // r14d
  int v11; // esi
  _QWORD *v12; // rcx
  unsigned int v13; // r8d
  char v14; // r9
  _QWORD *v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // bx
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+38h] [rbp-D0h]
  _OWORD v23[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v24[112]; // [rsp+60h] [rbp-A8h] BYREF

  v3 = *(_BYTE *)(a1 + 4) == 0;
  memset(v23, 0, sizeof(v23));
  if ( !v3 )
    return 3221225659LL;
  v8 = *a3;
  result = 0LL;
  v9 = 0LL;
  if ( *a3 )
  {
    v10 = 0;
    v11 = 200;
    do
    {
      if ( v8 <= 0xB )
      {
        v12 = v24;
        if ( v8 >= 0xB )
          v13 = 11;
        else
          v13 = *(_DWORD *)a3;
        v14 = 1;
        v11 |= 0x10000u;
      }
      else
      {
        v12 = sub_14039DF90((PHYSICAL_ADDRESS *)v23, 1, 0LL, 0LL);
        if ( *a3 >= 0x1FD )
          v13 = 509;
        else
          v13 = *(_DWORD *)a3;
        v14 = 0;
        v11 &= ~0x10000u;
      }
      v12[1] = 0LL;
      v12[2] = 0LL;
      *v12 = -1LL;
      *((_DWORD *)v12 + 4) &= 0xFFFFFFF0;
      LODWORD(v21) = v11;
      *((_DWORD *)v12 + 5) = *(_DWORD *)a1;
      if ( v13 )
      {
        v15 = v12 + 3;
        v16 = a2 + 8 * v9 - 24 - (_QWORD)v12;
        v17 = v13;
        do
        {
          *v15 = *(_QWORD *)((char *)v15 + v16) << 12;
          ++v15;
          --v17;
        }
        while ( v17 );
      }
      v10 ^= ((unsigned __int16)v13 ^ (unsigned __int16)v10) & 0xFFF;
      HIDWORD(v21) = v10;
      if ( v14 )
      {
        v18 = HvlInvokeFastExtendedHypercall(v21, (__int64)v24, 8 * v13 + 24, 0LL, 0);
        v19 = v18;
        WORD2(v22) = WORD2(v18);
      }
      else
      {
        v22 = HvlInvokeHypercall(v11);
        v19 = v22;
        sub_14039D8F0((__int64)v23);
      }
      v20 = WORD2(v22) & 0xFFF;
      v9 += v20;
      *a3 -= v20;
      result = sub_14054CA70(v19);
    }
    while ( (int)result >= 0 && v8 );
  }
  *a3 = v9;
  return result;
}
