/*
 * XREFs of ?RuntimeClassInitialize@ShellGesturesProcessor@@QEAAJXZ @ 0x180038DE4
 * Callers:
 *     ??$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGesturesProcessor@@@Z @ 0x18003ED54 (--$MakeAndInitialize@VShellGesturesProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVShellGestu.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18001DBE4 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800254AC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??4?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVKernelContextProvider@@@Z @ 0x180038E6C (--4-$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAVKernelContextProvider@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellGesturesProcessor::RuntimeClassInitialize(ShellGesturesProcessor *this)
{
  struct KernelContextProvider *Instance; // rax
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v4; // rbx
  ShellGesturesProcessor *v6; // [rsp+30h] [rbp+8h] BYREF

  Instance = KernelContextProvider::GetInstance();
  Microsoft::WRL::ComPtr<KernelContextProvider>::operator=((char *)this + 24, Instance);
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  if ( *(ShellGesturesProcessor **)(v4 + 80) != this )
  {
    v6 = this;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v6);
    v6 = *(ShellGesturesProcessor **)(v4 + 80);
    *(_QWORD *)(v4 + 80) = this;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v6);
  }
  return 0LL;
}
