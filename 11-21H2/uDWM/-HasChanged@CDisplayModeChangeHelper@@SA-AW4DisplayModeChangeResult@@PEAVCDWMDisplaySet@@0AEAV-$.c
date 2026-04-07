/*
 * XREFs of ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E0B4
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18003BB2C (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003DD24 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003DE08 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18003DE64 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18003DED8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     _tlgKeywordOn @ 0x18003E1A0 (_tlgKeywordOn.c)
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18003E928 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18003EAB0 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180096F94 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800A5728 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B450C (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800B9FCC (-GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV-$vector@PEBVCDWM.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayModeChangeHelper::HasChanged(CDWMDisplaySet *this, CDWMDisplaySet *a2, _QWORD *a3)
{
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned __int64 v12; // r9
  CDWMDisplay *v13; // rbx
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  unsigned int v15; // r9d
  struct CDWMDisplay *v16; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-48h] BYREF
  CDWMDisplay *v18; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v19[32]; // [rsp+48h] [rbp-38h] BYREF
  unsigned int *v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_1801418A0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801418A0, 1LL) )
  {
    LODWORD(v16) = *((_DWORD *)a2 + 16);
    v17 = *((_DWORD *)this + 16);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v6,
      (unsigned int)&unk_18011F9AC,
      v7,
      v8,
      (__int64)&v17,
      (__int64)&v16);
  }
  a3[1] = *a3;
  v9 = *((_DWORD *)this + 16);
  if ( !v9 || *((_DWORD *)a2 + 16) <= v9 )
    goto LABEL_6;
  v16 = 0LL;
  v18 = 0LL;
  if ( (int)CDWMDisplaySet::GetPrimaryDisplay(this, &v18) >= 0 )
  {
    v16 = 0LL;
    if ( (int)CDWMDisplaySet::GetPrimaryDisplay(a2, &v16) >= 0 )
    {
      CDisplayModeChangeHelper::GetNewConnectedDisplays(this);
      v12 = (__int64)(a3[1] - *a3) >> 3;
      v13 = v18;
      if ( v12 == 1 )
      {
        if ( CDWMDisplay::IsSamePhysicalDisplay(v18, v16) )
        {
          if ( *(_BYTE *)(*(_QWORD *)(a3[1] - 8LL) + 252LL) )
          {
            wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v16);
            wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v18);
            v10 = 2;
          }
          else
          {
            wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v16);
            wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v18);
            v10 = 6;
          }
          goto LABEL_9;
        }
        if ( *((_DWORD *)this + 16) == 1 && *(_BYTE *)(*(_QWORD *)(a3[1] - 8LL) + 252LL) )
        {
          MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(a2, v13);
          if ( MatchedPhysicalDisplayNoRef )
          {
            if ( *((_BYTE *)MatchedPhysicalDisplayNoRef + 252) )
            {
              wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v16);
              wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v18);
              v10 = 11;
            }
            else
            {
              wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v16);
              wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v18);
              v10 = 12;
            }
            goto LABEL_9;
          }
          goto LABEL_31;
        }
      }
      else
      {
        if ( v12 <= 1 )
        {
LABEL_31:
          if ( v16 )
            CDWMDisplay::Release(v16);
          if ( v13 )
            CDWMDisplay::Release(v13);
          goto LABEL_6;
        }
        if ( (unsigned int)dword_1801418A0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801418A0, 1LL) )
        {
          v17 = v15;
          v20 = &v17;
          v21 = 4;
          v22 = 0;
          tlgWriteTransfer_EtwEventWriteTransfer(
            (unsigned int)&dword_1801418A0,
            (unsigned int)&unk_18011F903,
            0,
            0,
            3,
            (__int64)v19);
        }
      }
      wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v16);
      wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v18);
      v10 = 14;
      goto LABEL_9;
    }
  }
  wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v18);
LABEL_6:
  v10 = CDisplayModeChangeHelper::IsModeChangeBetweenDuplicateAndExtend(this);
  if ( !v10 )
  {
    v10 = CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert(this, a2, a3);
    if ( !v10 )
      v10 = *((_DWORD *)a2 + 16) < *((_DWORD *)this + 16);
  }
LABEL_9:
  if ( (unsigned int)dword_1801418A0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1801418A0, 1LL) )
  {
    v17 = v10;
    v20 = &v17;
    v21 = 4;
    v22 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer(
      (unsigned int)&dword_1801418A0,
      (unsigned int)&unk_18011F958,
      0,
      0,
      3,
      (__int64)v19);
  }
  return v10;
}
