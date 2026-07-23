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
  unsigned __int16 v7; // r8
  wchar_t *Buffer; // rdi
  wchar_t v9; // cx
  int v10; // ebp
  wchar_t *v11; // rax
  wchar_t v12; // cx
  int v13; // edx
  wchar_t *v14; // rax
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // ax
  wchar_t *v18; // rcx
  unsigned __int64 v19; // rdx
  _WORD *v21; // rax
  wchar_t *v22; // rax
  __int64 v23; // rcx
  int v24; // r14d
  __int16 v25; // si
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  _UNICODE_STRING *v29; // rdx
  int v30; // eax
  int v31; // r14d
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = RtlDetermineDosPathNameType_Ustr(a1);
  if ( v3 >= 6 || v3 < 2 )
  {
    if ( !v3 )
      return 0LL;
    v30 = v3 - 1;
    if ( !v30 || v30 == 5 )
      return 0LL;
  }
  v5 = _mm_cvtsi128_si32(*v4);
  String1 = (_UNICODE_STRING)*v4;
  v6 = v5;
  v7 = v5 >> 1;
  if ( !(v5 >> 1) )
    return 0LL;
  Buffer = String1.Buffer;
  if ( String1.Buffer[v7 - 1] == 58 )
  {
    v5 -= 2;
    v2 = 1;
    if ( !--v7 )
      return 0LL;
  }
  do
  {
    v9 = String1.Buffer[v7 - 1];
    if ( v9 != 46 && v9 != 32 )
      break;
    v5 -= 2;
    ++v2;
    --v7;
  }
  while ( v7 );
  v10 = 0;
  if ( v7 )
  {
    v11 = &String1.Buffer[v7 - 1];
    if ( v11 < String1.Buffer )
    {
LABEL_14:
      v13 = 43013;
    }
    else
    {
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == 92 || v12 == 47 || v12 == 58 && v11 == String1.Buffer + 1 )
          break;
        if ( --v11 < String1.Buffer )
          goto LABEL_14;
      }
      v14 = v11 + 1;
      v1 = 1;
      if ( v14 >= (wchar_t *)((char *)String1.Buffer + (v6 & 0xFFFFFFFFFFFFFFFEuLL)) )
        return 0LL;
      v15 = (*v14 | 0x20) - 97;
      if ( v15 > 0xFu )
        return 0LL;
      v13 = 43013;
      if ( !_bittest(&v13, v15) )
        return 0LL;
      v10 = (_DWORD)v14 - LODWORD(String1.Buffer);
      v16 = v6 + LOWORD(String1.Buffer) - (_WORD)v14;
      String1.Buffer = v14;
      Buffer = v14;
      v7 = (v16 >> 1) - v2;
    }
    v17 = (*Buffer | 0x20) - 97;
    if ( v17 > 0xFu || !_bittest(&v13, v17) )
      return 0LL;
  }
  v18 = Buffer;
  v19 = (unsigned __int64)&Buffer[v7];
  if ( (unsigned __int64)Buffer < v19 )
  {
    while ( *v18 != 46 && *v18 != 58 )
    {
      if ( (unsigned __int64)++v18 >= v19 )
        goto LABEL_31;
    }
    v21 = v18 + 1;
    if ( (unsigned __int64)(v18 + 1) < v19 )
    {
      while ( *v21 == 32 )
      {
        if ( (unsigned __int64)++v21 >= v19 )
          goto LABEL_31;
      }
      v1 |= 2u;
    }
LABEL_31:
    if ( v18 > Buffer )
    {
      do
      {
        v22 = v18 - 1;
        if ( *(v18 - 1) != 32 )
          break;
        --v18;
      }
      while ( v22 > Buffer );
    }
  }
  v23 = v18 - Buffer;
  v24 = (unsigned __int16)v23;
  v25 = 2 * v23;
  String1.Length = 2 * v23;
  if ( (unsigned __int16)v23 == 5 )
    return 0LL;
  v26 = (unsigned __int16)v23 - 3;
  if ( v24 == 3 )
  {
    if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosNULDevice, 1u) )
    {
      v1 |= 4u;
    }
    else if ( !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosPRNDevice, 1u)
           && !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosAUXDevice, 1u)
           && !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosCONDevice, 1u) )
    {
      return 0LL;
    }
  }
  else
  {
    v27 = v26 - 1;
    if ( v27 )
    {
      v28 = v27 - 2;
      if ( v28 )
      {
        if ( v28 != 1 )
          return 0LL;
        v29 = (_UNICODE_STRING *)&RtlpDosCONOUTDevice;
      }
      else
      {
        v29 = (_UNICODE_STRING *)&RtlpDosCONINDevice;
      }
      goto LABEL_39;
    }
    if ( !iswdigit(Buffer[3]) || Buffer[3] == 48 )
      return 0LL;
    String1.Length = v25 - 2;
    if ( !RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosLPTDevice, 1u) )
    {
      v29 = (_UNICODE_STRING *)&RtlpDosCOMDevice;
LABEL_39:
      if ( RtlEqualUnicodeString(&String1, v29, 1u) )
        goto LABEL_56;
      return 0LL;
    }
  }
LABEL_56:
  v31 = 2 * v24;
  if ( v1 && (v1 & 6) != 4 && !(unsigned __int8)RtlpAreLegacyDosDeviceNamesEnabled() )
    return 0LL;
  return v31 | (unsigned int)(v10 << 16);
}
