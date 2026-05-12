/*
 * XREFs of StorpGetMSIInfo @ 0x1C0049044
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 */

__int64 __fastcall StorpGetMSIInfo(__int64 a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v3; // rcx
  unsigned __int16 v4; // dx
  unsigned int v5; // r9d
  _DWORD *Adapter; // rax
  __int64 v7; // r10
  __int64 v8; // r11
  unsigned __int8 *v9; // r8

  if ( !a1 )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v4 = 57;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v3 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v4 = 58;
LABEL_6:
    WPP_SF_((__int64)v3->AttachedDevice, v4, (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    return (unsigned int)-1056964602;
  }
  Adapter = RaidpPortGetAdapter(a1);
  if ( Adapter )
  {
    if ( *((_BYTE *)Adapter + 4305) == (_BYTE)v5 )
      return (unsigned int)-1056964601;
    v9 = (unsigned __int8 *)*((_QWORD *)Adapter + 536);
    if ( (unsigned int)v8 < *((_DWORD *)v9 + 1) )
    {
      *(_DWORD *)v7 = v8;
      *(_DWORD *)(v7 + 4) = *(_DWORD *)&v9[48 * v8 + 32];
      *(_QWORD *)(v7 + 8) = *(_QWORD *)&v9[48 * v8 + 8];
      *(_DWORD *)(v7 + 16) = *(_DWORD *)&v9[48 * v8 + 36];
      *(_DWORD *)(v7 + 20) = *v9;
      *(_DWORD *)(v7 + 24) = *(_DWORD *)&v9[48 * v8 + 44];
      return v5;
    }
  }
  return (unsigned int)-1056964602;
}
