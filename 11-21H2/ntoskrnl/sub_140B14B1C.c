/*
 * XREFs of sub_140B14B1C @ 0x140B14B1C
 * Callers:
 *     sub_140B131D4 @ 0x140B131D4 (sub_140B131D4.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068B018 @ 0x14068B018 (sub_14068B018.c)
 *     sub_14068B054 @ 0x14068B054 (sub_14068B054.c)
 *     sub_14068F7C4 @ 0x14068F7C4 (sub_14068F7C4.c)
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F108 @ 0x14082F108 (sub_14082F108.c)
 *     sub_14082F3C4 @ 0x14082F3C4 (sub_14082F3C4.c)
 *     sub_14082F914 @ 0x14082F914 (sub_14082F914.c)
 *     sub_140B146C4 @ 0x140B146C4 (sub_140B146C4.c)
 *     sub_140B14F3C @ 0x140B14F3C (sub_140B14F3C.c)
 *     sub_140B15184 @ 0x140B15184 (sub_140B15184.c)
 */

__int64 __fastcall sub_140B14B1C(_DWORD *a1, __int64 a2, char a3)
{
  wchar_t **v3; // rbx
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rax
  ULONG_PTR v10; // rdi
  unsigned int v11; // r15d
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rax
  int v16; // esi
  unsigned int v17; // esi
  unsigned int *v18; // rax
  unsigned int v19; // eax
  __int64 result; // rax
  unsigned int *v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // eax
  wchar_t *v26; // rcx
  __int64 v27; // rax
  int v28; // [rsp+78h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h] BYREF
  int v31; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  __int128 v33; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v34[54]; // [rsp+B8h] [rbp-50h] BYREF

  v3 = off_140B58CE0;
  LOWORD(v28) = 0;
  v31 = 0;
  v30 = 0xFFFFFFFFLL;
  v29 = 0xFFFFFFFFLL;
  v33 = 0LL;
  DestinationString = 0LL;
  memset(&v34[1], 0, 0x1A8uLL);
  sub_140347770((__int64)&v33);
  memset(&qword_140D6CCE0, 0, 0x12D8uLL);
  sub_14068B018((__int64)&qword_140D6CCE0);
  sub_14068B054(&qword_140D6CCE0);
  v34[0] = &qword_140D6CCE0;
  qword_140D6CD18 = (__int64)v34;
  v6 = sub_14068F7C4((ULONG_PTR)&qword_140D6CCE0, 4LL, 1, 0LL, a1, 0LL, 1, 0LL, 0, 0LL, 0LL, &v28, 0LL, (__int64)v34);
  if ( v6 < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&qword_140D6CCE0, v6);
  qword_140D6CD18 = 0LL;
  v7 = a1[9];
  if ( a3 == 1 )
  {
    if ( (byte_140D6CD6C & 1) != 0 )
      v27 = sub_1406BF400((ULONG_PTR)&qword_140D6CCE0, v7, &v29);
    else
      v27 = sub_1407C9820((ULONG_PTR)&qword_140D6CCE0, v7, (unsigned int *)&v29);
    if ( !v27 )
      goto LABEL_32;
    RtlInitUnicodeString(&DestinationString, L"ControlSetOverride");
    v11 = sub_14082F108((ULONG_PTR)&qword_140D6CCE0);
    if ( v11 == -1 )
      goto LABEL_32;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"current");
    v8 = sub_14082F3C4((ULONG_PTR)&qword_140D6CCE0, v7, (int)&DestinationString, (_BYTE *)&v28 + 1);
    if ( v8 == -1 )
      KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&qword_140D6CCE0, (ULONG_PTR)&DestinationString);
    if ( (byte_140D6CD6C & 1) != 0 )
      v9 = sub_1406BF400((ULONG_PTR)&qword_140D6CCE0, v8, &v29);
    else
      v9 = sub_1407C9820((ULONG_PTR)&qword_140D6CCE0, v8, (unsigned int *)&v29);
    v10 = v9;
    if ( !v9 )
      goto LABEL_32;
    RtlInitUnicodeString(&DestinationString, L"control");
    v11 = sub_14082F108((ULONG_PTR)&qword_140D6CCE0);
    if ( v11 == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v10, (ULONG_PTR)&DestinationString);
  }
  if ( (byte_140D6CD6C & 1) != 0 )
    sub_1406BF450((__int64)&qword_140D6CCE0, &v29);
  else
    sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v29);
  if ( L"Session Manager" )
  {
    do
    {
      if ( a3 != 1 || *((_BYTE *)v3 + 40) )
      {
        v13 = -1;
        v14 = sub_14082F914((ULONG_PTR)&qword_140D6CCE0, v11, *v3);
        if ( v14 != -1 )
        {
          if ( (byte_140D6CD6C & 1) != 0 )
            v15 = sub_1406BF400((ULONG_PTR)&qword_140D6CCE0, v14, &v29);
          else
            v15 = sub_1407C9820((ULONG_PTR)&qword_140D6CCE0, v14, (unsigned int *)&v29);
          v16 = v15;
          if ( !v15 )
            goto LABEL_32;
          RtlInitUnicodeString(&DestinationString, v3[1]);
          v17 = sub_1406B4108((int)&qword_140D6CCE0, v16, (int)&DestinationString);
          if ( (byte_140D6CD6C & 1) != 0 )
            sub_1406BF450((__int64)&qword_140D6CCE0, &v29);
          else
            sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v29);
          if ( v17 != -1 )
          {
            v21 = (unsigned int *)v3[3];
            v22 = 4;
            if ( v21 )
              v22 = *v21;
            if ( (byte_140D6CD6C & 1) != 0 )
              v23 = sub_1406BF400((ULONG_PTR)&qword_140D6CCE0, v17, &v30);
            else
              v23 = sub_1407C9820((ULONG_PTR)&qword_140D6CCE0, v17, (unsigned int *)&v30);
            v24 = v23;
            if ( !v23 )
              goto LABEL_32;
            v25 = *(_DWORD *)(v23 + 4);
            LOBYTE(v28) = v25 >= 0x80000000;
            v13 = v25 + 0x80000000;
            if ( v25 < 0x80000000 )
              v13 = v25;
            if ( v22 < v13 )
              v13 = v22;
            if ( v13 && !(unsigned __int8)sub_140B14F3C(0x80000000LL, v24, v3[2], v13) )
            {
              if ( (byte_140D6CD6C & 1) != 0 )
                sub_1406BF450((__int64)&qword_140D6CCE0, &v30);
              else
                sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v30);
              goto LABEL_32;
            }
            v26 = v3[4];
            if ( v26 )
              *(_DWORD *)v26 = *(_DWORD *)(v24 + 12);
            if ( (byte_140D6CD6C & 1) != 0 )
              sub_1406BF450((__int64)&qword_140D6CCE0, &v30);
            else
              sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v30);
          }
        }
        v18 = (unsigned int *)v3[3];
        if ( v18 )
          *v18 = v13;
      }
      v3 += 6;
    }
    while ( *v3 );
  }
  if ( dword_140D68168 == 1 )
  {
    dword_140D3CA30 = (unsigned __int16)sub_140B15184(qword_140D68870, (unsigned int)dword_140D6816C);
  }
  else if ( !a3 )
  {
    dword_140D3CA30 = 1033;
  }
  if ( dword_140D68174 == 1 )
    word_140D3CA00 = sub_140B15184(qword_140D68888, (unsigned int)dword_140D68170);
  if ( !a3 )
  {
    v19 = sub_140B146C4(v12, v11, &v31, (unsigned __int16)word_140D3CA00);
    if ( v19 )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, v19, 0LL, 0LL);
      word_140D3CA00 = dword_140D3CA30;
    }
    else if ( (unsigned __int16)word_140D3CA00 != v31 )
    {
      word_140D3CA00 = v31;
      dword_140D686C8 = 1;
    }
  }
  dword_140D3CBE8 = dword_140D3CA30;
  if ( !word_140D3CA04 || a3 == 1 )
    word_140D3CA04 = word_140D3CA00;
LABEL_32:
  result = v33;
  *((_QWORD *)KeGetCurrentThread() + 284) = v33;
  return result;
}
