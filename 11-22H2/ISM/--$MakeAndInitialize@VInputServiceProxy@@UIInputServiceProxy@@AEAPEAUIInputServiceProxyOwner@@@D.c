/*
 * XREFs of ??$MakeAndInitialize@VInputServiceProxy@@UIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputServiceProxy@@AEAPEAUIInputServiceProxyOwner@@@Z @ 0x180045C9C
 * Callers:
 *     CreateInputServiceProxy @ 0x180045BA0 (CreateInputServiceProxy.c)
 * Callees:
 *     ??0InputServiceProxy@@QEAA@XZ @ 0x180045D58 (--0InputServiceProxy@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x180045DBC (-RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058434 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006A110 (--1-$MakeAllocator@VForegroundManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputServiceProxy,IInputServiceProxy,IInputServiceProxyOwner * &>(
        _QWORD *a1,
        struct IInputServiceProxyOwner **a2)
{
  InputServiceProxy *v4; // rax
  InputServiceProxy *v5; // rdi
  int v6; // ebx
  InputServiceProxy *v8; // [rsp+30h] [rbp+8h] BYREF
  InputServiceProxy *v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (InputServiceProxy *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_7:
    Microsoft::WRL::Details::MakeAllocator<ForegroundManager>::~MakeAllocator<ForegroundManager>(&v8);
    return (unsigned int)v6;
  }
  v5 = InputServiceProxy::InputServiceProxy(v4);
  v9 = v5;
  v8 = 0LL;
  v6 = InputServiceProxy::RuntimeClassInitialize(v5, *a2);
  if ( v6 < 0 )
  {
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v9);
    goto LABEL_7;
  }
  v6 = (**(__int64 (__fastcall ***)(InputServiceProxy *, GUID *, _QWORD *))v5)(
         v5,
         &GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18,
         a1);
  (*(void (__fastcall **)(InputServiceProxy *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)v6;
}
