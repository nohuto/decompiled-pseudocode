/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x18001CC20
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001C0C0 (RtlGetFullPathName_Ustr.c)
 *     RtlIsDosDeviceName_U @ 0x18007B880 (RtlIsDosDeviceName_U.c)
 *     RtlSetCurrentDirectory_U @ 0x18007BAE0 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001CF30 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlEqualUnicodeString @ 0x180029C70 (RtlEqualUnicodeString.c)
 *     iswdigit @ 0x180092DD0 (iswdigit.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x1800D7050 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__int64 a1)
{
  int v1; // ebx
  __int16 v2; // si
  int v3; // eax
  __m128i *v4; // rcx
  unsigned __int16 v5; // dx
  __int64 v6; // r9
  __int64 v7; // r8
  _WORD *v8; // rdi
  __int16 v9; // cx
  __int32 v10; // ebp
  __int16 *v11; // rax
  __int16 v12; // cx
  int v13; // edx
  _WORD *v14; // rax
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // ax
  _WORD *v17; // rcx
  unsigned __int64 v18; // rdx
  _WORD *v20; // rax
  _WORD *v21; // rax
  __int64 v22; // rcx
  int v23; // r14d
  __int16 v24; // si
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  void *v28; // rdx
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // r8
  __int64 v33; // r8
  int v34; // r14d
  __m128i v35; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = RtlDetermineDosPathNameType_Ustr(a1);
  if ( v3 >= 6 || v3 < 2 )
  {
    if ( !v3 )
      return 0LL;
    v29 = v3 - 1;
    if ( !v29 || v29 == 5 )
      return 0LL;
  }
  v5 = _mm_cvtsi128_si32(*v4);
  v35 = *v4;
  v6 = v5;
  v7 = v5;
  LOWORD(v7) = v5 >> 1;
  if ( !(v5 >> 1) )
    return 0LL;
  v8 = (_WORD *)v35.m128i_i64[1];
  if ( *(_WORD *)(v35.m128i_i64[1] + 2LL * (unsigned __int16)v7 - 2) == 58 )
  {
    v5 -= 2;
    v2 = 1;
    LOWORD(v7) = v7 - 1;
    if ( !(_WORD)v7 )
      return 0LL;
  }
  do
  {
    v9 = *(_WORD *)(v35.m128i_i64[1] + 2LL * (unsigned __int16)v7 - 2);
    if ( v9 != 46 && v9 != 32 )
      break;
    v5 -= 2;
    ++v2;
    LOWORD(v7) = v7 - 1;
  }
  while ( (_WORD)v7 );
  v10 = 0;
  if ( (_WORD)v7 )
  {
    v11 = (__int16 *)(v35.m128i_i64[1] + 2 * ((unsigned __int16)v7 - 1LL));
    if ( (unsigned __int64)v11 < v35.m128i_i64[1] )
    {
LABEL_14:
      v13 = 43013;
    }
    else
    {
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == 92 || v12 == 47 || v12 == 58 && v11 == (__int16 *)(v35.m128i_i64[1] + 2) )
          break;
        if ( (unsigned __int64)--v11 < v35.m128i_i64[1] )
          goto LABEL_14;
      }
      v14 = v11 + 1;
      v1 = 1;
      if ( (unsigned __int64)v14 >= v35.m128i_i64[1] + (v6 & 0xFFFFFFFFFFFFFFFEuLL) )
        return 0LL;
      v15 = (*v14 | 0x20) - 97;
      if ( v15 > 0xFu )
        return 0LL;
      v13 = 43013;
      if ( !_bittest(&v13, v15) )
        return 0LL;
      v7 = v35.m128i_u16[4];
      v10 = (_DWORD)v14 - v35.m128i_i32[2];
      LOWORD(v7) = v6 + v35.m128i_i16[4] - (_WORD)v14;
      v35.m128i_i64[1] = (__int64)v14;
      v8 = v14;
      LOWORD(v7) = ((unsigned __int16)v7 >> 1) - v2;
    }
    v16 = (*v8 | 0x20) - 97;
    if ( v16 > 0xFu || !_bittest(&v13, v16) )
      return 0LL;
  }
  v17 = v8;
  v18 = (unsigned __int64)&v8[(unsigned __int16)v7];
  if ( (unsigned __int64)v8 < v18 )
  {
    while ( *v17 != 46 && *v17 != 58 )
    {
      if ( (unsigned __int64)++v17 >= v18 )
        goto LABEL_31;
    }
    v20 = v17 + 1;
    if ( (unsigned __int64)(v17 + 1) < v18 )
    {
      while ( *v20 == 32 )
      {
        if ( (unsigned __int64)++v20 >= v18 )
          goto LABEL_31;
      }
      v1 |= 2u;
    }
LABEL_31:
    if ( v17 > v8 )
    {
      do
      {
        v21 = v17 - 1;
        if ( *(v17 - 1) != 32 )
          break;
        --v17;
      }
      while ( v21 > v8 );
    }
  }
  v22 = v17 - v8;
  v23 = (unsigned __int16)v22;
  v24 = 2 * v22;
  v35.m128i_i16[0] = 2 * v22;
  if ( (unsigned __int16)v22 == 5 )
    return 0LL;
  v25 = (unsigned __int16)v22 - 3;
  if ( v23 == 3 )
  {
    LOBYTE(v7) = 1;
    if ( (unsigned __int8)RtlEqualUnicodeString(&v35, &RtlpDosNULDevice, v7) )
    {
      v1 |= 4u;
    }
    else
    {
      LOBYTE(v31) = 1;
      if ( !(unsigned __int8)RtlEqualUnicodeString(&v35, &RtlpDosPRNDevice, v31) )
      {
        LOBYTE(v32) = 1;
        if ( !(unsigned __int8)RtlEqualUnicodeString(&v35, &RtlpDosAUXDevice, v32) )
        {
          LOBYTE(v33) = 1;
          if ( !(unsigned __int8)RtlEqualUnicodeString(&v35, &RtlpDosCONDevice, v33) )
            return 0LL;
        }
      }
    }
  }
  else
  {
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 2;
      if ( v27 )
      {
        if ( v27 != 1 )
          return 0LL;
        v28 = &RtlpDosCONOUTDevice;
      }
      else
      {
        v28 = &RtlpDosCONINDevice;
      }
      goto LABEL_39;
    }
    if ( !iswdigit(v8[3]) || v8[3] == 48 )
      return 0LL;
    LOBYTE(v30) = 1;
    v35.m128i_i16[0] = v24 - 2;
    if ( !(unsigned __int8)RtlEqualUnicodeString(&v35, &RtlpDosLPTDevice, v30) )
    {
      v28 = &RtlpDosCOMDevice;
LABEL_39:
      LOBYTE(v7) = 1;
      if ( (unsigned __int8)RtlEqualUnicodeString(&v35, v28, v7) )
        goto LABEL_56;
      return 0LL;
    }
  }
LABEL_56:
  v34 = 2 * v23;
  if ( v1 && (v1 & 6) != 4 && !(unsigned __int8)RtlpAreLegacyDosDeviceNamesEnabled() )
    return 0LL;
  return v34 | (unsigned int)(v10 << 16);
}
