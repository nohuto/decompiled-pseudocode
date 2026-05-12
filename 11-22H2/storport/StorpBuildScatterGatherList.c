/*
 * XREFs of StorpBuildScatterGatherList @ 0x1C0048574
 * Callers:
 *     StorBuildScatterGatherListProxy @ 0x1C0044D68 (StorBuildScatterGatherListProxy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidNtStatusToStorStatus @ 0x1C000D988 (RaidNtStatusToStorStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall StorpBuildScatterGatherList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  _DWORD *Adapter; // rax
  __int64 v15; // rcx
  int v16; // eax

  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x31u,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    Adapter = RaidpPortGetAdapter(a1);
    if ( !Adapter )
      return 3238002694LL;
    v15 = *((_QWORD *)Adapter + 95);
    if ( v15 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, __int64, __int64, char, __int64, int))(*(_QWORD *)(v15 + 8) + 112LL))(
              v15,
              *((_QWORD *)Adapter + 1),
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9);
      return RaidNtStatusToStorStatus(v16);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x33u,
          (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
      }
      return 3238002695LL;
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
        0x32u,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return 3238002696LL;
  }
}
