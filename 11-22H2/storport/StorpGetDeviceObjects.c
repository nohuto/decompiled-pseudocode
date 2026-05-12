/*
 * XREFs of StorpGetDeviceObjects @ 0x1C0048D14
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetDeviceObjects(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // dx
  unsigned int v7; // r10d
  _QWORD *Adapter; // rax
  _QWORD *v9; // r9
  _QWORD *v10; // r11

  if ( !a1 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 45;
    goto LABEL_6;
  }
  if ( !a2 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 46;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 47;
    goto LABEL_6;
  }
  if ( !a4 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v6 = 48;
LABEL_6:
    WPP_SF_((__int64)v5->AttachedDevice, v6, (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    return (unsigned int)-1056964602;
  }
  Adapter = RaidpPortGetAdapter(a1);
  if ( Adapter )
  {
    *a2 = Adapter[1];
    *v10 = Adapter[4];
    *v9 = Adapter[3];
    return v7;
  }
  return (unsigned int)-1056964602;
}
