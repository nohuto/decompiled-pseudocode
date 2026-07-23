/*
 * XREFs of sub_140546300 @ 0x140546300
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

__int64 __fastcall sub_140546300(__int64 a1, int a2, __int64 a3, _QWORD *a4, unsigned __int64 *a5, char a6)
{
  bool v6; // zf
  __int64 v7; // rbx
  _QWORD *v8; // r10
  _DWORD *v10; // r13
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // ebp
  unsigned __int64 v14; // r14
  int v15; // r15d
  int v16; // esi
  _QWORD *v17; // rdx
  unsigned int v18; // r8d
  char v19; // r11
  int v20; // eax
  int v21; // eax
  unsigned __int64 *v22; // rcx
  __int64 v23; // r9
  char *v24; // r10
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int16 v28; // bx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // [rsp+30h] [rbp-F8h]
  __int64 v34; // [rsp+38h] [rbp-F0h]
  __int64 v36; // [rsp+48h] [rbp-E0h]
  _OWORD v38[2]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v39[112]; // [rsp+80h] [rbp-A8h] BYREF

  v6 = *(_BYTE *)(a1 + 4) == 0;
  v7 = a3;
  v34 = a3;
  v8 = a4;
  memset(v38, 0, sizeof(v38));
  v10 = (_DWORD *)a1;
  if ( !v6 )
    return 3221225659LL;
  v12 = *a5;
  result = 0LL;
  v13 = 0;
  v14 = 0LL;
  if ( *a5 )
  {
    v15 = 0;
    v16 = 179;
    do
    {
      if ( v12 <= 9 )
      {
        v17 = v39;
        if ( v12 >= 9 )
          v18 = 9;
        else
          v18 = *(_DWORD *)a5;
        v19 = 1;
        v16 |= 0x10000u;
      }
      else
      {
        v17 = sub_14039DF90((PHYSICAL_ADDRESS *)v38, 1, 0LL, 0LL);
        if ( *a5 >= 0x1FB )
          v18 = 507;
        else
          v18 = *(_DWORD *)a5;
        v8 = a4;
        v19 = 0;
        v16 &= ~0x10000u;
      }
      v17[1] = 0LL;
      v17[2] = 0LL;
      v17[3] = 0LL;
      v17[4] = 0LL;
      *v17 = -1LL;
      *((_DWORD *)v17 + 4) &= 0xFFFFFFF0;
      LODWORD(v33) = v16;
      *((_DWORD *)v17 + 5) = *v10;
      v17[4] = v7;
      if ( a2 )
      {
        v21 = (a2 & 1) != 0;
        if ( (a2 & 2) != 0 )
          v21 |= 2u;
        v20 = v13 | v21;
      }
      else
      {
        v20 = 0x10000;
      }
      *((_DWORD *)v17 + 7) = v20;
      if ( v18 )
      {
        v22 = v17 + 5;
        v23 = 0LL;
        v24 = (char *)v8 + 8 * v14 - 40 - (_QWORD)v17;
        v25 = v18;
        do
        {
          if ( a2 )
          {
            if ( a6 )
              v26 = v14 + v23 + *a4;
            else
              v26 = *(unsigned __int64 *)((char *)v22 + (_QWORD)v24);
          }
          else
          {
            v26 = 0LL;
          }
          *v22 = v26;
          ++v23;
          ++v22;
          --v25;
        }
        while ( v25 );
        v10 = (_DWORD *)a1;
      }
      v15 ^= ((unsigned __int16)v18 ^ (unsigned __int16)v15) & 0xFFF;
      HIDWORD(v33) = v15;
      if ( v19 )
      {
        v27 = HvlInvokeFastExtendedHypercall(v33, (__int64)v39, 8 * v18 + 40, 0LL, 0);
        v28 = v27;
        WORD2(v36) = WORD2(v27);
      }
      else
      {
        v36 = HvlInvokeHypercall(v16);
        v28 = v36;
        sub_14039D8F0((__int64)v38);
      }
      v29 = WORD2(v36) & 0xFFF;
      *a5 -= v29;
      v14 += v29;
      v34 += (unsigned __int16)(WORD2(v36) & 0xFFF) << 12;
      if ( sub_140459C2A(v28) )
      {
        result = sub_1405438E8(v31, v30, v32);
        if ( (int)result < 0 )
        {
          if ( v13 == 0x80000000 )
            break;
          v13 = 0x80000000;
          result = 0LL;
        }
      }
      else
      {
        result = sub_14054CA70(v31);
        if ( (int)result < 0 )
          break;
      }
      v12 = *a5;
      v7 = v34;
      v8 = a4;
    }
    while ( *a5 );
  }
  *a5 = v14;
  return result;
}
