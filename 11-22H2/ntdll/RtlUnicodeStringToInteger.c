/*
 * XREFs of RtlUnicodeStringToInteger @ 0x180076E90
 * Callers:
 *     RtlGetIntegerAtom @ 0x180003AD0 (RtlGetIntegerAtom.c)
 *     RtlGetFileMUIPath @ 0x180009780 (RtlGetFileMUIPath.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015960 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     WerpGlobalFlagsForProcess @ 0x180051B24 (WerpGlobalFlagsForProcess.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D900 (RtlQueryImageFileKeyOption.c)
 *     RtlGetUILanguageInfo @ 0x180089EF0 (RtlGetUILanguageInfo.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800ADFE4 (RtlpQueryNlsSystemCodePages.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800DD4F8 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800DF14C (LdrpQueryIllegalCWDDevices.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 *     RtlUnicodeStringToLcid @ 0x1800FA3AC (RtlUnicodeStringToLcid.c)
 *     RtlpSetPreferredUILanguages @ 0x1800FC160 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x180110E0C (RtlpMuiRegAddAlternateCodePage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeStringToInteger(PUNICODE_STRING String, ULONG Base, PULONG Value)
{
  NTSTATUS v5; // r9d
  ULONG v6; // r10d
  wchar_t *Buffer; // r8
  int v8; // edx
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // cx
  wchar_t *v11; // r14
  int v12; // r15d
  int v13; // r11d
  ULONG v14; // eax
  __int16 v16; // ax

  v5 = 0;
  v6 = 0;
  if ( !String->Length || (String->Length & 1) != 0 )
  {
LABEL_50:
    v5 = -1073741811;
    goto LABEL_22;
  }
  Buffer = String->Buffer;
  v8 = String->Length >> 1;
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      --v8;
      v9 = *Buffer++;
      if ( v9 > 0x20u )
        break;
      if ( !v8 )
      {
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    v8 = -1;
  }
  v10 = v9;
  if ( ((v9 - 43) & 0xFFFD) == 0 )
  {
    if ( v8 )
    {
      --v8;
      v10 = *Buffer++;
    }
    else
    {
      v10 = 0;
    }
  }
  v11 = Buffer;
  v12 = v8;
  if ( Base )
  {
    switch ( Base )
    {
      case 0xAu:
        v13 = 0;
        goto LABEL_16;
      case 2u:
        v13 = 1;
        goto LABEL_16;
      case 8u:
        v13 = 3;
        goto LABEL_16;
      case 0x10u:
        v13 = 4;
        goto LABEL_16;
    }
    goto LABEL_50;
  }
  Base = 10;
  v13 = 0;
  if ( v10 == 48 )
  {
    if ( v8 )
    {
      --v8;
      v16 = *Buffer++;
      switch ( v16 )
      {
        case 'x':
          Base = 16;
          v13 = 4;
          break;
        case 'o':
          Base = 8;
          v13 = 3;
          break;
        case 'b':
          Base = 2;
          v13 = 1;
          break;
        default:
          v8 = v12;
          Buffer = v11;
          break;
      }
      if ( v8 )
        goto LABEL_15;
    }
    v10 = 0;
  }
LABEL_16:
  while ( v10 )
  {
    if ( (unsigned __int16)(v10 - 48) > 9u )
    {
      if ( (unsigned __int16)(v10 - 65) > 5u )
      {
        if ( (unsigned __int16)(v10 - 97) > 5u )
          break;
        v14 = v10 - 87;
      }
      else
      {
        v14 = v10 - 55;
      }
    }
    else
    {
      v14 = v10 - 48;
    }
    if ( v14 >= Base )
      break;
    v6 = v13 ? v14 | (v6 << v13) : v14 + Base * v6;
    if ( !v8 )
      break;
LABEL_15:
    --v8;
    v10 = *Buffer++;
  }
  if ( v9 == 45 )
    v6 = -v6;
LABEL_22:
  *Value = v6;
  return v5;
}
