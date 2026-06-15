/*
 * XREFs of ?SetMonitorMirrorEligibleProperty@CMonitorManager@@AEAAJPEBG@Z @ 0x18012F110
 * Callers:
 *     ?UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z @ 0x18012F74C (-UpdateRoutedEndpointId@CMonitorManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::SetMonitorMirrorEligibleProperty(CMonitorManager *this, const unsigned __int16 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64, __int64 *); // rdi
  __int64 v7; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]
  __int64 v11; // [rsp+50h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF

  v12 = 0LL;
  v11 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 8);
  v3 = *v2;
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, const unsigned __int16 *, __int64 *))(v3 + 40))(v2, a2, &v12);
  if ( v4 >= 0 )
  {
    v5 = v12;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 32LL);
    v7 = v11;
    v11 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v4 = v6(v5, 1LL, &v11);
    if ( v4 >= 0 )
    {
      LOWORD(pvar[0]) = 11;
      LOWORD(pvar[1]) = -1;
      v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 48LL))(
             v11,
             &PKEY_MonitorMirrorEligible,
             pvar);
    }
  }
  PropVariantClear(pvar);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v12);
  return (unsigned int)v4;
}
