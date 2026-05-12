/*
 * XREFs of StorEnablePassiveInitialization @ 0x1C0044EBC
 * Callers:
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

char __fastcall StorEnablePassiveInitialization(__int64 a1)
{
  _DWORD *Adapter; // rax
  __int64 v2; // r9

  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 0;
  if ( (Adapter[26] & 0x10) == 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0 )
    {
      if ( BYTE1(WPP_GLOBAL_Control->Timer) )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x17u,
          (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return 0;
  }
  *((_QWORD *)Adapter + 533) = v2;
  return 1;
}
