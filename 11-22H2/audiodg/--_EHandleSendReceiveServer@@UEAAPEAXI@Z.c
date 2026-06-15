/*
 * XREFs of ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140039820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140027DD8 (--3@YAXPEAX@Z.c)
 *     ??1HandleSendReceiveServer@@UEAA@XZ @ 0x14007B334 (--1HandleSendReceiveServer@@UEAA@XZ.c)
 */

HandleSendReceiveServer *__fastcall HandleSendReceiveServer::`vector deleting destructor'(
        HandleSendReceiveServer *this,
        char a2)
{
  HandleSendReceiveServer::~HandleSendReceiveServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
