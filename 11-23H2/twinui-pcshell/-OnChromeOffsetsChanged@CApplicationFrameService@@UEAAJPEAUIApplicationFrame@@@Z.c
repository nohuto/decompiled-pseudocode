/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1800426D0
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x180042540 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180037420 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___ @ 0x180042878 (CApplicationFrameService--_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, __int64, GUID *, __int64 *); // rbx
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  int v10; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF

  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v12) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v10) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v11) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v8 = 0LL;
    v4 = v11;
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v8);
    if ( (int)CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___(
                (char *)this - 48,
                v4,
                &v8) >= 0 )
    {
      v9 = 0LL;
      v5 = *((_QWORD *)this + 15);
      v6 = *(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v5 + 48LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
      if ( v6(v5, (v8 + 8) & -(__int64)(v8 != 0), &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v9) >= 0 )
      {
        *(_OWORD *)(v8 + 88) = v12;
        *(_DWORD *)(v8 + 104) = v10;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 488LL))(v9);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v9);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v8);
  }
  return 0LL;
}
