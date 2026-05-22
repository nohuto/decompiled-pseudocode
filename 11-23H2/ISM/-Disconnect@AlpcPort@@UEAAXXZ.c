/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x180119A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x180119298 (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x18011B0E0 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

void __fastcall AlpcPort::Disconnect(AlpcPort *this)
{
  int v2; // esi
  __int64 v3; // [rsp+60h] [rbp+8h] BYREF
  __int64 v4; // [rsp+68h] [rbp+10h] BYREF

  if ( (*((__int16 *)this + 46) & 0xFFFF00FF) == 0xA )
    AlpcPort::RejectClientConnection(this);
  if ( !(unsigned int)NtAlpcDisconnectPort(*((_QWORD *)this + 7), 0LL) )
  {
    do
    {
      v3 = 0LL;
      v4 = 332LL;
      *(_OWORD *)((char *)this + 88) = 0LL;
      *(_OWORD *)((char *)this + 104) = 0LL;
      *((_QWORD *)this + 15) = 0LL;
      *((_QWORD *)this + 53) = 0LL;
      *((_WORD *)this + 45) = 40;
      *((_DWORD *)this + 106) = 1610612736;
      v2 = NtAlpcSendWaitReceivePort(
             *((_QWORD *)this + 7),
             0LL,
             0LL,
             0LL,
             (char *)this + 88,
             &v4,
             (char *)this + 424,
             &v3);
      if ( (*((_WORD *)this + 46) & 0x2000) != 0 )
        AlpcMessage::Cancel((AlpcPort *)((char *)this + 88), *((void **)this + 7));
    }
    while ( !v2 );
  }
  SipcPort::DisconnectAllSections(this);
}
