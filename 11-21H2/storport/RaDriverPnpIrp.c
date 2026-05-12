/*
 * XREFs of RaDriverPnpIrp @ 0x1C000CC90
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitPnpIrp @ 0x1C000CA00 (RaUnitPnpIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C001A098 (RaidAdapterPnpIrp.c)
 *     WPP_SF_qqD @ 0x1C003C760 (WPP_SF_qqD.c)
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
      &WPP_9cef3b4c60973fc161441df373a78906_Traceguids,
      a1,
      a2,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL));
  }
  *(_BYTE *)(a2 + 141) = -88;
  v5 = *(_DWORD **)(a1 + 64);
  if ( *v5 )
  {
    if ( *v5 != 1 )
    {
      v7 = -1073741823;
      goto LABEL_7;
    }
    v6 = RaUnitPnpIrp((__int64)v5, (IRP *)a2, a3);
  }
  else
  {
    v6 = RaidAdapterPnpIrp((int)v5, (PIRP)a2);
  }
  v7 = v6;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_9cef3b4c60973fc161441df373a78906_Traceguids, a1, a2, v7);
  }
  return v7;
}
