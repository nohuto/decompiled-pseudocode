/*
 * XREFs of ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800D28F4
 * Callers:
 *     ?TimerCallback@?$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800D2CF0 (-TimerCallback@-$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D0264 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800D044C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800D2570 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800D26F8 (-IsFirstHang@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 */

char __fastcall CWatchdogTimer<1>::OnTimer(__int64 a1)
{
  char result; // al
  unsigned __int32 v3; // r9d
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rcx
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // edi
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DWORD CurrentProcessId; // eax
  __int64 v20; // r8
  int v21; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v22; // [rsp+48h] [rbp-38h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp-30h] BYREF
  GUID *p_pguid; // [rsp+58h] [rbp-28h] BYREF
  GUID pguid; // [rsp+60h] [rbp-20h] BYREF

  result = CWatchdogTimer<1>::HangIsProbablyReal(a1);
  if ( result )
  {
    v3 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    if ( v3 >= 3 )
    {
      if ( v3 == 3 )
      {
        v8 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 32);
        if ( v8 )
        {
          (**v8)(v8, *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
          *(_BYTE *)(a1 + 40) = 1;
        }
        result = CWatchdogTimer<1>::IsFirstHang(a1);
        if ( result )
        {
          pguid = GUID_00000000_0000_0000_0000_000000000000;
          CoCreateGuid(&pguid);
          v9 = *(_DWORD **)(a1 + 8);
          if ( *v9 > 2u && tlgKeywordOn((__int64)v9, 0x400000000001LL) )
          {
            v21 = *(_DWORD *)(a1 + 16);
            v22 = *(const WCHAR **)(a1 + 24);
            p_pguid = &pguid;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v10,
              byte_18018F384,
              v11,
              v12,
              (__int64 *)&p_pguid,
              &v22,
              (__int64)&v21);
          }
          RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
          v13 = *(_QWORD *)(a1 + 32);
          if ( v13 )
          {
            v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            if ( v14 )
            {
              v15 = *(_DWORD **)(a1 + 8);
              if ( *v15 > 4u )
              {
                if ( tlgKeywordOn((__int64)v15, 1LL) )
                {
                  v21 = *(_DWORD *)(a1 + 16);
                  p_pguid = *(GUID **)(a1 + 24);
                  LODWORD(v22) = v14;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                    v16,
                    byte_18018F336,
                    v17,
                    v18,
                    (__int64)&v22,
                    (const WCHAR **)&p_pguid,
                    (__int64)&v21);
                }
              }
            }
          }
          else
          {
            v14 = 0;
          }
          CurrentProcessId = GetCurrentProcessId();
          v20 = *(unsigned int *)(a1 + 16);
          v23 = (const WCHAR *)__PAIR64__(v14, CurrentProcessId);
          return ReportCoreHang(&v23, (unsigned int)(v14 != 0) + 1, v20, 8LL);
        }
      }
    }
    else
    {
      v4 = *(_DWORD **)(a1 + 8);
      if ( *v4 > 3u )
      {
        result = tlgKeywordOn((__int64)v4, 1LL);
        if ( result )
        {
          LODWORD(v22) = *(_DWORD *)(a1 + 16);
          v23 = *(const WCHAR **)(a1 + 24);
          v21 = v7;
          return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                   v5,
                   byte_18018F3B2,
                   v6,
                   v7,
                   (__int64)&v21,
                   &v23,
                   (__int64)&v22);
        }
      }
    }
  }
  return result;
}
