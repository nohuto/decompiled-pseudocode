/*
 * XREFs of ?ndisMRejectSendPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C42C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMRejectSendPackets(
        void (__fastcall **a1)(_QWORD, _QWORD, _QWORD),
        struct _NDIS_PACKET **a2,
        unsigned int a3)
{
  __int64 v4; // rsi

  if ( a3 )
  {
    v4 = a3;
    do
    {
      (*a2)->Private.NdisPacketFlags &= 0xC0u;
      a1[14](a1[66], *a2++, 3221225659LL);
      --v4;
    }
    while ( v4 );
  }
}
