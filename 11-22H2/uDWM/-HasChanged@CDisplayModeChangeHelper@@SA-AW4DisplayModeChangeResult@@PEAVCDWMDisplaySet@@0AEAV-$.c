/*
 * XREFs of ?HasChanged@CDisplayModeChangeHelper@@SA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180054830
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18003BBE8 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180008020 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180054904 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180054A64 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180054B00 (-IsModeChangeBetweenDuplicateAndExtend@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18005AF50 (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ?IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z @ 0x18005AFB8 (-IsSamePhysicalDisplay@CDWMDisplay@@QEBA_NPEBV1@@Z.c)
 *     ?GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z @ 0x18005B788 (-GetPrimaryDisplay@CDWMDisplaySet@@QEBAJPEAPEBVCDWMDisplay@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800AAAE8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B7524 (--1-$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800BD928 (-GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV-$vector@PEBVCDWM.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDisplayModeChangeHelper::HasChanged(CDWMDisplaySet *this, CDWMDisplaySet *a2, _QWORD *a3, int a4)
{
  unsigned int v7; // eax
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  unsigned __int64 v11; // rdx
  CDWMDisplay *v12; // rbx
  CDWMDisplay *v13; // rdi
  const struct CDWMDisplay *MatchedPhysicalDisplayNoRef; // rax
  struct CDWMDisplay *v15; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h] BYREF
  CDWMDisplay *v17; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v18[32]; // [rsp+48h] [rbp-38h] BYREF
  int *v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+74h] [rbp-Ch]

  if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
  {
    LODWORD(v15) = *((_DWORD *)a2 + 16);
    v16 = *((_DWORD *)this + 16);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (_DWORD)this,
      (unsigned int)&unk_1801264AC,
      (_DWORD)a3,
      a4,
      (__int64)&v16,
      (__int64)&v15);
  }
  a3[1] = *a3;
  v7 = *((_DWORD *)this + 16);
  if ( !v7 )
  {
    v8 = (_DWORD *)((char *)a2 + 64);
    goto LABEL_6;
  }
  if ( *((_DWORD *)a2 + 16) > v7 )
  {
    v15 = 0LL;
    v17 = 0LL;
    if ( (int)CDWMDisplaySet::GetPrimaryDisplay(this, &v17) < 0
      || (v15 = 0LL, (int)CDWMDisplaySet::GetPrimaryDisplay(a2, &v15) < 0) )
    {
      wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v15);
      wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v17);
      goto LABEL_5;
    }
    CDisplayModeChangeHelper::GetNewConnectedDisplays(this);
    v11 = (__int64)(a3[1] - *a3) >> 3;
    v12 = v17;
    v13 = v15;
    if ( v11 == 1 )
    {
      if ( CDWMDisplay::IsSamePhysicalDisplay(v17, v15) )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a3[1] - 8LL) + 268LL) )
        {
          wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v15);
          wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v17);
          v9 = 2;
        }
        else
        {
          wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v15);
          wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v17);
          v9 = 6;
        }
        goto LABEL_9;
      }
      if ( *((_DWORD *)this + 16) == 1 && *(_BYTE *)(*(_QWORD *)(a3[1] - 8LL) + 268LL) )
      {
        MatchedPhysicalDisplayNoRef = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(a2, v12);
        if ( MatchedPhysicalDisplayNoRef )
        {
          if ( *((_BYTE *)MatchedPhysicalDisplayNoRef + 268) )
          {
            wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v15);
            wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v17);
            v9 = 11;
          }
          else
          {
            wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v15);
            wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v17);
            v9 = 12;
          }
          goto LABEL_9;
        }
        goto LABEL_35;
      }
    }
    else
    {
      if ( v11 <= 1 )
      {
LABEL_35:
        if ( v13 )
          CDWMDisplay::Release(v13);
        if ( v12 )
          CDWMDisplay::Release(v12);
        goto LABEL_5;
      }
      if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
      {
        v16 = (__int64)(a3[1] - *a3) >> 3;
        v19 = &v16;
        v20 = 4;
        v21 = 0;
        tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_180147058, byte_180126403, 0LL, 0LL, 3, (__int64)v18);
      }
    }
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v15);
    wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(&v17);
    v9 = 14;
    goto LABEL_9;
  }
LABEL_5:
  v8 = (_DWORD *)((char *)a2 + 64);
LABEL_6:
  v9 = CDisplayModeChangeHelper::IsModeChangeBetweenDuplicateAndExtend(this);
  if ( !v9 )
  {
    v9 = CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert(this, a2, a3);
    if ( !v9 )
      v9 = *v8 < *((_DWORD *)this + 16);
  }
LABEL_9:
  if ( (unsigned int)dword_180147058 > 5 && (byte_180147068 & 1) != 0 && (qword_180147070 & 1) == qword_180147070 )
  {
    v16 = v9;
    v19 = &v16;
    v20 = 4;
    v21 = 0;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_180147058, byte_180126458, 0LL, 0LL, 3, (__int64)v18);
  }
  return v9;
}
