/*
 * XREFs of ?SendStopListeningMessage@HandleSendReceiveServer@@AEAAJXZ @ 0x14007B664
 * Callers:
 *     ??1HandleSendReceiveServer@@UEAA@XZ @ 0x14007B2E4 (--1HandleSendReceiveServer@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HandleSendReceiveServer::SendStopListeningMessage(HandleSendReceiveServer *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  signed int LastError; // eax
  _DWORD v6[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v7; // [rsp+60h] [rbp-18h]
  __int64 v8; // [rsp+80h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  memset(v6, 0, sizeof(v6));
  v6[0] = 3145736;
  v7 = 0LL;
  DWORD2(v7) = 2;
  if ( v1 )
  {
    v8 = 48LL;
    v3 = NtAlpcSendWaitReceivePort(v1, 0x20000LL, v6, 0LL, v6, &v8, 0LL, 0LL);
    if ( v3 < 0 )
    {
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v3);
      LastError = GetLastError();
      if ( LastError > 0 )
        return (unsigned __int16)LastError | 0x80070000;
      else
        return (unsigned int)LastError;
    }
  }
  return v2;
}
