/*
 * XREFs of ?InitializeTrustedComponentForegroundControl@CApplicationManager@@UEAAJAEBU_GUID@@@Z @ 0x18014C5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18014CB70 (-s_CreateInstance@CTrustedComponentForegroundControl@@SAJPEAUIImmersiveApplicationManager@@AEBU_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::InitializeTrustedComponentForegroundControl(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  HRESULT Instance; // ebx
  unsigned int v5; // r8d
  struct CApplicationManager::TRUSTED_COMPONENT_REGISTRATION near **i; // r9
  __int64 v7; // rax
  __int64 *ppv; // r14
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  Instance = -2147024891;
  v5 = 0;
  for ( i = &CApplicationManager::s_rgTrustedComponentRegMap; ; i += 2 )
  {
    v7 = *(_QWORD *)*i - *(_QWORD *)&a2->Data1;
    if ( !v7 )
      v7 = *((_QWORD *)*i + 1) - *(_QWORD *)a2->Data4;
    if ( !v7 )
      break;
    if ( ++v5 >= 0xB )
      return (unsigned int)Instance;
  }
  ppv = (__int64 *)(&CApplicationManager::s_rgTrustedComponentRegMap + 2 * v5 + 1);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(ppv);
  Instance = CoCreateInstance(a2, 0LL, 0x401u, &GUID_5fefbb8e_82c3_4ec4_93a0_05c4b9fcd4cd, (LPVOID *)ppv);
  if ( Instance >= 0 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
    Instance = CTrustedComponentForegroundControl::s_CreateInstance(
                 (struct IImmersiveApplicationManager *)((unsigned __int64)&this[-8] & -(__int64)(this != (const struct _GUID *)280)),
                 this - 8,
                 &v10);
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)*ppv + 24LL))(*ppv, v10);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  }
  return (unsigned int)Instance;
}
