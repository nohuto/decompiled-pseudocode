/*
 * XREFs of ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180008670
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006730 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006BD0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006E90 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180007C70 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUIAudioAppVolumePolicyChange@@@?$vector@PEAUIAudioAppVolumePolicyChange@@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@QEAAPEAPEAUIAudioAppVolumePolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180024364 (--$_Emplace_reallocate@AEBQEAUIAudioAppVolumePolicyChange@@@-$vector@PEAUIAudioAppVolumePolicyCh.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplication::NotifyVolumePolicyChange(CApplication *this)
{
  _QWORD *v2; // r15
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  const char *v4; // r9
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  __int64 v9; // rbx
  _QWORD *i; // rsi
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v12; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0LL;
  v2 = 0LL;
  v12 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = (_QWORD *)*((_QWORD *)this + 15);
  try
  {
LABEL_2:
    v6 = (_QWORD *)*((_QWORD *)&v11 + 1);
    while ( v5 )
    {
      v7 = v5;
      v5 = (_QWORD *)*v5;
      v8 = v7 + 2;
      if ( v6 == v2 )
      {
        std::vector<IAudioAppVolumePolicyChange *>::_Emplace_reallocate<IAudioAppVolumePolicyChange * const &>(
          &v11,
          v6,
          v8);
        v2 = v12;
        goto LABEL_2;
      }
      *v6++ = *v8;
      *((_QWORD *)&v11 + 1) = v6;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    v9 = v11;
    for ( i = (_QWORD *)v11; i != v6; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(
        *i,
        *((unsigned int *)this + 4),
        *((_QWORD *)this + 3));
    if ( v9 )
      std::_Deallocate<16,0>(v9, 8 * (((__int64)v2 - v9) >> 3));
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x96B,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      v4);
  }
}
