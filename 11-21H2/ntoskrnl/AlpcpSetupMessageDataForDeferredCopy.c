/*
 * XREFs of AlpcpSetupMessageDataForDeferredCopy @ 0x140666C9C
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140665B68 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140668084 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     AlpcpCaptureMessageData @ 0x1407A7B98 (AlpcpCaptureMessageData.c)
 *     AlpcpAvailableBufferSize @ 0x1407A7C84 (AlpcpAvailableBufferSize.c)
 */

__int64 __fastcall AlpcpSetupMessageDataForDeferredCopy(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4,
        char a5,
        char a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  unsigned int v9; // r10d

  if ( !a5 )
  {
    if ( (a3 & 0xC0000000) == 0x80000000 )
      a2 += 24LL;
    else
      a2 += 40LL;
  }
  if ( a6 && (unsigned __int64)a4 + a2 > 0x7FFFFFFF0000LL )
    return 3221225477LL;
  *(_QWORD *)(a1 + 176) = a2;
  v6 = AlpcpAvailableBufferSize(a1, a2);
  if ( v8 > v6 )
    return (unsigned int)AlpcpCaptureMessageData(v7, v8, 0LL);
  return v9;
}
