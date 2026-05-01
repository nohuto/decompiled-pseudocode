/*
 * XREFs of ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x180021E00
 * Callers:
 *     <none>
 * Callees:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_712fa0ba2d8bf27a4057fb1c931fbf13___ @ 0x180021F34 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_712fa0ba2d8bf27a4057f.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x18008CA80 (-GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_6fdf3937fe5b77ad66258336b78d36c4___ @ 0x1800ED29C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_6fdf3937fe5b77ad66258.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWinRTApplicationView::SetShowInSwitchers(RTL_SRWLOCK *this, int a2)
{
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v6; // [rsp+40h] [rbp-20h] BYREF
  __int64 v7; // [rsp+48h] [rbp-18h]
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+90h] [rbp+30h] BYREF
  int v10; // [rsp+98h] [rbp+38h] BYREF
  RTL_SRWLOCK *v11; // [rsp+A0h] [rbp+40h]

  v10 = a2;
  v9 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_6fdf3937fe5b77ad66258336b78d36c4___(&v9);
  v3 = v9;
  if ( v9 )
    v3 = v9 + 136;
  v9 = v3;
  AcquireSRWLockExclusive(this + 6);
  v11 = this + 6;
  if ( (v10 != 0) != LOBYTE(this[27].Ptr) )
  {
    LOBYTE(this[27].Ptr) = v10 != 0;
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v6);
    v7 = -1LL;
    v8 = -1LL;
    if ( (int)CWinRTApplicationView::GetViewId((CWinRTApplicationView *)&this[2], &v6) >= 0 )
    {
      v5[0] = &v6;
      v5[1] = &v10;
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_712fa0ba2d8bf27a4057fb1c931fbf13___(v5);
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64, RTL_SRWLOCK *, _QWORD, _QWORD))(*(_QWORD *)v3 + 168LL))(
        v3,
        this,
        11 - (unsigned int)(v10 != 0),
        0LL);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v6);
  }
  if ( this != (RTL_SRWLOCK *)-48LL )
    ReleaseSRWLockExclusive(this + 6);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  return 0LL;
}
