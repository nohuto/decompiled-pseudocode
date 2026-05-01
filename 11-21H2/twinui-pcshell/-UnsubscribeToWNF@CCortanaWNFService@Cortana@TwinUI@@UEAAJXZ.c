/*
 * XREFs of ?UnsubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJXZ @ 0x1803ADD30
 * Callers:
 *     ??1CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ @ 0x1803AD4B8 (--1CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SafeUnsubscribeWnf@@YAXPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1803AD84C (-SafeUnsubscribeWnf@@YAXPEAPEAU_WNF_USER_SUBSCRIPTION@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::UnsubscribeToWNF(TwinUI::Cortana::CCortanaWNFService *this)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v4);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 1);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 2);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 3);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 4);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 5);
  SafeUnsubscribeWnf((struct _WNF_USER_SUBSCRIPTION **)this + 6);
  return 0LL;
}
