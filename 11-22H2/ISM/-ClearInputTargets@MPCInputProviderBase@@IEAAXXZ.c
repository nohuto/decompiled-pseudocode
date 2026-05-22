/*
 * XREFs of ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800D5498
 * Callers:
 *     ?OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800CFA20 (-OnDeviceRemoval@MPCHandProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800D0B20 (-Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCInputProviderBase@@UEAAXXZ @ 0x1800D76B0 (-Uninitialize3DComponents@MPCInputProviderBase@@UEAAXXZ.c)
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801EC270 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801EDD50 (-Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ.c)
 *     ?Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ @ 0x1801F2A50 (-Uninitialize3DComponents@MPCGamepadProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800D7284 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 */

void __fastcall MPCInputProviderBase::ClearInputTargets(MPCInputProviderBase *this)
{
  char *v1; // rsi
  struct IMPCTarget *v3; // rax
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v1 = (char *)this + 24;
  if ( *((_BYTE *)this + 3568) )
  {
    v3 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v1 + 240LL))((char *)this + 24);
    MPCInputProviderBase::ProcessSourceDetectedAndLost(this, v3, 0LL, 0LL, v7);
  }
  if ( *((_BYTE *)this + 3570) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Instance + 411) + 48LL))(*((_QWORD *)Instance + 411));
    if ( v6 )
    {
      LOBYTE(v5) = 1;
      (*(void (__fastcall **)(MPCInputProviderBase *, __int64, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        v5,
        0LL,
        (char *)this + 560);
      *((_BYTE *)this + 3562) = 0;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL))(v6, (char *)this + 560);
    }
    *((_BYTE *)this + 3570) = 0;
  }
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v1 + 208LL))(v1, 0LL);
  (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v1 + 200LL))(v1, 0LL);
}
