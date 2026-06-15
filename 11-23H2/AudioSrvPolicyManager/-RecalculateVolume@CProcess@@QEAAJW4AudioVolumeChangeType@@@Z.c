/*
 * XREFs of ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180008CF0
 * Callers:
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x1800285B8 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x180008780 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProcess::RecalculateVolume(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *i; // rbx
  __int64 v7; // rcx
  int v8; // r14d
  AudioStateMonitorManager *v9; // rcx
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+98h] [rbp+20h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v14 = v4;
  v5 = *(_QWORD **)(a1 + 72);
  for ( i = (_QWORD *)*v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = i[3];
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v13);
    if ( v8 >= 0 )
    {
      if ( !v13 )
        goto LABEL_9;
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v13)(
             v13,
             &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
             &v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v8 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12) != 2 )
    {
      LOBYTE(v11) = 0;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v12 + 152LL))(
        v12,
        a2,
        0LL,
        0xFFFFFFFFLL,
        v11,
        0LL);
    }
LABEL_9:
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v9 = *(AudioStateMonitorManager **)(a1 + 704);
  if ( v9 )
    AudioStateMonitorManager::RecalculateVolume(v9);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
