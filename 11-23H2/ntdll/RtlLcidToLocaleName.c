/*
 * XREFs of RtlLcidToLocaleName @ 0x180015D90
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18000A13C (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlLCIDToCultureName @ 0x180015AB0 (RtlLCIDToCultureName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001F750 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpQuerySxSMUIFile @ 0x180076384 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetParentLangId @ 0x18008CF20 (LdrpGetParentLangId.c)
 *     LdrpResSearchResourceHandle @ 0x1800F0924 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlpNlsGetLcidIndex @ 0x180015ED8 (RtlpNlsGetLcidIndex.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180015F30 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpLoadNlsData @ 0x18007FE28 (RtlpLoadNlsData.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x18010B154 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180111E00 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // r14
  LCID v7; // ebx
  int LcidIndex; // eax
  __int64 v9; // rcx
  wchar_t *Buffer; // rdx
  _WORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-A9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v17[176]; // [rsp+40h] [rbp-89h] BYREF

  v15 = 85LL;
  v5 = Flags;
  v7 = lcid;
  if ( (lcid & 0xFFFFEFFF) == 0 )
    return -1073741585;
  if ( LocaleName )
  {
    if ( (Flags & 0xFFFFFFFD) != 0 )
      return -1073741583;
    if ( AllocateDestinationString || LocaleName->Buffer )
    {
      if ( lcid == 5120 )
      {
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v17, &v15) >= 0 )
        {
          v13 = (unsigned int)v15;
          Buffer = (wchar_t *)v17;
          goto LABEL_19;
        }
      }
      else if ( ((lcid - 1024) & 0xFFFFF7FF) != 0 )
      {
        if ( pTblPtrs || (unsigned __int8)RtlpLoadNlsData() )
        {
          if ( v7 == 2048 )
            v7 = gSystemLocale;
          LcidIndex = RtlpNlsGetLcidIndex(v7);
          if ( LcidIndex < 0 )
            return -1073741585;
          if ( (v5 & 2) == 0 )
          {
            _mm_lfence();
            if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                           * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 4)
                           + *(_QWORD *)(pTblPtrs + 8)
                           + 24LL) & 1) == 0 )
              return -1073741585;
          }
          _mm_lfence();
          v9 = *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 6);
          Buffer = (wchar_t *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v9);
          if ( Buffer )
          {
            v11 = (_WORD *)(*(_QWORD *)(pTblPtrs + 32) + 2LL + 2 * v9);
            v12 = 84LL;
            do
            {
              if ( !*v11 )
                break;
              ++v11;
              --v12;
            }
            while ( v12 );
            if ( v12 )
            {
              v13 = 84 - v12;
LABEL_19:
              LOBYTE(v11) = AllocateDestinationString;
              return RtlpInitUnicodeStringUsingBuffer(v11, Buffer, v13, LocaleName);
            }
          }
        }
      }
      else
      {
        DestinationString.Buffer = (wchar_t *)v17;
        DestinationString.MaximumLength = 170;
        if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
        {
          Buffer = DestinationString.Buffer;
          v13 = DestinationString.Length >> 1;
          goto LABEL_19;
        }
      }
      return -1073741823;
    }
  }
  return -1073741584;
}
