/*
 * XREFs of ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x1800CC110
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     floorf @ 0x18005F960 (floorf.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_dd @ 0x1800CF190 (WPP_SF_dd.c)
 *     WPP_SF_g @ 0x1800CF234 (WPP_SF_g.c)
 */

__int64 __fastcall CVolumeControlBase::GetVolumeStepInfo(CVolumeControlBase *this, unsigned int *a2, unsigned int *a3)
{
  int v6; // edi
  unsigned int v8; // ebx
  __int64 v9; // r9
  float v10; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    v6 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetVolumeStepInfo", 276, v6);
    return (unsigned int)v6;
  }
  *a2 = 0;
  *a3 = *((_DWORD *)this + 12);
  v6 = (*(__int64 (__fastcall **)(CVolumeControlBase *, float *))(*(_QWORD *)this + 112LL))(this, &v10);
  if ( v6 < 0 )
    goto LABEL_3;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_972200849a753c8240eefd9f39169899_Traceguids);
  }
  v8 = *((_DWORD *)this + 12) - 1;
  v9 = (unsigned int)(int)floorf((float)((float)(int)v8 * v10) + 0.5);
  if ( (unsigned int)v9 >= v8 )
    v9 = v8;
  *a2 = v9;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_972200849a753c8240eefd9f39169899_Traceguids, v9, *a3);
  }
  return (unsigned int)v6;
}
