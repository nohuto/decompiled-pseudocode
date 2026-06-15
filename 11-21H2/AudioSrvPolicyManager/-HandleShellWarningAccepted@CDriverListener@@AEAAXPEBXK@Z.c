/*
 * XREFs of ?HandleShellWarningAccepted@CDriverListener@@AEAAXPEBXK@Z @ 0x180032DF0
 * Callers:
 *     ?s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180033060 (-s_ShellWnfCallback@CDriverListener@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CDriverListener::HandleShellWarningAccepted(CDriverListener *this, _DWORD *a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, GUID *, __int64); // rsi
  __int64 v10; // rcx
  __int64 *v11; // [rsp+20h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h] BYREF
  GUID v14; // [rsp+50h] [rbp-20h] BYREF
  __int128 v15; // [rsp+60h] [rbp-10h]
  int v16; // [rsp+90h] [rbp+20h] BYREF
  int v17; // [rsp+A8h] [rbp+38h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( *((_DWORD *)this + 124) == 1 )
  {
    *((_DWORD *)this + 124) = 0;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        LOBYTE(v5) = *a2 == 1;
        v17 = v5;
        v6 = *(_QWORD *)g_DeviceEnumerator;
        v13 = 0LL;
        v7 = (*(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(v6 + 40))(
               g_DeviceEnumerator,
               (char *)this + 12,
               &v13);
        if ( v7 < 0 )
          goto LABEL_9;
        v8 = v13;
        v9 = *(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v13 + 24LL);
        v10 = v12;
        v12 = 0LL;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v11 = &v12;
        v7 = v9(v8, &GUID_28f54685_06fd_11d2_b27a_00a0c9223196, 1LL);
        if ( v7 < 0
          || (HIDWORD(v15) = 0,
              v14 = GUID_45ffaaa0_6e1b_11d0_bcf2_444553540000,
              *(_QWORD *)&v15 = 0x200000039LL,
              DWORD2(v15) = *((unsigned __int16 *)this + 246),
              LODWORD(v11) = 4,
              v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, int *, __int64 *, int *))(*(_QWORD *)v12 + 24LL))(
                     v12,
                     &v14,
                     32LL,
                     &v17,
                     v11,
                     &v16),
              v7 < 0) )
        {
LABEL_9:
          a2 = &WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, &WPP_640341ffe704312f5290c3b127ee24a4_Traceguids, v7);
          }
        }
        v5 = v12;
        v4 = v13;
      }
    }
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v4 = v13;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v4 + 16LL))(v4, a2);
}
