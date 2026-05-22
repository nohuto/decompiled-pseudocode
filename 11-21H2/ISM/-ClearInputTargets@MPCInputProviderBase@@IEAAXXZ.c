/*
 * XREFs of ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800AD174
 * Callers:
 *     ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800A7740 (-OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800A8810 (-Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCInputProviderBase@@UEAAXXZ @ 0x1800AF370 (-Uninitialize3DComponents@MPCInputProviderBase@@UEAAXXZ.c)
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801C05F0 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801C20B0 (-Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801C6D00 (-Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800AEF44 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 */

void __fastcall MPCInputProviderBase::ClearInputTargets(MPCInputProviderBase *this)
{
  struct IMPCTarget *v2; // rax
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned int v6; // [rsp+20h] [rbp-18h]

  if ( *((_BYTE *)this + 3568) )
  {
    v2 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 240LL))((char *)this + 24);
    MPCInputProviderBase::ProcessSourceDetectedAndLost(this, v2, 0LL, 0LL, v6);
  }
  if ( *((_BYTE *)this + 3570) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Instance + 411) + 48LL))(*((_QWORD *)Instance + 411));
    if ( v5 )
    {
      LOBYTE(v4) = 1;
      (*(void (__fastcall **)(MPCInputProviderBase *, __int64, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        v4,
        0LL,
        (char *)this + 560);
      *((_BYTE *)this + 3562) = 0;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 24LL))(v5, (char *)this + 560);
    }
    *((_BYTE *)this + 3570) = 0;
  }
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 208LL))((char *)this + 24, 0LL);
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 200LL))((char *)this + 24, 0LL);
}
