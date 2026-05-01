/*
 * XREFs of ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x180051260
 * Callers:
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000C220 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z @ 0x18004D69C (-HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z.c)
 *     ?HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18004D70C (-HampActIssueStopRequestCallback@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x180019818 (RmpWnfPublishMessageToClientStateName.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DAB0 (-HampClientAcquireLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E350 (-HampClientReleaseLockShared@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18008D5E0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall HampSystemIssueActivityCallback(
        struct _HAM_CLIENT_CONTEXT *a1,
        struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *a2,
        char a3)
{
  int v5; // edi
  __int64 v6; // r9
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  if ( (*((_BYTE *)a1 + 144) & 1) != 0 )
  {
    (*((void (__fastcall **)(struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *, _QWORD))a1 + 15))(a2, *((_QWORD *)a1 + 17));
  }
  else
  {
    v5 = a3 & 1;
    if ( (a3 & 1) == 0 )
      HampClientAcquireLockShared(a1, (__int64)a2);
    v6 = *((_QWORD *)a1 + 16);
    if ( v6
      && (int)RmpWnfPublishMessageToClientStateName((_QWORD *)a1 + 15, a2, 0x40u, v6) < 0
      && (unsigned int)dword_1800DB218 > 4
      && tlgKeywordOn((__int64)&dword_1800DB218, 0x400000000008LL) )
    {
      v11 = *((_DWORD *)a2 + 4);
      v10[0] = *(_QWORD *)a2;
      v12 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v7,
        (unsigned int)&unk_1800C6726,
        v8,
        v9,
        (__int64)v10,
        (__int64)&v11,
        (__int64)&v12);
    }
    if ( !v5 )
      HampClientReleaseLockShared(a1, (__int64)a2);
  }
}
