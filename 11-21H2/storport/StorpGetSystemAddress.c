/*
 * XREFs of StorpGetSystemAddress @ 0x1C00460A0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 */

__int64 __fastcall StorpGetSystemAddress(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  __int64 v10; // rcx
  __int64 v11; // rcx
  PVOID v12; // rax

  v4 = 0;
  if ( !a4 )
  {
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v9 = 39;
LABEL_6:
    WPP_SF_((__int64)v8->AttachedDevice, v9, (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
    return (unsigned int)-1056964602;
  }
  *a4 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v10 = *(_QWORD *)(a2 + 96);
    else
      v10 = *(_QWORD *)(a2 + 48);
    if ( a3 )
      v11 = *(_QWORD *)(v10 + 136);
    else
      v11 = *(_QWORD *)(v10 + 104);
    if ( !v11 )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return (unsigned int)-1056964602;
      }
      v9 = 41;
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
      v12 = *(PVOID *)(v11 + 24);
    else
      v12 = MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, 0x40000010u);
    *a4 = v12;
    if ( !v12 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x2Au,
          (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
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
        0x28u,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  return v4;
}
