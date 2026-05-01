/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___ @ 0x1805E7B50
 * Callers:
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1805E7E50 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CoCreateInstance_0 @ 0x180189A77 (CoCreateInstance_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationViewByAppID__lambda_aed1de138aa46e36192d6ffea72541fd___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *ppv; // rbx
  HRESULT Instance_0; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, GUID *, GUID *, __int64 *); // rsi
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, __int64 *); // rsi
  __int64 *v11; // rdi
  bool v12; // r15
  unsigned int v13; // r14d
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 *v16; // rdi
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  ppv = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v20, &v22);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(ppv);
  Instance_0 = CoCreateInstance_0(
                 &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
                 0LL,
                 0x404u,
                 &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                 (LPVOID *)ppv);
  if ( Instance_0 >= 0 )
  {
    v6 = v20;
    v19 = 0LL;
    v7 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v20 + 24LL);
    v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v19, &v22);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
    Instance_0 = v7(v6, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5, v8);
    if ( Instance_0 >= 0 )
    {
      v9 = v19;
      v23 = 0LL;
      v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v19 + 40LL);
      v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v11);
      Instance_0 = v10(v9, a1, v11);
      if ( Instance_0 >= 0 )
      {
        v12 = 1;
        v13 = 0;
        for ( Instance_0 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v22);
              Instance_0 >= 0;
              ++v13 )
        {
          if ( !v12 || v13 >= (unsigned int)v22 )
            break;
          v14 = v23;
          v18 = 0LL;
          v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v23 + 32LL);
          v16 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, &v21);
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v16);
          Instance_0 = v15(v14, v13, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v16);
          if ( Instance_0 >= 0 )
          {
            Instance_0 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v18 + 216LL))(v18, *a2);
            if ( Instance_0 >= 0 )
              v12 = *(_DWORD *)*a2 == 0;
          }
          Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
        }
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  return (unsigned int)Instance_0;
}
