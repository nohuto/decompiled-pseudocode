/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x1407C46BC
 * Callers:
 *     NtSecureConnectPort @ 0x1407C4100 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpUnlockMessage @ 0x14071C0B8 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x14071C0E8 (AlpcpReadMessageData.c)
 *     AlpcpReceiveSynchronousReply @ 0x14073DED0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpQueryRemoteView @ 0x1407C4804 (AlpcpQueryRemoteView.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14097914C (AlpcpGetDataFromUserVaSafe.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        char *a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v10; // rsi
  int v11; // eax
  int RemoteView; // edi
  __int64 v13; // rcx
  __int16 v14; // si
  _WORD *v15; // r14
  unsigned int v16; // eax
  __int64 v18[2]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v18[0] = 0LL;
  v10 = *a1;
  v11 = AlpcpReceiveSynchronousReply(a1, PreviousMode, v18, 0, 0LL);
  RemoteView = v11;
  if ( !v11 )
  {
    if ( a4 )
    {
      LODWORD(v20) = 0;
      RemoteView = AlpcpQueryRemoteView(v10, a4, v19);
      if ( RemoteView < 0 )
      {
LABEL_16:
        AlpcpUnlockMessage(v18[0]);
        return (unsigned int)RemoteView;
      }
      *(_QWORD *)(a5 + 40) = v20;
    }
    if ( a6 )
    {
      v13 = *(_QWORD *)(v18[0] + 144);
      if ( v13 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 40LL);
      }
    }
    if ( a2 )
    {
      v14 = 0;
      v15 = (_WORD *)(v18[0] + 240);
      v18[1] = v18[0] + 240;
      v16 = *(unsigned __int16 *)(v18[0] + 240);
      if ( *(_DWORD *)a3 < v16 )
      {
        v14 = *(_WORD *)(v18[0] + 240);
        *v15 = *a3;
      }
      else
      {
        *(_DWORD *)a3 = v16;
      }
      if ( *(_QWORD *)(v18[0] + 176) )
        AlpcpGetDataFromUserVaSafe(v18[0], a2);
      else
        AlpcpReadMessageData(v18[0], a2);
      if ( v14 )
        *v15 = v14;
    }
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v10 + 416) & 0x10) != 0 || v11 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)RemoteView;
}
