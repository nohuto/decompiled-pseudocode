/*
 * XREFs of ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003DD24
 * Callers:
 *     ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E0B4 (-HasChanged@CDisplayModeChangeHelper@@SA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV-$.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003DE08 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18003DE64 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003DED8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@345@Z @ 0x1800B92C8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U2@U3@@-$_tlgWrit.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert(
        CDWMDisplaySet *a1,
        CDWMDisplaySet *a2,
        _QWORD *a3)
{
  struct CDWMDisplay *v4; // rbx
  int PrimaryDisplay; // eax
  CDWMDisplay *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  char *v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h] BYREF
  struct CDWMDisplay *v18; // [rsp+98h] [rbp+28h] BYREF
  CDWMDisplay *v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+38h] BYREF

  a3[1] = *a3;
  if ( *((_DWORD *)a2 + 16) != 1 )
    return 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  PrimaryDisplay = CDWMDisplaySet::GetPrimaryDisplay(a1, &v19);
  v6 = v19;
  if ( PrimaryDisplay >= 0
    && (v18 = 0LL, v7 = CDWMDisplaySet::GetPrimaryDisplay(a2, &v18), v4 = v18, v7 >= 0)
    && *((_BYTE *)v18 + 252)
    && !CDWMDisplay::IsSamePhysicalDisplay(v6, v18) )
  {
    if ( (unsigned int)dword_1801418A0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801418A0, 1LL) )
    {
      v20 = v13;
      LODWORD(v18) = *((_DWORD *)v4 + 44);
      v15 = (char *)v4 + 96;
      v16 = v12;
      LODWORD(v19) = *((_DWORD *)v6 + 44);
      v17 = v14;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v10,
        (unsigned int)&unk_18011F660,
        v11,
        v12,
        (__int64)&v17,
        (__int64)&v19,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v18,
        (__int64)&v20);
    }
    v8 = 10;
  }
  else
  {
    v8 = 0;
  }
  if ( v4 )
    CDWMDisplay::Release(v4);
  if ( v6 )
    CDWMDisplay::Release(v6);
  return v8;
}
