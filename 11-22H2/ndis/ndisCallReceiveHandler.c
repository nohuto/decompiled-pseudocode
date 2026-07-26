/*
 * XREFs of ndisCallReceiveHandler @ 0x1C0036E98
 * Callers:
 *     ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x1C0036980 (--$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@A.c)
 * Callees:
 *     ?ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00130B4 (-ndisIsFilterVerified@@YA_NPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     PktMonClientNblLogNdis @ 0x1C0040E3A (PktMonClientNblLogNdis.c)
 */

__int64 __fastcall ndisCallReceiveHandler(
        struct _NDIS_FILTER_BLOCK *a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, _QWORD, int),
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  _PKTMON_COMPONENT_CONTEXT *CompContext; // rax

  if ( byte_1C00F5390 )
  {
    if ( a1->Header.Type == 5 )
    {
      CompContext = a1->PktMonEdgeLower.CompContext;
      if ( CompContext )
      {
        if ( (*((_DWORD *)CompContext + 14) & 1) != 0 )
          PktMonClientNblLogNdis(&a1->PktMonEdgeLower, a4, a3, 1LL);
      }
    }
  }
  if ( ndisIsFilterVerified(a1) )
    return (*((__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, void *, __int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, int)))ndisVerifierNdisDispatch
            + 14))(
             a3,
             a4,
             a5,
             a6,
             a7,
             a1->VerifierContext,
             a2);
  else
    return a2(a3, a4, a5, a6, a7);
}
