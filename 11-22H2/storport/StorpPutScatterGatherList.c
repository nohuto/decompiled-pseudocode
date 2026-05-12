/*
 * XREFs of StorpPutScatterGatherList @ 0x1C0049FAC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall StorpPutScatterGatherList(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  _DWORD *Adapter; // rax
  __int64 v8; // r8
  __int64 v9; // rcx

  v3 = 0;
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x34u,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return (unsigned int)-1056964602;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    Adapter = RaidpPortGetAdapter(a1);
    if ( !Adapter )
      return (unsigned int)-1056964602;
    v9 = *((_QWORD *)Adapter + 95);
    if ( v9 )
    {
      LOBYTE(v8) = a3;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v9 + 8) + 96LL))(v9, a2, v8);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x36u,
          (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
      }
      return (unsigned int)-1056964601;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x35u,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  return v3;
}
