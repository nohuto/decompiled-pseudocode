/*
 * XREFs of ?OnInputReport@InputStateManager@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800CC2E0
 * Callers:
 *     ?OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z @ 0x1800CC1B0 (-OnInputReport@InputStateManager@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18003F250 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800CB82C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputETW::InputStateManager::OnInputReport(struct InputInfo *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF
  __int64 v8; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v3 = wil::details::static_lazy<InputETW>::get(v2, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    {
      v8 = *((_QWORD *)a1 + 2);
      v7 = *((_DWORD *)a1 + 2);
      v9 = *(int *)a1;
      v6[0] = *((unsigned int *)a1 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v3,
        byte_180222F9F,
        v4,
        v5,
        (__int64)v6,
        (__int64)&v9,
        (__int64)&v7,
        (__int64)&v8);
    }
  }
}
