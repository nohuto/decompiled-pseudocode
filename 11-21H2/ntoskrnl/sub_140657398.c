/*
 * XREFs of sub_140657398 @ 0x140657398
 * Callers:
 *     sub_14071F2D8 @ 0x14071F2D8 (sub_14071F2D8.c)
 *     sub_1407C64A0 @ 0x1407C64A0 (sub_1407C64A0.c)
 *     sub_140917708 @ 0x140917708 (sub_140917708.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F12C @ 0x14082F12C (sub_14082F12C.c)
 */

char __fastcall sub_140657398(__int64 a1, __m128i *a2, UNICODE_STRING *a3, int a4, unsigned int *a5, ULONG_PTR *a6)
{
  unsigned int *v6; // r12
  unsigned __int16 v7; // r15
  ULONG_PTR *v11; // rcx
  __m128i v12; // xmm0
  unsigned __int16 v13; // bx
  __int16 v15; // r14
  ULONG_PTR v16; // rsi
  unsigned int v17; // ecx
  wchar_t *v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // r12d
  ULONG_PTR v21; // rcx
  ULONG_PTR *v23; // rax
  unsigned __int64 v24; // rax
  UNICODE_STRING v25; // [rsp+20h] [rbp-20h]
  int v26; // [rsp+90h] [rbp+50h] BYREF
  int v27; // [rsp+94h] [rbp+54h]
  int v28; // [rsp+98h] [rbp+58h]

  v28 = a4;
  v6 = a5;
  v7 = 0;
  v26 = -1;
  *a5 = -1;
  v11 = a6;
  v27 = 0;
  *a6 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(a3, 0LL);
    v11 = a6;
  }
  v12 = *a2;
  v13 = _mm_cvtsi128_si32(*a2);
  v25 = (UNICODE_STRING)v12;
  if ( v13 )
  {
    v15 = v12.m128i_i16[1];
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 32);
      *v11 = v16;
      v17 = *(_DWORD *)(a1 + 40);
      v18 = (wchar_t *)v12.m128i_i64[1];
      *v6 = v17;
    }
    else
    {
      v16 = qword_140D3CA28;
      v18 = (wchar_t *)v12.m128i_i64[1];
      v17 = *(_DWORD *)(*(_QWORD *)(qword_140D3CA28 + 64) + 36LL);
      do
      {
        if ( *v18 != 92 )
          break;
        v13 -= 2;
        ++v18;
        v15 -= 2;
        v25.Length = v13;
      }
      while ( v13 );
      v25.Buffer = v18;
      v25.MaximumLength = v15;
      if ( !v13 )
        goto LABEL_20;
      do
      {
        if ( *v18 == 92 )
          break;
        v13 -= 2;
        ++v18;
        v15 -= 2;
        v25.Length = v13;
      }
      while ( v13 );
      v25.Buffer = v18;
      v25.MaximumLength = v15;
    }
    while ( 1 )
    {
      if ( v13 )
      {
        do
        {
          if ( *v18 != 92 )
            break;
          v13 -= 2;
          ++v18;
          v15 -= 2;
          v25.Length = v13;
        }
        while ( v13 );
        v25.Buffer = v18;
        v25.MaximumLength = v15;
      }
LABEL_20:
      if ( a3 )
        *a3 = v25;
      if ( !v13 )
        break;
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        v19 = sub_1406BF400(v16, v17);
      else
        v19 = sub_1407C9820(v16);
      if ( !v19 )
        return 0;
      do
      {
        if ( v18[(unsigned __int64)v7 >> 1] == 92 )
          break;
        v7 += 2;
      }
      while ( v7 < v13 );
      if ( (*(_BYTE *)(v19 + 2) & 2) != 0 )
      {
        v20 = *(_DWORD *)(v19 + 28);
        v21 = v16;
        v16 = *(_QWORD *)(v19 + 36);
        if ( (*(_BYTE *)(v21 + 140) & 1) != 0 )
          sub_1406BF450(v21, &v26);
        else
          sub_1407C97C0(v21, &v26);
        if ( v16 != qword_140D3CA28 && v28 && (v28 & *(_DWORD *)(v16 + 4112)) == 0 )
          return 0;
        if ( !((*(_BYTE *)(v16 + 140) & 1) != 0 ? sub_1406BF400(v16, v20) : sub_1407C9820(v16)) )
          return 0;
        v6 = a5;
      }
      sub_14082F12C(v16);
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        sub_1406BF450(v16, &v26);
      else
        sub_1407C97C0(v16, &v26);
      v17 = 0;
      v23 = a6;
      v15 -= v7;
      v13 -= v7;
      *v6 = 0;
      v25.MaximumLength = v15;
      v25.Length = v13;
      *v23 = v16;
      v24 = v7;
      v7 = 0;
      v18 += v24 >> 1;
      v25.Buffer = v18;
      if ( !v13 )
        return 1;
    }
    return 1;
  }
  if ( a1 )
  {
    *v11 = *(_QWORD *)(a1 + 32);
    *v6 = *(_DWORD *)(a1 + 40);
    return 1;
  }
  return 0;
}
