/*
 * XREFs of ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007753C
 * Callers:
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077D24 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180005FE8 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009FE0 (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800773EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180077AB8 (-HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampActCheckSetExpiration(struct _HAM_ACTIVITY *a1, unsigned int a2)
{
  unsigned int v2; // r9d
  unsigned __int64 v4; // r8
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned int v7; // edx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rsi
  __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  int v18; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+50h] BYREF
  __int64 v20; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  if ( (*((_BYTE *)a1 + 552) & 0x40) == 0 && (unsigned __int8)(*((_BYTE *)a1 + 562) - 2) <= 1u )
  {
    v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
    v5 = -1;
    if ( a2 )
    {
      do
      {
        _BitScanForward((unsigned int *)&v6, v2);
        v7 = v5;
        v18 = v6;
        v5 = *(_DWORD *)(v4 + 4 * v6 + 464);
        if ( v7 < v5 )
          v5 = v7;
        v2 &= ~(1 << v6);
      }
      while ( v2 );
      if ( v5 != -1 )
      {
        v8 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
        if ( !v5 )
        {
          HampActCancelExpirationTimer(a1);
LABEL_10:
          HampActMarkExpired(a1);
          HampHostUpdateActivityState(v8);
          HampHostCheckQueueDependencyWorker(v8);
          return;
        }
        v9 = 10000LL * v5;
        RtlQueryUnbiasedInterruptTime(&v19);
        v10 = -1LL;
        v11 = *((_QWORD *)a1 + 68);
        if ( v19 + v9 >= v19 )
          v10 = v19 + v9;
        if ( !v11 || v10 < v11 )
        {
          HampActCancelExpirationTimer(a1);
          if ( (int)TpAllocTimer((char *)a1 + 536, HampActExpirationTimerCallback, a1, 0LL) < 0 )
          {
            if ( (unsigned int)dword_1800DC218 > 4 )
            {
              if ( tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
              {
                v20 = *((_QWORD *)a1 + 5);
                v18 = v13;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                  (int)&dword_1800DC218,
                  (int)&unk_1800C0520,
                  v12,
                  v13,
                  (__int64)&v18,
                  (__int64)&v20);
              }
            }
            *((_QWORD *)a1 + 68) = 0LL;
            goto LABEL_10;
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
            __fastfail(0xEu);
          v14 = *((_QWORD *)a1 + 67);
          v17 = -10000LL * v5;
          TpSetTimer(v14, &v17, 0LL, 0LL);
          *((_QWORD *)a1 + 68) = v10;
          if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
          {
            v20 = *((_QWORD *)a1 + 5);
            v18 = v5;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
              (__int64)&dword_1800DC218,
              byte_1800C02EE,
              v15,
              v16,
              (__int64)&v20,
              (__int64)&v18);
          }
        }
      }
    }
  }
}
