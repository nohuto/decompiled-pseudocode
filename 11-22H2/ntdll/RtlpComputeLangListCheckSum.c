/*
 * XREFs of RtlpComputeLangListCheckSum @ 0x1800137EC
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x180010160 (RtlUpcaseUnicodeString.c)
 *     NLS_UPCASE @ 0x1800156E8 (NLS_UPCASE.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlCopyUnicodeString @ 0x18002D860 (RtlCopyUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x18006F900 (RtlIntegerToUnicodeString.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpComputeLangListCheckSum(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r15
  unsigned int v4; // r14d
  __int64 v5; // r8
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int128 *v9; // rcx
  __int64 v10; // rax
  NTSTATUS inited; // edi
  unsigned int v12; // r11d
  wchar_t *Buffer; // r10
  wchar_t *v14; // rbx
  int v15; // r11d
  __int64 v16; // r10
  LCID v18; // ecx
  __int64 Length; // r8
  unsigned __int8 *v20; // r9
  unsigned __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  _UNICODE_STRING String_8; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v31; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h]
  int v35; // [rsp+68h] [rbp-A0h]
  _BYTE v36[176]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  memset_thunk_772440563353939046(v36, 0, 0xAAuLL);
  String_8 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 3221225485LL;
  v4 = 0;
  if ( !*(_WORD *)(a1 + 4) )
  {
LABEL_17:
    *(_DWORD *)&String_8.Length = 1310720;
    String_8.Buffer = (wchar_t *)(a1 + 44);
    return (unsigned int)RtlIntegerToUnicodeString(v2, 0x10u, &String_8);
  }
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    v33 = 0LL;
    v6 = *(unsigned __int16 *)(v5 + 6LL * v4);
    v34 = 0LL;
    v35 = 0;
    if ( v6 )
      break;
LABEL_16:
    if ( ++v4 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_17;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    WORD2(v33) = *(_WORD *)(v5 + 6LL * v4 + 4);
LABEL_20:
    v9 = &v33;
LABEL_8:
    v10 = *((__int16 *)v9 + 3);
    if ( (__int16)v10 <= 0 )
    {
      v18 = *((unsigned __int16 *)v9 + 2);
      String_8.Buffer = (wchar_t *)v36;
      *(_DWORD *)&String_8.Length = 11141120;
      if ( !RtlLCIDToCultureName(v18, &String_8) )
        return (unsigned int)-1073741595;
    }
    else
    {
      inited = RtlInitUnicodeStringEx(
                 &DestinationString,
                 (PCWSTR)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 24LL)
                        + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 16LL) + 2 * v10)));
      if ( inited < 0 )
        return (unsigned int)inited;
      *(_DWORD *)&String_8.Length = 11141120;
      String_8.Buffer = (wchar_t *)v36;
      RtlCopyUnicodeString(&String_8, &DestinationString);
    }
    if ( !v2 )
    {
      v12 = 314159;
      Buffer = String_8.Buffer;
      v14 = &String_8.Buffer[(unsigned __int64)String_8.Length >> 1];
      while ( Buffer < v14 )
      {
        v31 = NLS_UPCASE(qword_1801817B8, *Buffer);
        Buffer = (wchar_t *)(v16 + 2);
        v12 = HIBYTE(v31) + 37 * ((unsigned __int8)v31 + 37 * v15);
      }
      v2 = v12;
      goto LABEL_16;
    }
    RtlUpcaseUnicodeString(&String_8, &String_8, 0);
    Length = String_8.Length;
    v20 = (unsigned __int8 *)String_8.Buffer;
    if ( String_8.Length >= 8uLL )
    {
      v21 = (unsigned __int64)String_8.Length >> 3;
      Length = String_8.Length - 8 * v21;
      do
      {
        v22 = v20[6]
            + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v2))))));
        v23 = v20[7];
        v20 += 8;
        v2 = v23 + 37 * v22;
        --v21;
      }
      while ( v21 );
    }
    if ( (unsigned __int64)(Length - 1) > 6 )
      goto LABEL_27;
    v24 = Length - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                  goto LABEL_27;
                LODWORD(v2) = *v20++ + 37 * v2;
              }
              LODWORD(v2) = *v20++ + 37 * v2;
            }
            LODWORD(v2) = *v20++ + 37 * v2;
          }
          LODWORD(v2) = *v20++ + 37 * v2;
        }
        LODWORD(v2) = *v20++ + 37 * v2;
      }
      LODWORD(v2) = *v20++ + 37 * v2;
    }
    LODWORD(v2) = *v20 + 37 * v2;
LABEL_27:
    v2 = (unsigned int)v2;
    goto LABEL_16;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL) + 28LL * *(__int16 *)(v5 + 6LL * v4 + 4));
    goto LABEL_8;
  }
  if ( v8 == 1 )
  {
    WORD3(v33) = *(_WORD *)(v5 + 6LL * v4 + 4);
    goto LABEL_20;
  }
  return (unsigned int)-1073741595;
}
