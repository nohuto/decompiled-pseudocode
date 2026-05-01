/*
 * XREFs of _lambda_2dd20bac4e5d2f5df658143d4108a795_::operator() @ 0x18014EE24
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___::Run @ 0x18014EE10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___--Run.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EE300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowEx.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindowExternal@@@12@$$QEAPEAUIClassicWindow@@@Z @ 0x18014EF08 (--$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCCla.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2dd20bac4e5d2f5df658143d4108a795_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  volatile int *v5; // rdx
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, __int64, __int64 *); // rdi
  __int64 *AddressOf; // rax
  __int64 (__fastcall *v9)(__int64, _QWORD); // rbx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 208LL))(*a1) )
  {
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 128LL);
    v10 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 208LL))(*a1);
    return v9(a2, *v10);
  }
  else
  {
    v11 = *a1;
    result = Microsoft::WRL::Details::Make<CClassicWindowExternal,IClassicWindow *>(&v12, &v11);
    v6 = v12;
    if ( v12 )
    {
      v11 = 0LL;
      v7 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 112LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf(&v11);
      if ( v7(a2, v6, AddressOf) >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 200LL))(*a1, v11);
      result = Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v11);
    }
    if ( v6 )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::Release(
               v6,
               v5);
  }
  return result;
}
