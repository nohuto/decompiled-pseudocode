/*
 * XREFs of RaDriverDeviceControlIrp @ 0x1C000AFB0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitDeviceControlIrp @ 0x1C000B054 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
 *     RaidDriverDeviceControlIrp @ 0x1C003DAE4 (RaidDriverDeviceControlIrp.c)
 */

__int64 __fastcall RaDriverDeviceControlIrp(__int64 a1, __int64 a2)
{
  int v4; // ecx
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_9cef3b4c60973fc161441df373a78906_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = **(_DWORD **)(a1 + 64);
  if ( v4 )
  {
    v5 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        v7 = -1073741823;
        goto LABEL_7;
      }
      v6 = RaidDriverDeviceControlIrp(v5, a2);
    }
    else
    {
      v6 = RaUnitDeviceControlIrp(*(PVOID *)(a1 + 64), (PIRP)a2);
    }
  }
  else
  {
    v6 = RaidAdapterDeviceControlIrp(*(_QWORD *)(a1 + 64), a2);
  }
  v7 = v6;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_9cef3b4c60973fc161441df373a78906_Traceguids, a1, a2, v7);
  }
  return v7;
}
