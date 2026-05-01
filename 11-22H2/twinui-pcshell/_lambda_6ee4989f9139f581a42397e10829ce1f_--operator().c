/*
 * XREFs of _lambda_6ee4989f9139f581a42397e10829ce1f_::operator() @ 0x1803A7230
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x180170BE0 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_6ee4989f9139f581a42397e10829ce1f_::operator()(unsigned int *a1, __int64 a2)
{
  char v4; // bp
  void (__fastcall *v5)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IUnknown *v8; // [rsp+48h] [rbp+10h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2);
  if ( (v4 & 1) != 0 )
  {
    if ( !*((_QWORD *)a1 + 1)
      || (v8 = 0LL,
          v5 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 464LL),
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v8),
          v5(a2, AddressOf),
          LOBYTE(v5) = (unsigned int)SHIsSameObject(*((struct IUnknown **)a1 + 1), v8) != 0,
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8),
          (_BYTE)v5) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)a2 + 264LL))(
             a2,
             a1[1],
             *a1,
             0LL,
             0)
        && (v4 & 4) != 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)a1 + 2) + 64LL))(*((_QWORD *)a1 + 2), a2);
      }
    }
  }
  return 1;
}
