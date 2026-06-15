/*
 * XREFs of ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x1400951B0
 * Callers:
 *     ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140096000 (-SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14009F420 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x140028498 (--3@YAXPEAX_K@Z.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x14007B540 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 */

HandleSendReceiveClient *__fastcall HandleSendReceiveClient::`vector deleting destructor'(
        HandleSendReceiveClient *this,
        char a2)
{
  *(_QWORD *)this = &HandleSendReceiveClient::`vftable';
  HandleSendReceiveClient::CloseConnection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
