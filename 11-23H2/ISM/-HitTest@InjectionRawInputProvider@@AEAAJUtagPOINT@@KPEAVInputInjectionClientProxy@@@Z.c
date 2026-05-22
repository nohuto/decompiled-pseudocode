/*
 * XREFs of ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800E817C
 * Callers:
 *     ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800E8780 (-PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV-$vector@UTouchInj.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000EE10 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@XZ @ 0x1800E74D0 (--$GetAttachedObject@UIInputInjectionClientProxy@@VInputInjectionClientProxy@@@InputSite@@QEAA-A.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x1800E7DB8 (--1HitTestResult@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InjectionRawInputProvider::HitTest(
        InjectionRawInputProvider *this,
        struct tagPOINT a2,
        int a3,
        struct InputInjectionClientProxy *a4)
{
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  struct InputInjectionClientProxy *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct InputInjectionClientProxy *v12; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v13[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-A0h]
  _BYTE v15[8]; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-40h]

  (*(void (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, __int64, int))(**((_QWORD **)this + 4) + 40LL))(
    *((_QWORD *)this + 4),
    v13,
    a2,
    2LL,
    a3);
  if ( v13[0] )
  {
    v5 = *(__int64 **)(v16 - 24);
    v6 = *(__int64 **)(v16 - 16);
    while ( v5 != v6 )
    {
      InputSite::GetAttachedObject<IInputInjectionClientProxy,InputInjectionClientProxy>(*v5, &v12);
      v7 = v12;
      if ( v12 && v12 == a4 )
      {
        (*(void (**)(void))(*(_QWORD *)v12 + 8LL))();
        HitTestResult::~HitTestResult((HitTestResult *)v13);
        return 0LL;
      }
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(struct InputInjectionClientProxy *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      ++v5;
    }
  }
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v15);
  if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v14, v8, v9, v10);
  return 2147500037LL;
}
