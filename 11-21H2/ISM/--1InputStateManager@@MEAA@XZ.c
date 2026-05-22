/*
 * XREFs of ??1InputStateManager@@MEAA@XZ @ 0x1800B27E8
 * Callers:
 *     ??_GInputStateManager@@MEAAPEAXI@Z @ 0x1800B29D0 (--_GInputStateManager@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800409D8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008069C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall InputStateManager::~InputStateManager(InputStateManager *this, __int64 a2, __int64 a3, const char *a4)
{
  __int64 v5; // rdi
  __int64 i; // rbx
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, __int64 *); // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  void *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &InputStateManager::`vftable'{for `IRawInputClient'};
  *((_QWORD *)this + 1) = &InputStateManager::`vftable'{for `IInputProcessorHost'};
  *((_QWORD *)this + 2) = &InputStateManager::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &InputStateManager::`vftable'{for `RefCountedObject'};
  v5 = *((_QWORD *)this + 11);
  for ( i = *((_QWORD *)this + 10); i != v5; i += 16LL )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(i + 8) + 16LL))(*(_QWORD *)(i + 8));
  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      28LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( !*(_DWORD *)ISMScenarios::s_instance )
  {
    if ( *((_QWORD *)this + 9) )
    {
      v13 = 0LL;
      v7 = *((_QWORD *)this + 6);
      v8 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v13);
      if ( v8(v7, &v13) >= 0 )
        (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)v13 + 48LL))(
          v13,
          L"System\\Input\\DeviceCommandEndpoint",
          1LL);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v13);
    }
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 5);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 22);
  std::_Deallocate<16,0>(
    *((void **)this + 16),
    (*((_QWORD *)this + 17) - *((_QWORD *)this + 16)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v9,
    *((_QWORD ***)this + 14));
  std::_Deallocate<16,0>(*((void **)this + 14), 0x20uLL);
  v11 = (void *)*((_QWORD *)this + 10);
  if ( v11 )
  {
    std::_Deallocate<16,0>(v11, (*((_QWORD *)this + 12) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 8,
    0LL,
    v10);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
