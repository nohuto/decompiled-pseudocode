/*
 * XREFs of ?SetSessionTitleAndIcon@CMonitor@@AEAAJPEAUIMMDevice@@@Z @ 0x180131C48
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x18013030C (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitor::SetSessionTitleAndIcon(CMonitor *this, struct IMMDevice *a2)
{
  int v3; // ebx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-10h]
  __int64 v7; // [rsp+60h] [rbp+20h] BYREF

  v7 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v6 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v7);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
               v7,
               &PKEY_Device_FriendlyName,
               pvar),
        v3 < 0)
    || LOWORD(pvar[0]) == 31
    && (v3 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**((_QWORD **)this + 19) + 40LL))(
               *((_QWORD *)this + 19),
               pvar[1],
               0LL),
        v3 < 0)
    || (PropVariantClear(pvar),
        v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
               v7,
               &PKEY_DeviceClass_IconPath,
               pvar),
        v3 < 0)
    || LOWORD(pvar[0]) == 31
    && (v3 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**((_QWORD **)this + 19) + 56LL))(
               *((_QWORD *)this + 19),
               pvar[1],
               0LL),
        v3 < 0) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
        v3);
    }
  }
  PropVariantClear(pvar);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v7);
  return (unsigned int)v3;
}
