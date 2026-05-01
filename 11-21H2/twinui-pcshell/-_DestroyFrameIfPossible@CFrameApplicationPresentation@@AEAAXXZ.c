/*
 * XREFs of ?_DestroyFrameIfPossible@CFrameApplicationPresentation@@AEAAXXZ @ 0x180137354
 * Callers:
 *     _lambda_201adf67891f12ccd8a16b46f471aeff_::operator() @ 0x180137198 (_lambda_201adf67891f12ccd8a16b46f471aeff_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___::Run @ 0x1801777D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2647a080773a9fa4ef6a91f024d7dfff___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CFrameApplicationPresentation::_DestroyFrameIfPossible(CFrameApplicationPresentation *this)
{
  char v2; // di
  __int64 v3; // rsi
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = 1;
  if ( *((_DWORD *)this + 14) != 1 || **((_QWORD **)this + 13) )
    v2 = 0;
  v3 = *((_QWORD *)this + 15);
  v5 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
  v4 = *((_QWORD *)this + 80);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v4);
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 15);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 80);
    *((_DWORD *)this + 14) = 2;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v5);
}
