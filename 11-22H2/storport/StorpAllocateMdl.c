/*
 * XREFs of StorpAllocateMdl @ 0x1C004835C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall StorpAllocateMdl(__int64 a1, void *a2, ULONG a3, PMDL *a4)
{
  unsigned int v4; // ebx
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  PMDL Mdl; // rax

  v4 = 0;
  if ( !a2 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 31;
LABEL_6:
    WPP_SF_((__int64)v8->AttachedDevice, v9, (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    return (unsigned int)-1056964602;
  }
  if ( !a4 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 32;
    goto LABEL_6;
  }
  *a4 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
    *a4 = Mdl;
    if ( !Mdl )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x22u,
          (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
      }
      return (unsigned int)-1056964605;
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
        0x21u,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  return v4;
}
