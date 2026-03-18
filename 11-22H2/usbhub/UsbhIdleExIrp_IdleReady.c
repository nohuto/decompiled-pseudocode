/*
 * XREFs of UsbhIdleExIrp_IdleReady @ 0x1C0057A84
 * Callers:
 *     UsbhIdleIrp_Event @ 0x1C0057F68 (UsbhIdleIrp_Event.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSetIdleIrpState @ 0x1C001BE6C (UsbhSetIdleIrpState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C0058434 (UsbhIdleIrp_ReleaseIrp.c)
 */

__int64 __fastcall UsbhIdleExIrp_IdleReady(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5, KIRQL NewIrql)
{
  __int64 v10; // rcx
  _DWORD *v11; // r14
  unsigned int v12; // eax

  Log(a1, 0x10000, 1936938851, a2, a3);
  v11 = PdoExt(a2);
  switch ( a4 )
  {
    case 1:
      goto LABEL_10;
    case 5:
      UsbhSetIdleIrpState(v10, a2, 5, 0, NewIrql);
      v12 = v11[360];
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
    case 6:
      UsbhSetIdleIrpState(v10, a2, 6, 0, NewIrql);
      v12 = -1073741536;
      return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
    case 7:
LABEL_10:
      if ( !a3 )
        UsbhTrapFatal_Dbg(a1, a1);
      UsbhSetIdleIrpState(v10, a2, a4, 5, NewIrql);
      v12 = -2147483631;
      break;
    case 8:
      UsbhSetIdleIrpState(v10, a2, 8, 0, NewIrql);
      v12 = 0;
      break;
    default:
      UsbhSetIdleIrpState(v10, a2, a4, a5, NewIrql);
      v12 = -1073741823;
      break;
  }
  return UsbhIdleIrp_ReleaseIrp(a1, a2, a3, v12);
}
