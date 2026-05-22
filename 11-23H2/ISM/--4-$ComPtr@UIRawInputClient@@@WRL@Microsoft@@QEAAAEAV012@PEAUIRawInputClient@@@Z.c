/*
 * XREFs of ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180044E5C
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180041D10 (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x180041FA4 (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x180044794 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     ??0InjectionRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x1800E7AC8 (--0InjectionRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ?CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800EA274 (-CreateAndInitialize@ConsumerControlManager@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAP.c)
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800EE2C0 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IRawInputClient>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(&v5);
  }
  return a1;
}
