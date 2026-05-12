/*
 * XREFs of RaDriverScsiIrp @ 0x1C0004BA0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 *     RaidAdapterScsiIrp @ 0x1C00A70B8 (RaidAdapterScsiIrp.c)
 */

__int64 __fastcall RaDriverScsiIrp(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_aebdecc26ac03ea54f5217517cc0f841_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(_DWORD **)(a1 + 64);
  if ( *v4 == 1431193940 )
  {
    v5 = RaUnitScsiIrp(v4, a2);
  }
  else
  {
    if ( *v4 != 1094997074 )
    {
      v6 = -1073741823;
      goto LABEL_6;
    }
    v5 = RaidAdapterScsiIrp(v4, a2);
  }
  v6 = v5;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_aebdecc26ac03ea54f5217517cc0f841_Traceguids, a1, a2, v6);
  }
  return v6;
}
