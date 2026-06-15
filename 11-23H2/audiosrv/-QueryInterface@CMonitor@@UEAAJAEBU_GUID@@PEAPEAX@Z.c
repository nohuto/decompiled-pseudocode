/*
 * XREFs of ?QueryInterface@CMonitor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180131AC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 */

__int64 __fastcall CMonitor::QueryInterface(CMonitor *this, const struct _GUID *a2, CMonitor **a3)
{
  CMonitor *v4; // rdi
  __int64 v5; // rax
  int v6; // ebx

  v4 = this;
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_10:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x33u,
        (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
        v6);
    }
    return (unsigned int)v6;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v5 )
  {
    v6 = -2147467262;
    v4 = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
    v6 = 0;
  }
  *a3 = v4;
  if ( v6 < 0 )
    goto LABEL_10;
  return (unsigned int)v6;
}
