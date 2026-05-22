/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x18003EF30
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180066150 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x18003E8E4 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 *     ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x18003F0B0 (--$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$h.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18003F250 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x18003F440 (--$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-.c)
 *     ?CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z @ 0x18003F578 (-CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800A3F3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputStateManager::OnDeviceAttach(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  __int64 v6; // rcx
  __int64 i; // rax
  __int64 v8; // rsi
  struct IInputProcessor *v9; // r15
  int v10; // eax
  unsigned int v11; // esi
  struct IInputProcessor *v12; // rcx
  __int64 v13; // rdx
  const char *v14; // r9
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r9d
  _QWORD v22[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v24; // [rsp+70h] [rbp+30h] BYREF
  struct IInputProcessor *v25; // [rsp+80h] [rbp+40h] BYREF
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF

  v25 = a3;
  if ( InputETW::IsVerboseEnabled(1uLL) )
  {
    v19 = *(_QWORD *)(wil::details::static_lazy<InputETW>::get(
                        v6,
                        _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v19 > 5u
      && (*(_BYTE *)(v19 + 16) & 1) != 0
      && (*(_QWORD *)(v19 + 24) & 1LL) == *(_QWORD *)(v19 + 24) )
    {
      v24 = *((int *)a2 + 1);
      v26 = *(unsigned int *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v19,
        (unsigned int)&unk_18022302B,
        v20,
        v21,
        (__int64)&v26,
        (__int64)&v24);
    }
  }
  if ( a3 )
    std::unordered_map<unsigned long,IRawInputProvider *>::_Insert_or_assign<unsigned long const &,IRawInputProvider * &>(
      (char *)this + 104,
      v22,
      a2,
      &v25);
  for ( i = *((_QWORD *)this + 11); ; i = v8 - 16 )
  {
    v8 = i;
    if ( i == *((_QWORD *)this + 10) )
      break;
    v9 = *(struct IInputProcessor **)(i - 8);
    v25 = v9;
    if ( (*(unsigned __int8 (__fastcall **)(struct IInputProcessor *, struct DeviceInfo *))(*(_QWORD *)v9 + 32LL))(
           v9,
           a2) )
    {
      (*(void (__fastcall **)(struct IInputProcessor *))(*(_QWORD *)v9 + 8LL))(v9);
      v18 = *((_QWORD *)this + 11);
      if ( v18 == *((_QWORD *)this + 12) )
      {
        std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
          (char **)this + 10,
          (char *)v18,
          a2,
          &v25);
      }
      else
      {
        *(_DWORD *)v18 = *(_DWORD *)a2;
        *(_QWORD *)(v18 + 8) = v9;
        *((_QWORD *)this + 11) += 16LL;
      }
      goto LABEL_12;
    }
  }
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v25);
  v10 = InputStateManager::CreateProcessorForDevice(this, a2, &v25);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x139,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v25);
    return v11;
  }
  v12 = v25;
  v25 = 0LL;
  v22[0] = v12;
  v13 = *((_QWORD *)this + 11);
  if ( v13 == *((_QWORD *)this + 12) )
  {
    std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor *>(
      (char *)this + 80,
      v13,
      a2,
      v22);
  }
  else
  {
    *(_DWORD *)v13 = *(_DWORD *)a2;
    *(_QWORD *)(v13 + 8) = v12;
    *((_QWORD *)this + 11) += 16LL;
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v25);
LABEL_12:
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v14);
  if ( *(_DWORD *)ISMScenarios::s_instance )
    return 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 24LL))(
          *((_QWORD *)this + 5),
          a2);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x143,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v15);
  return v16;
}
