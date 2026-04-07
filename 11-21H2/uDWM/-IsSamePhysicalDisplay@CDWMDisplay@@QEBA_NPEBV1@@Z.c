/*
 * XREFs of ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003DED8
 * Callers:
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003DD24 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E0B4 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18003EAB0 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800B48A4 (-CaptureExistingExtendedDisplays@CDisplayAnimatedVisual@@IEAAJ_KPEBVCDWMDisplay@@AEAV-$vector@V-.c)
 * Callees:
 *     ?GetMonitorInternalInfo@CDWMDisplay@@QEBAJPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x18003E000 (-GetMonitorInternalInfo@CDWMDisplay@@QEBAJPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800BB9EC (--$Write@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEA.c)
 */

bool __fastcall CDWMDisplay::IsSamePhysicalDisplay(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  int v4; // r8d
  int v5; // r9d
  wchar_t *v7; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t *v8; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v9[20]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String2[462]; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v11[20]; // [rsp+3F0h] [rbp+2F0h] BYREF
  wchar_t String1[462]; // [rsp+404h] [rbp+304h] BYREF

  if ( *((_DWORD *)this + 42) != *((_DWORD *)a2 + 42) )
    return 0;
  if ( *((_DWORD *)this + 43) != *((_DWORD *)a2 + 43) )
    return 0;
  if ( *((_DWORD *)this + 45) != *((_DWORD *)a2 + 45) )
    return 0;
  memset_0(v11, 0, 0x3ACuLL);
  if ( (unsigned int)CDWMDisplay::GetMonitorInternalInfo(this, (struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *)v11) )
    return 0;
  memset_0(v9, 0, 0x3ACuLL);
  if ( (unsigned int)CDWMDisplay::GetMonitorInternalInfo(a2, (struct _DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO *)v9) )
    return 0;
  if ( (unsigned int)dword_1801418A0 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1801418A0, 1LL) )
    {
      v7 = String2;
      v8 = String1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
        (unsigned int)&v8,
        (unsigned int)&unk_18011FACA,
        v4,
        v5,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
  return !wcsncmp(String1, String2, 0x104uLL);
}
