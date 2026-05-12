/*
 * XREFs of StorpGetDataInSgList @ 0x1C0048C80
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetDataInSgList(__int64 a1)
{
  _DWORD *Adapter; // rax
  __int64 v2; // r10
  _QWORD *v3; // r11
  unsigned int v4; // r9d
  __int64 v6; // rcx

  Adapter = RaidpPortGetAdapter(a1);
  v4 = 0;
  if ( !Adapter )
    return 3238002694LL;
  if ( (*((_BYTE *)Adapter + 4307) & 4) == 0 )
  {
    if ( v3 )
    {
      if ( *(_BYTE *)(v2 + 2) == 40 )
        v6 = *(_QWORD *)(v2 + 96);
      else
        v6 = *(_QWORD *)(v2 + 48);
      *v3 = *(_QWORD *)(v6 + 152);
      return v4;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x2Cu,
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
  }
  return (unsigned int)-1056964602;
}
