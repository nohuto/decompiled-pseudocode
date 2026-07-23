/*
 * XREFs of RtlLcidToLocaleName @ 0x18004B900
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180041F80 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLCIDToCultureName @ 0x18004B690 (RtlLCIDToCultureName.c)
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180064E1C (LdrpResSearchResourceMappedFile.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18006F480 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     LdrpQuerySxSMUIFile @ 0x18007E478 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetParentLangId @ 0x180084FA8 (LdrpGetParentLangId.c)
 *     LdrpResSearchResourceHandle @ 0x1800EF7DC (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18004BA58 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpNlsGetLcidIndex @ 0x18004BAD0 (RtlpNlsGetLcidIndex.c)
 *     RtlpLoadNlsData @ 0x180083D84 (RtlpLoadNlsData.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x180109C14 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180110500 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

NTSTATUS __cdecl RtlLcidToLocaleName(
        LCID lcid,
        PUNICODE_STRING LocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // bp
  LCID v7; // ebx
  int LcidIndex; // eax
  __int64 v9; // r8
  __int64 v10; // rax
  wchar_t *v11; // r10
  _WORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  wchar_t *Buffer; // rdx
  __int64 v18; // [rsp+20h] [rbp-F8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v20[176]; // [rsp+40h] [rbp-D8h] BYREF

  v18 = 85LL;
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
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v20, &v18) >= 0 )
        {
          v15 = (unsigned int)v18;
          Buffer = (wchar_t *)v20;
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
          v9 = LcidIndex;
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
          v10 = *(_QWORD *)(pTblPtrs + 32) + 2LL;
          v11 = (wchar_t *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8 * v9 + 6));
          if ( v11 )
          {
            v12 = (_WORD *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8 * v9 + 6));
            v13 = 84LL;
            do
            {
              if ( !*v12 )
                break;
              ++v12;
              --v13;
            }
            while ( v13 );
            if ( v13 )
            {
              v14 = 84 - v13;
              v15 = (unsigned int)(84 - v13);
              Buffer = v11;
LABEL_19:
              LOBYTE(v14) = AllocateDestinationString;
              return RtlpInitUnicodeStringUsingBuffer(v14, Buffer, v15, LocaleName);
            }
          }
        }
      }
      else
      {
        DestinationString.Buffer = (wchar_t *)v20;
        DestinationString.MaximumLength = 170;
        if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
        {
          Buffer = DestinationString.Buffer;
          v15 = DestinationString.Length >> 1;
          goto LABEL_19;
        }
      }
      return -1073741823;
    }
  }
  return -1073741584;
}
