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

__int64 __fastcall RtlLcidToLocaleName(unsigned int a1, __int64 a2, int a3, char a4)
{
  char v5; // bp
  unsigned int v7; // ebx
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
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v20[176]; // [rsp+40h] [rbp-D8h] BYREF

  v18 = 85LL;
  v5 = a3;
  v7 = a1;
  if ( (a1 & 0xFFFFEFFF) == 0 )
    return 3221225711LL;
  if ( a2 )
  {
    if ( (a3 & 0xFFFFFFFD) != 0 )
      return 3221225713LL;
    if ( a4 || *(_QWORD *)(a2 + 8) )
    {
      if ( a1 == 5120 )
      {
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v20, &v18) >= 0 )
        {
          v15 = (unsigned int)v18;
          Buffer = (wchar_t *)v20;
          goto LABEL_19;
        }
      }
      else if ( ((a1 - 1024) & 0xFFFFF7FF) != 0 )
      {
        if ( pTblPtrs || (unsigned __int8)RtlpLoadNlsData() )
        {
          if ( v7 == 2048 )
            v7 = gSystemLocale;
          LcidIndex = RtlpNlsGetLcidIndex(v7);
          if ( LcidIndex < 0 )
            return 3221225711LL;
          v9 = LcidIndex;
          if ( (v5 & 2) == 0 )
          {
            _mm_lfence();
            if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                           * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 16) + 8LL * LcidIndex + 4)
                           + *(_QWORD *)(pTblPtrs + 8)
                           + 24LL) & 1) == 0 )
              return 3221225711LL;
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
              LOBYTE(v14) = a4;
              return RtlpInitUnicodeStringUsingBuffer(v14, Buffer, v15, a2);
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
      return 3221225473LL;
    }
  }
  return 3221225712LL;
}
