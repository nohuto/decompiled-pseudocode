/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x18001AD70
 * Callers:
 *     RtlpGetTokenNamedObjectPath @ 0x18000BBE8 (RtlpGetTokenNamedObjectPath.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AB50 (RtlFormatCurrentUserKeyPath.c)
 *     AVrfpAppendCurrentUserSid @ 0x1800E5C7C (AVrfpAppendCurrentUserSid.c)
 *     WerEscalationLazyInit @ 0x1800E97F8 (WerEscalationLazyInit.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012E954 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x18000E9A0 (RtlCreateUnicodeString.c)
 *     RtlIntegerToUnicode @ 0x18001AF90 (RtlIntegerToUnicode.c)
 *     RtlValidSid @ 0x18001B130 (RtlValidSid.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     wcscat_s @ 0x18009B080 (wcscat_s.c)
 *     wcscpy_s @ 0x18009B120 (wcscpy_s.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlLargeIntegerToUnicode @ 0x1800FA520 (RtlLargeIntegerToUnicode.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  _BYTE *v6; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v8; // di
  unsigned int MaximumLength; // ecx
  unsigned int v10; // ebx
  wchar_t *Buffer; // rdi
  unsigned int v12; // eax
  wchar_t *v13; // rcx
  unsigned __int64 v14; // rbx
  NTSTATUS v15; // edx
  int v16; // eax
  __int64 v17; // rdx
  _DWORD v18[4]; // [rsp+20h] [rbp-248h] BYREF
  wchar_t Destination; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v20[4]; // [rsp+38h] [rbp-230h] BYREF
  _BYTE v21[496]; // [rsp+3Ch] [rbp-22Ch] BYREF
  _BYTE v22[2]; // [rsp+22Ch] [rbp-3Ch] BYREF
  _BYTE v23[2]; // [rsp+22Eh] [rbp-3Ah] BYREF

  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Destination, 0x100uLL, L"S-1-");
  v6 = v20;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Destination, 0x100uLL, L"0x");
    v6 = v21;
    v16 = *((unsigned __int8 *)Sid + 5);
    v18[1] = *((unsigned __int8 *)Sid + 3) + (*((unsigned __int8 *)Sid + 2) << 8);
    v18[0] = *((unsigned __int8 *)Sid + 7)
           + (*((unsigned __int8 *)Sid + 6) << 8)
           + (v16 << 16)
           + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _BYTE *))RtlLargeIntegerToUnicode)(
               v18,
               v17,
               250LL,
               v21);
  }
  else
  {
    result = RtlIntegerToUnicode(
               *((unsigned __int8 *)Sid + 7)
             + (*((unsigned __int8 *)Sid + 6) << 8)
             + (*((unsigned __int8 *)Sid + 5) << 16)
             + (*((unsigned __int8 *)Sid + 4) << 24),
               10LL,
               252LL,
               v20);
  }
  if ( result >= 0 )
  {
    v8 = 0;
    if ( *((_BYTE *)Sid + 1) )
    {
      while ( 1 )
      {
        for ( ; v6 < v22; v6 += 2 )
        {
          if ( !*(_WORD *)v6 )
            break;
        }
        *(_WORD *)v6 = 45;
        v6 += 2;
        result = RtlIntegerToUnicode(
                   *((unsigned int *)Sid + v8 + 2),
                   10LL,
                   256 - (unsigned int)((v6 - (_BYTE *)&Destination) >> 1),
                   v6);
        if ( result < 0 )
          break;
        if ( ++v8 >= *((_BYTE *)Sid + 1) )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      if ( AllocateDestinationString )
      {
        if ( RtlCreateUnicodeString(UnicodeString, &Destination) )
          return 0;
        else
          return -1073741801;
      }
      else
      {
        for ( ; v6 < v23; v6 += 2 )
        {
          if ( !*(_WORD *)v6 )
            break;
        }
        MaximumLength = UnicodeString->MaximumLength;
        v10 = 2 * ((v6 - (_BYTE *)&Destination) >> 1);
        if ( v10 >= MaximumLength )
        {
          return -2147483643;
        }
        else
        {
          Buffer = UnicodeString->Buffer;
          v12 = (unsigned __int16)v10;
          if ( (unsigned __int16)v10 > (unsigned __int16)MaximumLength )
            v12 = UnicodeString->MaximumLength;
          v13 = UnicodeString->Buffer;
          UnicodeString->Length = v12;
          v14 = v12;
          memmove(v13, &Destination, v12);
          v15 = 0;
          if ( (unsigned __int64)UnicodeString->Length + 2 <= UnicodeString->MaximumLength )
            Buffer[v14 >> 1] = 0;
        }
      }
      return v15;
    }
  }
  return result;
}
