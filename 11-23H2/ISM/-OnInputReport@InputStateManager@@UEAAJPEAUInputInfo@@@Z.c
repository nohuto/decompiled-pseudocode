/*
 * XREFs of ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x1800CC1B0
 * Callers:
 *     ?OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z @ 0x1800661B0 (-OnInputReport@InputStateManager@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800CB8C0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x1800CBC0C (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800CC2E0 (-OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z @ 0x1800CC380 (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@PEBX@Z.c)
 *     ?UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z @ 0x1800CC550 (-UpdateLastInputTimestamp@InputStateManager@@AEAAXPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall InputStateManager::OnInputReport(InputStateManager *this, struct InputInfo *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  const void *v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  InputETW::InputStateManager::OnInputReport(a2);
  InputStateManager::UpdateLastInputTimestamp(this, a2);
  v4 = *((_QWORD *)this + 10);
  v5 = *((_QWORD *)this + 11);
  if ( v4 == v5 )
  {
LABEL_4:
    v6 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                       v5,
                       _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
         + 1);
    if ( *(_DWORD *)v6 > 4u
      && (*(_DWORD *)(v6 + 16) & 0x200LL) != 0
      && (*(_QWORD *)(v6 + 24) & 0x200LL) == *(_QWORD *)(v6 + 24) )
    {
      v7 = *(_DWORD *)a2;
      LODWORD(v15) = *((_DWORD *)a2 + 1);
      v16 = (__int64)InputTraceLogging::InputTypeToString(v7);
      v17 = *((_QWORD *)a2 + 2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        v8,
        byte_180222FF3,
        v8,
        v9,
        (__int64)&v17,
        (const unsigned __int16 **)&v16,
        (__int64)&v15);
    }
    v10 = -2147467259;
    v11 = 434LL;
    goto LABEL_9;
  }
  while ( *(_DWORD *)v4 != *((_DWORD *)a2 + 1) )
  {
    v4 += 16LL;
    if ( v4 == v5 )
      goto LABEL_4;
  }
  v13 = *(const void **)(v4 + 8);
  InputTraceLogging::ISM::ReceiveInput(a2, v13);
  v10 = (*(__int64 (__fastcall **)(const void *, struct InputInfo *))(*(_QWORD *)v13 + 48LL))(v13, a2);
  if ( v10 < 0 )
  {
    v11 = 426LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  return 0LL;
}
