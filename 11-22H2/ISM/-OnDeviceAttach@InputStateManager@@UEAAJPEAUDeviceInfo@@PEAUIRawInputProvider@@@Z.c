/*
 * XREFs of ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180040590
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180079BD0 (-OnDeviceAttach@InputStateManager@@W7EAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ @ 0x180018678 (-Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001B674 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001B8CC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAKAEAPEAUIInputProcessor@@@Z @ 0x18003FF40 (--$_Emplace_reallocate@AEAKAEAPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@.c)
 *     ??$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800407DC (--$_Insert_or_assign@AEBKAEAPEAUIRawInputProvider@@@-$unordered_map@KPEAUIRawInputProvider@@U-$h.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x18004097C (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ??$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@QEAAPEAU?$pair@KPEAUIInputProcessor@@@1@QEAU21@AEAK$$QEAPEAUIInputProcessor@@@Z @ 0x180040B20 (--$_Emplace_reallocate@AEAKPEAUIInputProcessor@@@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-.c)
 *     ?CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z @ 0x180040C58 (-CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1800B69DC (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnDeviceAttach(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IRawInputProvider *a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // r8
  const struct _tlgProvider_t *v8; // rax
  int v9; // r9d
  __int64 i; // rax
  __int64 v11; // r14
  struct IInputProcessor *v12; // r15
  const char *v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // r14d
  struct IInputProcessor *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  RTL_SRWLOCK *v22; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v23[24]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF
  struct IInputProcessor *v26; // [rsp+90h] [rbp+40h] BYREF
  __int64 v27; // [rsp+98h] [rbp+48h] BYREF

  v26 = a3;
  if ( InputETW::IsVerboseEnabled(1uLL) )
  {
    v8 = InputETW::Provider(v6);
    v7 = v8;
    if ( *(_DWORD *)v8 > 5u && (*((_BYTE *)v8 + 16) & 1) != 0 && (*((_QWORD *)v8 + 3) & 1LL) == *((_QWORD *)v8 + 3) )
    {
      v25 = *((int *)a2 + 1);
      v27 = *(unsigned int *)a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        (_DWORD)v8,
        (unsigned int)&unk_180231B85,
        (_DWORD)v8,
        v9,
        (__int64)&v27,
        (__int64)&v25);
    }
  }
  if ( a3 )
  {
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 21, &v22);
    std::unordered_map<unsigned long,IRawInputProvider *>::_Insert_or_assign<unsigned long const &,IRawInputProvider * &>(
      (char *)this + 104,
      v23,
      a2,
      &v26);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v22);
  }
  for ( i = *((_QWORD *)this + 11); ; i = v11 - 16 )
  {
    v11 = i;
    if ( i == *((_QWORD *)this + 10) )
      break;
    v12 = *(struct IInputProcessor **)(i - 8);
    v26 = v12;
    if ( (*(unsigned __int8 (__fastcall **)(struct IInputProcessor *, struct DeviceInfo *, const struct _tlgProvider_t *))(*(_QWORD *)v12 + 32LL))(
           v12,
           a2,
           v7) )
    {
      (*(void (__fastcall **)(struct IInputProcessor *))(*(_QWORD *)v12 + 8LL))(v12);
      v14 = *((_QWORD *)this + 11);
      if ( v14 == *((_QWORD *)this + 12) )
      {
        std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor * &>(
          (char **)this + 10,
          (char *)v14,
          a2,
          &v26);
      }
      else
      {
        *(_DWORD *)v14 = *(_DWORD *)a2;
        *(_QWORD *)(v14 + 8) = v12;
        *((_QWORD *)this + 11) += 16LL;
      }
      goto LABEL_21;
    }
  }
  v26 = 0LL;
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v26);
  v15 = InputStateManager::CreateProcessorForDevice(this, a2, &v26);
  v16 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v26);
    return v16;
  }
  v18 = v26;
  v26 = 0LL;
  v22 = (RTL_SRWLOCK *)v18;
  v19 = *((_QWORD *)this + 11);
  if ( v19 == *((_QWORD *)this + 12) )
  {
    std::vector<std::pair<unsigned long,IInputProcessor *>>::_Emplace_reallocate<unsigned long &,IInputProcessor *>(
      (char *)this + 80,
      v19,
      a2,
      &v22);
  }
  else
  {
    *(_DWORD *)v19 = *(_DWORD *)a2;
    *(_QWORD *)(v19 + 8) = v18;
    *((_QWORD *)this + 11) += 16LL;
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v26);
LABEL_21:
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      v13);
  if ( *(_DWORD *)ISMScenarios::s_instance )
    return 0LL;
  v20 = (*(__int64 (__fastcall **)(_QWORD, struct DeviceInfo *))(**((_QWORD **)this + 5) + 24LL))(
          *((_QWORD *)this + 5),
          a2);
  v21 = v20;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x144,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v20);
  return v21;
}
