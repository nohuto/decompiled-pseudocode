/*
 * XREFs of ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800CEAD4
 * Callers:
 *     ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800CF0BC (-PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV-$vector@UTouchInj.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@XZ @ 0x1800CDE9C (--$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA-A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InjectionRawInputProvider::HitTest(
        InjectionRawInputProvider *this,
        struct tagPOINT a2,
        int a3,
        struct InputInjectionClientProxy *a4)
{
  unsigned int v5; // edi
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  struct InputInjectionClientProxy *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct InputInjectionClientProxy *v13; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v15[11]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v16[8]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-40h]

  (*(void (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, __int64, int))(**((_QWORD **)this + 4) + 40LL))(
    *((_QWORD *)this + 4),
    v14,
    a2,
    2LL,
    a3);
  v5 = 0;
  if ( v14[0] )
  {
    v6 = *(__int64 **)(v17 - 24);
    v7 = *(__int64 **)(v17 - 16);
    while ( v6 != v7 )
    {
      InputSite::GetAttachedObject<IInputInjectionClientProxy,InputInjectionClientProxy>(*v6, &v13);
      v8 = v13;
      if ( v13 && v13 == a4 )
      {
        (*(void (**)(void))(*(_QWORD *)v13 + 8LL))();
        goto LABEL_10;
      }
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(struct InputInjectionClientProxy *))(*(_QWORD *)v8 + 8LL))(v8);
      }
      ++v6;
    }
  }
  v5 = -2147467259;
LABEL_10:
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v16);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
    v15,
    v9,
    v10,
    v11);
  return v5;
}
