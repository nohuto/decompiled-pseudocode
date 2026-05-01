/*
 * XREFs of ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x18003ECB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18003EE00 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_712fa0ba2d8bf27a4057fb1c931fbf13___ @ 0x18003EF40 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_712fa0ba2d8bf27a4057f.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1800E15F0 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::SetShowInSwitchers(CWinRTApplicationView *this, int a2)
{
  __int64 v3; // rbx
  volatile int *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r8
  _QWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v9; // [rsp+40h] [rbp-20h] BYREF
  __int64 v10; // [rsp+48h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp-10h]
  __int64 v12; // [rsp+80h] [rbp+20h] BYREF
  int v13; // [rsp+88h] [rbp+28h] BYREF
  char v14; // [rsp+90h] [rbp+30h] BYREF

  v13 = a2;
  v3 = 0LL;
  GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v12);
  if ( v12 )
  {
    v5 = *(_QWORD *)(v12 + 48);
    if ( v5 )
    {
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 228), v4);
      v3 = v6;
    }
  }
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v12);
  if ( v3 )
    v3 += 136LL;
  v12 = v3;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, (char *)this + 48);
  if ( (v13 != 0) != *((_BYTE *)this + 216) )
  {
    *((_BYTE *)this + 216) = v13 != 0;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v9);
    v10 = -1LL;
    v11 = -1LL;
    if ( (int)CWinRTApplicationView::GetViewId((CWinRTApplicationView *)((char *)this + 16), &v9) >= 0 )
    {
      v8[0] = &v9;
      v8[1] = &v13;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_712fa0ba2d8bf27a4057fb1c931fbf13___(v8);
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64, CWinRTApplicationView *, _QWORD, _QWORD))(*(_QWORD *)v3 + 168LL))(
        v3,
        this,
        11 - (unsigned int)(v13 != 0),
        0LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v9);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return 0LL;
}
