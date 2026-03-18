/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00A1108
 * Callers:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00A0DF8 (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0112E5C (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0112FC8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0211054 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  USHORT Length; // r8
  unsigned __int64 MaximumLength; // rdx
  PWSTR Buffer; // r10
  __int64 result; // rax
  const wchar_t *v7; // r11
  bool v8; // zf
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  __int16 v11; // cx

  Length = a1->Length;
  if ( (a1->Length & 1) != 0 )
    return 3221225485LL;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return 3221225485LL;
  if ( Length > (unsigned __int16)MaximumLength )
    return 3221225485LL;
  if ( (_WORD)MaximumLength == 0xFFFF )
    return 3221225485LL;
  Buffer = a1->Buffer;
  result = 0LL;
  if ( !Buffer && (Length || (_WORD)MaximumLength) )
    return 3221225485LL;
  v7 = L"\\Registry\\Machine";
  v9 = MaximumLength >> 1;
  v8 = MaximumLength >> 1 == 0;
  v10 = 0x7FFFLL;
  v11 = 0;
  if ( v8 )
  {
LABEL_12:
    result = 2147483653LL;
  }
  else
  {
    while ( v10 )
    {
      if ( *v7 )
      {
        *Buffer++ = *v7++;
        --v10;
        ++v11;
        if ( --v9 )
          continue;
      }
      if ( v9 || !v10 || !*v7 )
        break;
      goto LABEL_12;
    }
  }
  a1->Length = 2 * v11;
  return result;
}
