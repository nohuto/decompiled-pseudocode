/*
 * XREFs of sub_140B146C4 @ 0x140B146C4
 * Callers:
 *     sub_140B14B1C @ 0x140B14B1C (sub_140B14B1C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140372644 @ 0x140372644 (sub_140372644.c)
 *     sub_1403C68CC @ 0x1403C68CC (sub_1403C68CC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140502A3C @ 0x140502A3C (sub_140502A3C.c)
 *     sub_1406B4108 @ 0x1406B4108 (sub_1406B4108.c)
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140718AE8 @ 0x140718AE8 (sub_140718AE8.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F8AC @ 0x14082F8AC (sub_14082F8AC.c)
 *     sub_14082F914 @ 0x14082F914 (sub_14082F914.c)
 */

__int64 __fastcall sub_140B146C4(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  char v7; // r13
  unsigned int v8; // edi
  unsigned int v9; // eax
  __int64 v10; // rax
  int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // rax
  bool v15; // si
  _DWORD *v16; // r12
  unsigned int v17; // r15d
  int v18; // r14d
  __int64 v20; // rax
  __int64 v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // r15d
  ULONG_PTR v24; // rax
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // esi
  unsigned __int64 v28; // rax
  unsigned __int16 v29; // ax
  int v30; // esi
  ULONG_PTR v31; // rax
  PVOID v32; // rax
  char v33; // [rsp+30h] [rbp-D0h]
  char v34; // [rsp+31h] [rbp-CFh]
  unsigned int v35; // [rsp+34h] [rbp-CCh]
  int v36; // [rsp+38h] [rbp-C8h]
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  size_t Size; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+58h] [rbp-A8h]
  int v41; // [rsp+5Ch] [rbp-A4h]
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v47; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  wchar_t Str2[88]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v50[176]; // [rsp+150h] [rbp+50h] BYREF
  wchar_t Str1[88]; // [rsp+200h] [rbp+100h] BYREF

  v36 = a4;
  LODWORD(BugCheckParameter4) = 0;
  v39 = 0xFFFFFFFFLL;
  v43 = 0xFFFFFFFFLL;
  v44 = 0xFFFFFFFFLL;
  v37 = 0xFFFFFFFFLL;
  v46 = 0xFFFFFFFFLL;
  v45 = 0xFFFFFFFFLL;
  v47 = a3;
  DestinationString = 0LL;
  v7 = 0;
  v33 = 0;
  v34 = 0;
  v41 = 0;
  v40 = 0;
  LODWORD(Size) = 0;
  memset(v50, 0, 0xAAuLL);
  memset(Str2, 0, 0xAAuLL);
  memset(Str1, 0, 0xAAuLL);
  if ( !a3 )
    return 1LL;
  *a3 = 0;
  if ( a4 )
  {
    v8 = 70;
    if ( !(unsigned int)sub_140372644(a4, (__int64)Str1, 85, 0) )
      v36 = 0;
  }
  else
  {
    v8 = 38;
  }
  v9 = sub_14082F914((ULONG_PTR)&qword_140D6CCE0, a2, L"MUI\\Settings");
  if ( v9 != -1 )
  {
    v10 = (byte_140D6CD6C & 1) != 0
        ? sub_1406BF400((ULONG_PTR)&qword_140D6CCE0, v9, &v43)
        : sub_1407C9820((ULONG_PTR)&qword_140D6CCE0, v9, (unsigned int *)&v43);
    v11 = v10;
    if ( v10 )
    {
      RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
      v12 = sub_1406B4108((int)&qword_140D6CCE0, v11, (int)&DestinationString);
      if ( v12 != -1 )
      {
        v31 = (byte_140D6CD6C & 1) != 0
            ? sub_1406BF400((ULONG_PTR)&qword_140D6CCE0, v12, &v39)
            : sub_1407C9820((ULONG_PTR)&qword_140D6CCE0, v12, (unsigned int *)&v39);
        if ( v31 )
        {
          if ( *(_DWORD *)(v31 + 12) == 7 )
          {
            v32 = sub_14082F8AC((ULONG_PTR)&qword_140D6CCE0, v12, v31, (unsigned int *)&Size, &v45);
            if ( v32 )
            {
              if ( (unsigned int)Size < 0xA8 )
              {
                memmove(v50, v32, (unsigned int)Size);
                word_140D3CA04 = sub_1403C68CC(v50, 0);
              }
              if ( (byte_140D6CD6C & 1) != 0 )
                sub_1406BF450((__int64)&qword_140D6CCE0, &v45);
              else
                sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v45);
            }
          }
          if ( (byte_140D6CD6C & 1) != 0 )
            sub_1406BF450((__int64)&qword_140D6CCE0, &v39);
          else
            sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v39);
        }
      }
      if ( (byte_140D6CD6C & 1) != 0 )
        sub_1406BF450((__int64)&qword_140D6CCE0, &v43);
      else
        sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v43);
    }
  }
  v13 = sub_14082F914((ULONG_PTR)&qword_140D6CCE0, a2, L"MUI\\UILanguages");
  if ( v13 == -1 )
    return v8;
  v14 = (byte_140D6CD6C & 1) != 0
      ? sub_1406BF400((ULONG_PTR)&qword_140D6CCE0, v13, &v44)
      : sub_1407C9820((ULONG_PTR)&qword_140D6CCE0, v13, (unsigned int *)&v44);
  v15 = 0;
  v16 = (_DWORD *)v14;
  if ( !v14 )
    return v8;
  v8 &= ~2u;
  v17 = 0;
LABEL_17:
  v18 = v36;
  while ( 1 )
  {
    sub_1406BF278((ULONG_PTR)&qword_140D6CCE0, v16, v17++, &BugCheckParameter4);
    v35 = v17;
    if ( (_DWORD)BugCheckParameter4 == -1 )
      break;
    if ( (byte_140D6CD6C & 1) != 0 )
      v20 = sub_1406BF400((ULONG_PTR)&qword_140D6CCE0, (unsigned int)BugCheckParameter4, &v37);
    else
      v20 = sub_1407C9820((ULONG_PTR)&qword_140D6CCE0, BugCheckParameter4, (unsigned int *)&v37);
    v21 = v20;
    if ( !v20 )
      goto LABEL_17;
    RtlInitUnicodeString(&DestinationString, L"Type");
    v22 = sub_1406B4108((int)&qword_140D6CCE0, v21, (int)&DestinationString);
    v23 = v22;
    if ( v22 == -1 )
      goto LABEL_90;
    v24 = (byte_140D6CD6C & 1) != 0
        ? sub_1406BF400((ULONG_PTR)&qword_140D6CCE0, v22, &v39)
        : sub_1407C9820((ULONG_PTR)&qword_140D6CCE0, v22, (unsigned int *)&v39);
    if ( !v24 )
      goto LABEL_90;
    if ( *(_DWORD *)(v24 + 12) == 4 )
    {
      v25 = *(_DWORD *)sub_14082F8AC((ULONG_PTR)&qword_140D6CCE0, v23, v24, (unsigned int *)&Size, &v46);
      v40 = v25;
      if ( (v25 & 3) != 0 )
        v15 = (v25 & 0x10) != 0;
      if ( (byte_140D6CD6C & 1) != 0 )
        sub_1406BF450((__int64)&qword_140D6CCE0, &v46);
      else
        sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v46);
    }
    if ( (byte_140D6CD6C & 1) != 0 )
      sub_1406BF450((__int64)&qword_140D6CCE0, &v39);
    else
      sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v39);
    if ( !v15 )
    {
LABEL_90:
      if ( (byte_140D6CD6C & 1) != 0 )
        sub_1406BF450((__int64)&qword_140D6CCE0, &v37);
      else
        sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v37);
      v17 = v35;
      v18 = v36;
      goto LABEL_58;
    }
    v26 = *(unsigned __int16 *)(v21 + 72);
    if ( (*(_BYTE *)(v21 + 2) & 0x20) != 0 )
    {
      v27 = (unsigned __int16)(2 * v26);
      if ( v27 > 0xA8 )
        goto LABEL_90;
      sub_140718AE8(Str2, v27, (unsigned __int8 *)(v21 + 76), v26);
    }
    else
    {
      v27 = *(unsigned __int16 *)(v21 + 72);
      if ( v26 > 0xA8 )
        goto LABEL_90;
      memmove(Str2, (const void *)(v21 + 76), *(unsigned __int16 *)(v21 + 72));
    }
    if ( (byte_140D6CD6C & 1) != 0 )
      sub_1406BF450((__int64)&qword_140D6CCE0, &v37);
    else
      sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v37);
    v28 = v27 & 0xFFFFFFFE;
    if ( v28 >= 0xAA )
      sub_140502A3C();
    *(wchar_t *)((char *)Str2 + v28) = 0;
    v29 = sub_1403C68CC(Str2, 0);
    v17 = v35;
    v18 = v36;
    v30 = v29;
    if ( v29 && v29 != 127 )
    {
      if ( v36 && !v34 && !wcsicmp(Str1, Str2) )
      {
        v34 = 1;
        v8 &= ~0x40u;
      }
      v17 = v35;
      if ( v33 )
      {
        if ( !v7 && (v40 & 2) != 0 )
        {
          v7 = 1;
          v41 = v30;
        }
      }
      else if ( !v7 )
      {
        v41 = v30;
        if ( (v40 & 2) != 0 )
          v7 = 1;
        else
          v33 = 1;
      }
    }
LABEL_58:
    v15 = 0;
  }
  if ( (byte_140D6CD6C & 1) != 0 )
    sub_1406BF450((__int64)&qword_140D6CCE0, &v44);
  else
    sub_1407C97C0((__int64)&qword_140D6CCE0, (unsigned int *)&v44);
  if ( v33 || v7 )
    v8 &= ~4u;
  if ( v34 )
  {
    *v47 = v18;
    return 0;
  }
  if ( v7 || v33 )
  {
    *v47 = v41;
    return 0;
  }
  return v8;
}
