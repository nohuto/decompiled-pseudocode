/*
 * XREFs of StorpGetOriginalMdl @ 0x1C004918C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetOriginalMdl(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  __int64 v5; // rcx

  v4 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v5 = *(_QWORD *)(a2 + 96);
    else
      v5 = *(_QWORD *)(a2 + 48);
    if ( a3 )
      *a4 = *(_QWORD *)(v5 + 136);
    else
      *a4 = *(_QWORD *)(v5 + 104);
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Bu,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return (unsigned int)-1056964602;
  }
  return v4;
}
