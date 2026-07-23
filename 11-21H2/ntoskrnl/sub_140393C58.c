/*
 * XREFs of sub_140393C58 @ 0x140393C58
 * Callers:
 *     sub_140393B5C @ 0x140393B5C (sub_140393B5C.c)
 * Callees:
 *     sub_14037CCE8 @ 0x14037CCE8 (sub_14037CCE8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140393C58(__int64 a1, unsigned int *a2, unsigned int *a3, int *a4)
{
  unsigned int v4; // ebx
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // r12d
  unsigned int v10; // r15d
  int v11; // r14d
  __m128i *v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  char v16; // al
  __int64 v18; // rax
  unsigned int v19; // [rsp+20h] [rbp-E0h]
  _BYTE *v21; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+5Ch] [rbp-A4h]
  __int64 v25; // [rsp+60h] [rbp-A0h]
  _BYTE v26[136]; // [rsp+68h] [rbp-98h] BYREF

  v4 = *a2;
  memset(v26, 0, 0x80uLL);
  v25 = 1LL;
  v22[0] = 0LL;
  v22[1] = 0LL;
  v21 = v26;
  v7 = 0;
  v8 = *a3;
  v9 = 0;
  v23 = 0;
  v10 = 1024;
  v19 = v8;
  v24 = 8;
  v11 = 1024;
  sub_14037CCE8((__int64 *)(a1 + 448), v4, (__int64)&v21);
  if ( v23 == -1 || !v23 )
    v12 = (__m128i *)v22;
  else
    v12 = (__m128i *)&v21[16 * (v23 - 1)];
  v13 = v12->m128i_i64[0];
  v14 = _mm_srli_si128(*v12, 8).m128i_u64[0] - 8;
  while ( v13 )
  {
    v14 += 8LL;
    if ( v14 >= v13 + 8 * ((unsigned __int64)(unsigned __int16)*(_DWORD *)v13 + 2) )
    {
      v18 = *(_QWORD *)(v13 + 8);
      if ( v18 )
      {
        v13 = *(_QWORD *)(v13 + 8);
        v14 = v18 + 16;
      }
      v15 = (v18 + 16) & -(__int64)(v18 != 0);
    }
    else
    {
      v15 = v14;
    }
    if ( !v15 || v4 < *(_DWORD *)v15 || (*(_BYTE *)(v15 + 7) & 1) != 0 )
      break;
    v16 = *(_BYTE *)(v15 + 6);
    if ( v16 != 3 )
    {
      if ( v16 != 1 )
        break;
      v9 = 1;
    }
    if ( v7 )
    {
      if ( v11 != *(unsigned __int16 *)(v15 + 4) )
        goto LABEL_19;
    }
    else
    {
      v11 = *(unsigned __int16 *)(v15 + 4);
    }
    if ( ++v7 >= v19 )
      break;
    ++v4;
  }
  if ( !v7 )
    return v10;
LABEL_19:
  v10 = v11;
  *a3 = v7;
  *a4 = v9;
  return v10;
}
