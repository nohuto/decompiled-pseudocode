/*
 * XREFs of sub_140849E68 @ 0x140849E68
 * Callers:
 *     sub_140849B04 @ 0x140849B04 (sub_140849B04.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14084A4C4 @ 0x14084A4C4 (sub_14084A4C4.c)
 *     sub_140997F34 @ 0x140997F34 (sub_140997F34.c)
 */

char __fastcall sub_140849E68(int a1, char a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r15
  __m128i si128; // xmm0
  int v9; // eax
  unsigned int v10; // ecx
  int *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  int v14; // r11d
  int *v15; // r8
  int v16; // r10d
  unsigned int i; // r9d
  __int64 *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  wchar_t **v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  int v25; // edx
  int v26; // edi
  int v27; // ecx
  int v28; // r8d
  int v29; // ecx
  _DWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // al
  _DWORD *v34; // r9
  int *v35; // r10
  __int64 v36; // r11
  char v37; // cl
  char v38; // dl
  int v39; // eax
  bool v40; // zf
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // r8
  int v44; // eax
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // edi
  int v48; // edi
  __m128i *v49; // rsi
  __int64 v50; // r14
  int *v51; // rdi
  unsigned __int8 v52; // r11
  __int64 v53; // rdx
  int v54; // eax
  char v55; // r11
  int v56; // esi
  char v57; // r10
  __m128i *v58; // rdi
  __int64 j; // rcx
  char result; // al
  __int32 v61; // ecx
  __int64 v62; // [rsp+38h] [rbp-D0h]
  ULONG ResultLength[2]; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v69[20]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 KeyValueInformation; // [rsp+F8h] [rbp-10h] BYREF
  __m128i v71; // [rsp+108h] [rbp+0h] BYREF
  __int64 v72; // [rsp+118h] [rbp+10h]

  v2 = 0LL;
  HIDWORD(v62) = 0;
  DestinationString = 0LL;
  ResultLength[0] = 0;
  KeyHandle = 0LL;
  HIDWORD(v5) = 0;
  DestinationString_8 = 0LL;
  memset(&ObjectAttributes_8, 0, 44);
  KeyValueInformation = 0LL;
  ValueName = 0LL;
  memset(v69, 0, 0x44uLL);
  v69[0] = 5;
  v6 = 7LL;
  v7 = 6LL;
  if ( a1 == 3 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_14001C770);
    *(__m128i *)&v69[1] = si128;
    v69[4] = 2;
    v69[2] = 2;
    v69[13] = 8;
    v69[14] = 5200;
    v69[15] = 55;
  }
  else
  {
    v69[14] = 100;
    v9 = 7;
    v69[13] = 10;
    if ( a1 == 5 )
      v9 = 23;
    v69[15] = v9;
    if ( ((a1 - 1) & 0xFFFFFFFA) == 0 && a1 != 6 )
    {
      v10 = 0;
      v11 = &v69[1];
      do
      {
        v12 = 2LL;
        do
        {
          if ( ((v10 - 2) & 0xFFFFFFFC) != 0 || (v13 = 3, v10 == 4) )
            v13 = 2;
          *v11++ = v13;
          --v12;
        }
        while ( v12 );
        ++v10;
      }
      while ( v10 < 6 );
      goto LABEL_17;
    }
    si128 = 0LL;
    *(_OWORD *)&v69[1] = 0LL;
  }
  *(__m128i *)&v69[9] = si128;
  *(__m128i *)&v69[5] = si128;
LABEL_17:
  v14 = 5;
  v15 = &v69[2];
  v16 = 5;
  for ( i = 0; i < 6; ++i )
  {
    switch ( i )
    {
      case 1u:
        v19 = qword_140C1D030;
        break;
      case 2u:
        v19 = qword_140C1D040;
        break;
      case 3u:
        v19 = qword_140C1D038;
        if ( !qword_140C1D038 )
        {
LABEL_27:
          v18 = &off_140C03040[534 * dword_140C232CC + 5];
          HIDWORD(v62) = HIDWORD(v5) | 0x1800;
          goto LABEL_24;
        }
LABEL_31:
        v18 = (__int64 *)(4272LL * dword_140C232CC + v19 + 40);
        v5 = *v18;
        v62 = *v18;
        goto LABEL_33;
      case 4u:
        goto LABEL_27;
      case 5u:
        v19 = qword_140C1D048;
        break;
      default:
        v18 = &off_140C03040[534 * dword_140C232CC + 5];
        HIDWORD(v62) |= 0x1800u;
LABEL_24:
        HIDWORD(v5) = HIDWORD(v62);
        goto LABEL_33;
    }
    if ( v19 )
      goto LABEL_31;
    v18 = 0LL;
    HIDWORD(v62) = 0;
    HIDWORD(v5) = 0;
LABEL_33:
    if ( (v5 & 0x100000000000LL) != 0 )
      v14 = *((_DWORD *)v18 + 1066);
    if ( (v5 & 0x80000000000LL) != 0 )
      v16 = *((_DWORD *)v18 + 1067);
    if ( v14 != 5 )
      *(v15 - 1) = v14;
    if ( v16 != 5 )
      *v15 = v16;
    v15 += 2;
  }
  v20 = v69[14];
  if ( HIDWORD(off_140C03040[534 * dword_140C232CC + 537]) )
    v20 = HIDWORD(off_140C03040[534 * dword_140C232CC + 537]);
  v69[14] = v20;
  if ( a2 )
  {
    dword_140C1FA80 = 5;
    dword_140C1FABC = -1;
    xmmword_140C1FA84 = (__int128)_mm_load_si128((const __m128i *)&xmmword_140027EE0);
    qword_140C1FAB4 = 0LL;
    xmmword_140C1FA94 = xmmword_140C1FA84;
    xmmword_140C1FAA4 = xmmword_140C1FA84;
    RtlInitUnicodeString(&DestinationString_8, L"\\Registry\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.ObjectName = &DestinationString_8;
    ObjectAttributes_8.RootDirectory = 0LL;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&DestinationString, 8u, &ObjectAttributes_8) >= 0 )
    {
      v21 = &off_140A39D68;
      ObjectAttributes_8.RootDirectory = DestinationString;
      do
      {
        RtlInitUnicodeString(&DestinationString_8, *(v21 - 1));
        if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes_8) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, *v21);
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformationAlign64,
                 &KeyValueInformation,
                 0x10u,
                 ResultLength) >= 0
            && (_DWORD)KeyValueInformation == 4 )
          {
            *(int *)((char *)&dword_140C1FA80 + *((unsigned int *)v21 + 2)) = DWORD2(KeyValueInformation);
          }
          ZwClose(KeyHandle);
        }
        v21 += 3;
        --v6;
      }
      while ( v6 );
      ZwClose(DestinationString);
    }
  }
  v22 = 0LL;
  v23 = 6LL;
  do
  {
    v24 = 2LL;
    do
    {
      v25 = *(_DWORD *)((char *)&xmmword_140C1FA84 + v22 * 4);
      if ( v25 != 5 )
        v69[v22 + 1] = v25;
      ++v22;
      --v24;
    }
    while ( v24 );
    --v23;
  }
  while ( v23 );
  v26 = v69[0];
  if ( dword_140C1FA80 != 5 )
    v26 = dword_140C1FA80;
  v27 = v69[13];
  v28 = v69[15];
  if ( (_DWORD)qword_140C1FAB4 )
    v27 = qword_140C1FAB4;
  v69[13] = v27;
  v29 = v69[14];
  if ( HIDWORD(qword_140C1FAB4) )
    v29 = HIDWORD(qword_140C1FAB4);
  v69[0] = v26;
  v69[14] = v29;
  if ( dword_140C1FABC != -1 )
    v28 = dword_140C1FABC;
  v69[15] = v28;
  if ( dword_140D050E0 )
  {
    v30 = &v69[1];
    v31 = 6LL;
    do
    {
      v32 = 2LL;
      do
      {
        if ( *v30 == 3 )
          *v30 = 4;
        ++v30;
        --v32;
      }
      while ( v32 );
      --v31;
    }
    while ( v31 );
    v28 = v69[15];
    v26 = v69[0];
  }
  v33 = 1;
  v34 = &v69[1];
  v35 = &v69[2];
  v36 = 6LL;
  do
  {
    v37 = v33;
    v38 = 0;
    v39 = *v35;
    v35 += 2;
    v40 = *v34 == v39;
    v34 += 2;
    if ( v40 )
      v38 = v37;
    v33 = v38;
    --v36;
  }
  while ( v36 );
  if ( v38 )
    v69[15] = v28 & 0xFFFFFFFB;
  v41 = (unsigned int)dword_140D05044;
  v42 = dword_140D05044;
  v43 = (unsigned int)dword_140D05068;
  if ( dword_140D05044 == -1 )
    v42 = dword_140D05068;
  if ( v42 )
  {
    v44 = dword_140D06960;
    if ( 10 * dword_140D05068 > (unsigned int)dword_140D06960 )
      v44 = 10 * dword_140D05068;
    v69[16] = v44;
  }
  v45 = dword_140D05044;
  v46 = 500LL;
  if ( dword_140D05044 == -1 )
    v45 = dword_140D05068;
  if ( v45 <= 0x1F4 )
  {
    v41 = 500LL;
  }
  else if ( dword_140D05044 == -1 )
  {
    v41 = (unsigned int)dword_140D05068;
  }
  qword_140D06D98 = (unsigned int)(10 * v41);
  if ( ((a1 - 1) & 0xFFFFFFFA) != 0 || a1 == 6 )
  {
    v56 = 1;
    v71 = _mm_load_si128((const __m128i *)&xmmword_140027ED0);
    v72 = v71.m128i_i64[0];
  }
  else
  {
    LOBYTE(v43) = 0;
    LOBYTE(v34) = 0;
    if ( v26 )
    {
      v47 = v26 - 2;
      if ( v47 )
      {
        v48 = v47 - 2;
        if ( v48 )
        {
          if ( v48 == 1 )
          {
            v49 = &v71;
            v50 = 6LL;
            v51 = &v69[1];
            do
            {
              LOBYTE(v46) = 0;
              v52 = 0;
              v53 = 2LL;
              do
              {
                v54 = *v51;
                if ( *v51 )
                {
                  if ( v54 == 2 )
                  {
                    v52 = 1;
                  }
                  else if ( v54 == 4 )
                  {
                    LOBYTE(v46) = 1;
                  }
                }
                else
                {
                  LOBYTE(v46) = 1;
                  v52 = 1;
                }
                ++v51;
                --v53;
              }
              while ( v53 );
              v49->m128i_i32[0] = sub_140997F34(v46, v52, v43, v34);
              LOBYTE(v43) = v46 | v43;
              v49 = (__m128i *)((char *)v49 + 4);
              LOBYTE(v34) = v55 | (unsigned __int8)v34;
              --v50;
            }
            while ( v50 );
          }
        }
        else
        {
          LOBYTE(v43) = 1;
        }
      }
      else
      {
        LOBYTE(v34) = 1;
      }
    }
    else
    {
      LOBYTE(v43) = 1;
      LOBYTE(v34) = 1;
    }
    LOBYTE(v41) = (_BYTE)v34;
    LOBYTE(v46) = v43;
    v56 = sub_140997F34(v46, v41, v43, v34);
    if ( v57 )
    {
      v58 = &v71;
      for ( j = 6LL; j; --j )
      {
        v58->m128i_i32[0] = v56;
        v58 = (__m128i *)((char *)v58 + 4);
      }
    }
  }
  result = sub_14084A4C4(v69);
  if ( dword_140D06BF8 != v56 )
  {
    dword_140D06BF8 = v56;
    result = 1;
  }
  do
  {
    v61 = v71.m128i_i32[v2];
    if ( dword_140D07088[v2] != v61 )
    {
      dword_140D07088[v2] = v61;
      result = 1;
    }
    ++v2;
    --v7;
  }
  while ( v7 );
  return result;
}
