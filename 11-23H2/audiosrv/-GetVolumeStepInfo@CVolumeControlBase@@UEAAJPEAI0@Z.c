/*
 * XREFs of ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180005870
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     floorf @ 0x1800679E0 (floorf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_dd @ 0x1800E3DE8 (WPP_SF_dd.c)
 *     WPP_SF_g @ 0x1800E3E8C (WPP_SF_g.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeStepInfo(CVolumeControlBase *this, unsigned int *a2, unsigned int *a3)
{
  int v5; // edi
  int v6; // ebx
  unsigned int v7; // r9d
  float v9; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    v5 = -2147467261;
    goto LABEL_12;
  }
  *a2 = 0;
  *a3 = *((_DWORD *)this + 12);
  v5 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 120LL))(this, &v9);
  if ( v5 < 0 )
  {
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeStepInfo", 0x133u, v5);
    return (unsigned int)v5;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids);
  }
  v6 = *((_DWORD *)this + 12) - 1;
  v7 = (int)floorf((float)((float)v6 * v9) + 0.5);
  if ( v7 >= v6 )
    v7 = v6;
  *a2 = v7;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids);
  }
  return (unsigned int)v5;
}
