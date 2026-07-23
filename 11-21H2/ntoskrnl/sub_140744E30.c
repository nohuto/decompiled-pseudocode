/*
 * XREFs of sub_140744E30 @ 0x140744E30
 * Callers:
 *     sub_1407455A8 @ 0x1407455A8 (sub_1407455A8.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_14094AA64 @ 0x14094AA64 (sub_14094AA64.c)
 *     sub_14094D7E8 @ 0x14094D7E8 (sub_14094D7E8.c)
 *     sub_14094ED84 @ 0x14094ED84 (sub_14094ED84.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14067996C @ 0x14067996C (sub_14067996C.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407454A8 @ 0x1407454A8 (sub_1407454A8.c)
 *     sub_1407455A8 @ 0x1407455A8 (sub_1407455A8.c)
 *     sub_140746B5C @ 0x140746B5C (sub_140746B5C.c)
 *     sub_140746CCC @ 0x140746CCC (sub_140746CCC.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

__int64 __fastcall sub_140744E30(__int64 a1)
{
  int v1; // eax
  int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax
  const WCHAR *v6; // rcx
  const WCHAR *v7; // rsi
  const WCHAR *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  char v12; // al
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v19[56]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = *(_DWORD *)(a1 + 184);
  LOWORD(v17) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (v1 & 0x20) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v3 = sub_140746B5C(a1, a1 + 392);
    if ( v3 < 0 )
      goto LABEL_43;
    if ( !*(_QWORD *)(a1 + 24) )
      goto LABEL_52;
    v4 = *(_QWORD *)(a1 + 32);
  }
  if ( !v4 )
    goto LABEL_52;
  memset(v19, 0, sizeof(v19));
  LODWORD(v19[4]) = 0x1000000;
  LODWORD(v19[11]) = 117440512;
  LODWORD(v19[1]) = 288;
  LODWORD(v19[18]) = 117440512;
  v19[2] = L"Service";
  LODWORD(v19[25]) = 0x4000000;
  LODWORD(v19[8]) = 304;
  v19[9] = L"LowerFilters";
  LODWORD(v19[15]) = 304;
  v19[16] = L"UpperFilters";
  LODWORD(v19[32]) = 117440512;
  v19[23] = L"ConfigFlags";
  LODWORD(v19[29]) = 304;
  v19[24] = a1 + 384;
  LODWORD(v19[39]) = 117440512;
  v19[30] = L"IncludedInfs";
  LODWORD(v19[36]) = 304;
  v19[37] = L"IncludedConfigs";
  LODWORD(v19[46]) = 0x4000000;
  v19[44] = L"Reboot";
  LODWORD(v19[43]) = 288;
  v19[45] = a1 + 388;
  v19[3] = a1 + 288;
  v19[10] = a1 + 304;
  v19[17] = a1 + 320;
  LODWORD(v19[22]) = 292;
  v19[31] = a1 + 336;
  v19[38] = a1 + 352;
  v5 = sub_140781F40(3221225472LL, v4, v19, 0LL);
  v3 = v5;
  if ( v5 == -1073741772 )
    goto LABEL_52;
  if ( v5 < 0 )
    goto LABEL_43;
  if ( *(_WORD *)(a1 + 304) <= 2u && *(_QWORD *)(a1 + 312) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 304));
  if ( *(_WORD *)(a1 + 320) <= 2u && *(_QWORD *)(a1 + 328) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 320));
  if ( *(_WORD *)(a1 + 336) <= 2u && *(_QWORD *)(a1 + 344) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 336));
  if ( *(_WORD *)(a1 + 352) <= 2u && *(_QWORD *)(a1 + 360) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 352));
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    v15 = *(_DWORD *)(a1 + 104);
    if ( (v15 & 4) == 0 && *(_QWORD *)(a1 + 296) )
    {
      RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 288));
      v15 = *(_DWORD *)(a1 + 104);
    }
    if ( (v15 & 2) == 0 )
    {
      if ( *(_QWORD *)(a1 + 312) )
        RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 304));
      if ( *(_QWORD *)(a1 + 328) )
        RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 320));
    }
  }
  v6 = *(const WCHAR **)(a1 + 296);
  if ( v6 && *(_WORD *)(a1 + 288) )
  {
    v3 = sub_14067996C(v6, (bool *)&v17 + 1, (_DWORD *)(a1 + 408));
    if ( v3 >= 0 )
    {
      if ( BYTE1(v17) )
        *(_DWORD *)(a1 + 184) |= 0x10u;
      goto LABEL_26;
    }
LABEL_52:
    v3 = -1073740653;
    goto LABEL_43;
  }
LABEL_26:
  v7 = *(const WCHAR **)(a1 + 312);
  if ( v7 )
  {
    if ( *v7 )
    {
      while ( 1 )
      {
        v3 = sub_14067996C(v7, 0LL, 0LL);
        if ( v3 < 0 )
          goto LABEL_52;
        v14 = -1LL;
        do
          ++v14;
        while ( v7[v14] );
        v7 += v14 + 1;
        if ( !*v7 )
          goto LABEL_27;
      }
    }
    if ( v3 < 0 )
      goto LABEL_43;
  }
LABEL_27:
  v8 = *(const WCHAR **)(a1 + 328);
  if ( !v8 )
    goto LABEL_28;
  if ( *v8 )
  {
    while ( 1 )
    {
      v3 = sub_14067996C(v8, 0LL, 0LL);
      if ( v3 < 0 )
        goto LABEL_52;
      v16 = -1LL;
      do
        ++v16;
      while ( v8[v16] );
      v8 += v16 + 1;
      if ( !*v8 )
        goto LABEL_28;
    }
  }
  if ( v3 < 0 )
    goto LABEL_43;
LABEL_28:
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
LABEL_42:
    *(_DWORD *)(a1 + 184) |= 1u;
    goto LABEL_43;
  }
  memset(v19, 0, 0xA0uLL);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_QWORD *)(a1 + 64);
  v19[0] = qword_14000FC38;
  LODWORD(v19[1]) = 13;
  v19[5] = &qword_14000FC20;
  v19[10] = qword_14000FC08;
  v19[12] = &v17;
  v19[2] = a1 + 240;
  v19[15] = qword_14000FBF0;
  v19[17] = &DestinationString;
  LODWORD(v19[3]) = 16;
  LODWORD(v19[6]) = 18;
  v19[7] = a1 + 272;
  HIDWORD(v19[8]) = 6;
  LODWORD(v19[11]) = 17;
  LODWORD(v19[13]) = 1;
  LODWORD(v19[16]) = 8210;
  HIDWORD(v19[18]) = 6;
  v3 = sub_140746CCC(6, v10, 8, v9, (__int64)v19, 4);
  if ( v3 >= 0 )
  {
    if ( SLODWORD(v19[4]) < 0 )
    {
      *(_OWORD *)(a1 + 240) = 0LL;
    }
    else
    {
      LOBYTE(v11) = 1;
      v3 = sub_1407454A8(a1 + 240, a1 + 256, v11);
      if ( v3 < 0 )
        goto LABEL_43;
    }
    if ( SLODWORD(v19[9]) < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)(a1 + 272), 0LL);
    v12 = v17;
    if ( SLODWORD(v19[14]) < 0 )
      v12 = 0;
    LOBYTE(v17) = v12;
    if ( v12 == -1 )
      *(_DWORD *)(a1 + 184) |= 0x40u;
    if ( SLODWORD(v19[19]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( DestinationString.Buffer && DestinationString.Length > 2u )
      *(_DWORD *)(a1 + 184) |= 0x80u;
    v3 = sub_1407455A8(a1);
    if ( v3 >= 0 )
      goto LABEL_42;
  }
LABEL_43:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v3;
}
