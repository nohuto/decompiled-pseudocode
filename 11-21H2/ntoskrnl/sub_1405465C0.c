/*
 * XREFs of sub_1405465C0 @ 0x1405465C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140459C2A @ 0x140459C2A (sub_140459C2A.c)
 *     sub_1405438E8 @ 0x1405438E8 (sub_1405438E8.c)
 *     sub_14054CA70 @ 0x14054CA70 (sub_14054CA70.c)
 */

__int64 __fastcall sub_1405465C0(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v8; // rax
  unsigned int v9; // ecx
  unsigned __int64 v10; // rbp
  int v11; // r14d
  int v12; // esi
  int v13; // r12d
  _QWORD *v14; // rcx
  unsigned int v15; // r8d
  char v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // r10
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int16 v22; // bx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-D0h]
  _OWORD v30[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v31[112]; // [rsp+60h] [rbp-A8h] BYREF

  memset(v30, 0, sizeof(v30));
  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  v8 = *a4;
  v9 = 0;
  v10 = 0LL;
  if ( *a4 )
  {
    v11 = 0;
    v12 = 199;
    v13 = 0x10000;
    if ( a2 )
      v13 = a2;
    do
    {
      if ( v8 <= 5 )
      {
        v14 = v31;
        if ( v8 >= 5 )
          v15 = 5;
        else
          v15 = *(_DWORD *)a4;
        v16 = 1;
        v12 |= 0x10000u;
      }
      else
      {
        v14 = sub_14039DF90((PHYSICAL_ADDRESS *)v30, 1, 0LL, 0LL);
        if ( *a4 >= 0xFE )
          v15 = 254;
        else
          v15 = *(_DWORD *)a4;
        v16 = 0;
        v12 &= ~0x10000u;
      }
      v14[1] = 0LL;
      v14[2] = 0LL;
      v14[3] = 0LL;
      *v14 = -1LL;
      *((_DWORD *)v14 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v14 + 5) = *(_DWORD *)a1;
      *((_DWORD *)v14 + 7) = v13;
      LODWORD(v28) = v12;
      if ( v15 )
      {
        v17 = v14 + 5;
        v18 = v15;
        v19 = (__int64 *)(a3 + 8 * v10);
        do
        {
          *(v17 - 1) = *v19 << 12;
          v20 = *v19++;
          *v17 = v20;
          v17 += 2;
          --v18;
        }
        while ( v18 );
      }
      v11 ^= ((unsigned __int16)v15 ^ (unsigned __int16)v11) & 0xFFF;
      HIDWORD(v28) = v11;
      if ( v16 )
      {
        v21 = HvlInvokeFastExtendedHypercall(v28, (__int64)v31, 16 * (v15 + 2), 0LL, 0);
        v22 = v21;
        WORD2(v29) = WORD2(v21);
      }
      else
      {
        v29 = HvlInvokeHypercall(v12);
        v22 = v29;
        sub_14039D8F0((__int64)v30);
      }
      v23 = WORD2(v29) & 0xFFF;
      *a4 -= v23;
      v10 += v23;
      if ( sub_140459C2A(v22) )
        v27 = sub_1405438E8(v25, v24, v26);
      else
        v27 = sub_14054CA70(v25);
      v9 = v27;
      if ( v27 < 0 )
        break;
      v8 = *a4;
    }
    while ( *a4 );
  }
  *a4 = v10;
  return v9;
}
