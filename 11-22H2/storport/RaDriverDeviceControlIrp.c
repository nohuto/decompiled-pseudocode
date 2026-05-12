/*
 * XREFs of RaDriverDeviceControlIrp @ 0x1C0006A50
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitDeviceControlIrp @ 0x1C0006AF0 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     RaidDriverDeviceControlIrp @ 0x1C003FDA8 (RaidDriverDeviceControlIrp.c)
 */

__int64 __fastcall RaDriverDeviceControlIrp(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_aebdecc26ac03ea54f5217517cc0f841_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1431193940 )
  {
    v6 = RaUnitDeviceControlIrp(v4, (PIRP)a2);
  }
  else if ( v5 == 1094997074 )
  {
    v6 = RaidAdapterDeviceControlIrp((int)v4, (PIRP)a2);
  }
  else
  {
    if ( v5 != 1146246738 )
    {
      v7 = -1073741823;
      goto LABEL_6;
    }
    v6 = RaidDriverDeviceControlIrp(v4, a2);
  }
  v7 = v6;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 17LL, &WPP_aebdecc26ac03ea54f5217517cc0f841_Traceguids, a1, a2, v7);
  }
  return v7;
}
