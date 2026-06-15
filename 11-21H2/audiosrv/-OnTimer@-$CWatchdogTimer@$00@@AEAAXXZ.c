/*
 * XREFs of ?OnTimer@?$CWatchdogTimer@$00@@AEAAXXZ @ 0x1800C8AF8
 * Callers:
 *     ?TimerCallback@?$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C9020 (-TimerCallback@-$CWatchdogTimer@$00@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C7F18 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3@Z @ 0x1800C7FEC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?HangIsProbablyReal@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C86D4 (-HangIsProbablyReal@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 *     ?IsFirstHang@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x1800C8820 (-IsFirstHang@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 */

char __fastcall CWatchdogTimer<1>::OnTimer(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int32 v5; // edx
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // r8
  DWORD CurrentProcessId; // eax
  __int64 v16; // r8
  unsigned __int32 v18; // [rsp+40h] [rbp-40h] BYREF
  void *v19; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-30h] BYREF
  GUID *p_pguid; // [rsp+58h] [rbp-28h] BYREF
  GUID pguid; // [rsp+60h] [rbp-20h] BYREF

  LOBYTE(v2) = CWatchdogTimer<1>::HangIsProbablyReal(a1);
  if ( (_BYTE)v2 )
  {
    v5 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    if ( v5 >= 3 )
    {
      if ( v5 == 3 )
      {
        v7 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 32);
        if ( v7 )
        {
          (**v7)(v7, *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
          *(_BYTE *)(a1 + 40) = 1;
        }
        LOBYTE(v2) = CWatchdogTimer<1>::IsFirstHang(a1);
        if ( (_BYTE)v2 )
        {
          pguid = GUID_00000000_0000_0000_0000_000000000000;
          CoCreateGuid(&pguid);
          v10 = *(_QWORD *)(a1 + 8);
          if ( *(_DWORD *)v10 > 2u
            && (*(_QWORD *)(v10 + 16) & 0x400000000001LL) != 0
            && (*(_QWORD *)(v10 + 24) & 0x400000000001LL) == *(_QWORD *)(v10 + 24) )
          {
            v18 = *(_DWORD *)(a1 + 16);
            v19 = *(void **)(a1 + 24);
            p_pguid = &pguid;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
              v10,
              byte_18018836E,
              v8,
              v9,
              (__int64 *)&p_pguid,
              &v19,
              (__int64)&v18);
          }
          RtlPublishWnfStateData(WNF_AUDC_HEALTH_PROBLEM, 0LL, &pguid, 16LL, 0LL);
          v11 = *(_QWORD *)(a1 + 32);
          if ( v11 )
          {
            v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            if ( v12 )
            {
              v14 = *(_QWORD *)(a1 + 8);
              if ( *(_DWORD *)v14 > 4u
                && (*(_BYTE *)(v14 + 16) & 1) != 0
                && (*(_QWORD *)(v14 + 24) & 1LL) == *(_QWORD *)(v14 + 24) )
              {
                v18 = *(_DWORD *)(a1 + 16);
                p_pguid = *(GUID **)(a1 + 24);
                LODWORD(v19) = v12;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                  v14,
                  byte_180188320,
                  v14,
                  v13,
                  (__int64)&v19,
                  (void **)&p_pguid,
                  (__int64)&v18);
              }
            }
          }
          else
          {
            v12 = 0;
          }
          CurrentProcessId = GetCurrentProcessId();
          v16 = *(unsigned int *)(a1 + 16);
          v20 = __PAIR64__(v12, CurrentProcessId);
          LOBYTE(v2) = ReportCoreHang(&v20, (unsigned int)(v12 != 0) + 1, v16, 8LL);
        }
      }
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)v6 > 3u && (*(_BYTE *)(v6 + 16) & 1) != 0 )
      {
        v2 = *(_QWORD *)(v6 + 24) & 1LL;
        if ( v2 == *(_QWORD *)(v6 + 24) )
        {
          LODWORD(v19) = *(_DWORD *)(a1 + 16);
          v20 = *(_QWORD *)(a1 + 24);
          v18 = v5;
          LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                         v6,
                         byte_18018839C,
                         v3,
                         v4,
                         (__int64)&v18,
                         (void **)&v20,
                         (__int64)&v19);
        }
      }
    }
  }
  return v2;
}
