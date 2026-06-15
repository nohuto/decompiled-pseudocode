/*
 * XREFs of ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180007C70
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006730 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006E90 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 * Callees:
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180008670 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x180008780 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplication::RecalculateVolume(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  _QWORD *v4; // rsi
  __int64 v5; // rbp
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  unsigned int v8; // r14d
  __int64 v9; // rcx
  int v10; // r13d
  AudioStateMonitorManager *v11; // rcx
  int v13; // [rsp+20h] [rbp-78h]
  __int64 v14; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+A8h] [rbp+10h]
  __int64 v16; // [rsp+B0h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+B8h] [rbp+20h]

  v15 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v17 = v3;
  v4 = *(_QWORD **)(a1 + 72);
  if ( !v4 )
    goto LABEL_19;
  do
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( *(_DWORD *)(v5 + 416) )
      continue;
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 24));
    v6 = *(_QWORD **)(v5 + 72);
    v7 = (_QWORD *)*v6;
    v8 = v15;
    while ( v7 != v6 )
    {
      v9 = v7[3];
      v14 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL))(
              v9,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v16);
      if ( v10 >= 0 )
      {
        if ( !v16 )
          goto LABEL_11;
        v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v16)(
                v16,
                &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
                &v14);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( v10 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14) != 2 )
      {
        LOBYTE(v13) = 0;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v14 + 152LL))(
          v14,
          v8,
          0LL,
          0xFFFFFFFFLL,
          v13,
          0LL);
      }
LABEL_11:
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v7 = (_QWORD *)*v7;
    }
    v11 = *(AudioStateMonitorManager **)(v5 + 704);
    v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
    if ( v11 )
      AudioStateMonitorManager::RecalculateVolume(v11);
    if ( v5 != -24 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v5 + 24));
  }
  while ( v4 );
LABEL_19:
  CApplication::NotifyVolumePolicyChange((CApplication *)a1);
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
