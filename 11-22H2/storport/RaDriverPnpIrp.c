/*
 * XREFs of RaDriverPnpIrp @ 0x1C0007940
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 *     WPP_SF_qqD @ 0x1C003EAF4 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaDriverPnpIrp(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      20LL,
      &WPP_aebdecc26ac03ea54f5217517cc0f841_Traceguids,
      a1,
      a2,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL));
  }
  *(_BYTE *)(a2 + 141) = -88;
  v5 = *(_DWORD **)(a1 + 64);
  if ( *v5 == 1431193940 )
  {
    v6 = RaUnitPnpIrp((__int64)v5, (IRP *)a2, a3);
  }
  else
  {
    if ( *v5 != 1094997074 )
    {
      v7 = -1073741823;
      goto LABEL_6;
    }
    v6 = RaidAdapterPnpIrp((int)v5, (PIRP)a2);
  }
  v7 = v6;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_aebdecc26ac03ea54f5217517cc0f841_Traceguids, a1, a2, v7);
  }
  return v7;
}
