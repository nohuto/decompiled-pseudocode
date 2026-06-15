/*
 * XREFs of ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x18003B34C
 * Callers:
 *     ?s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18003B580 (-s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CDriverListener::HandleShellWarningAccepted(CDriverListener *this, _DWORD *a2, int a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, GUID *, __int64); // rsi
  __int64 v8; // rcx
  __int64 *v9; // [rsp+20h] [rbp-50h]
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h] BYREF
  GUID v12; // [rsp+50h] [rbp-20h] BYREF
  __int128 v13; // [rsp+60h] [rbp-10h]
  int v14; // [rsp+90h] [rbp+20h] BYREF
  BOOL v15; // [rsp+A8h] [rbp+38h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  if ( *((_DWORD *)this + 124) == 1 )
  {
    *((_DWORD *)this + 124) = 0;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        v15 = *a2 == 1;
        v4 = *(_QWORD *)g_DeviceEnumerator;
        v11 = 0LL;
        v5 = (*(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(v4 + 40))(
               g_DeviceEnumerator,
               (char *)this + 12,
               &v11);
        if ( v5 < 0 )
          goto LABEL_11;
        v6 = v11;
        v7 = *(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v11 + 24LL);
        v8 = v10;
        v10 = 0LL;
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        v9 = &v10;
        v5 = v7(v6, &GUID_28f54685_06fd_11d2_b27a_00a0c9223196, 1LL);
        if ( v5 < 0
          || (HIDWORD(v13) = 0,
              v12 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000,
              *(_QWORD *)&v13 = 0x200000039LL,
              DWORD2(v13) = *((unsigned __int16 *)this + 246),
              LODWORD(v9) = 4,
              v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, BOOL *, __int64 *, int *))(*(_QWORD *)v10 + 24LL))(
                     v10,
                     &v12,
                     32LL,
                     &v15,
                     v9,
                     &v14),
              v5 < 0) )
        {
LABEL_11:
          if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_640341ffe704312f5290c3b127ee24a4_Traceguids, v5);
          }
        }
      }
    }
  }
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v10);
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v11);
}
