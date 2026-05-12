/*
 * XREFs of StorpAcquireMSISpinLock @ 0x1C001F4B8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall StorpAcquireMSISpinLock(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  _DWORD *Adapter; // rax
  __int64 v6; // r9
  __int64 v7; // r8

  v3 = 0;
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 55LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return (unsigned int)-1056964602;
  }
  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return (unsigned int)-1056964602;
  if ( !*((_BYTE *)Adapter + 4305) )
    return (unsigned int)-1056964601;
  v7 = *((_QWORD *)Adapter + 536);
  if ( (unsigned int)v6 >= *(_DWORD *)(v7 + 4) )
    return (unsigned int)-1056964602;
  *a3 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v7 + 48 * v6 + 24));
  return v3;
}
