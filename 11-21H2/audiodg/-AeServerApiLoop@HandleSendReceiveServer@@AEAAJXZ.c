/*
 * XREFs of ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140028998
 * Callers:
 *     ?AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z @ 0x140028980 (-AeServerApiProc@HandleSendReceiveServer@@CAKPEAX@Z.c)
 * Callees:
 *     ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x140028BC4 (-ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@P.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     ?ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z @ 0x14006EAFC (-ValidateStopListening@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiLoop(HandleSendReceiveServer *this)
{
  __int64 result; // rax
  _BYTE *v3; // rdi
  void *v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  char v7; // cl
  unsigned __int64 v8; // rcx
  void **v9; // r9
  int v10; // eax
  int v11; // [rsp+40h] [rbp-C0h]
  struct _AE_API_MSG *v12; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v15[2]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v16; // [rsp+6Ah] [rbp-96h]
  __int16 v17; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v18; // [rsp+70h] [rbp-90h]
  int v19; // [rsp+90h] [rbp-70h]
  int v20; // [rsp+94h] [rbp-6Ch]
  _BYTE v21[8]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v22[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+E0h] [rbp-20h]
  _BYTE v25[64]; // [rsp+F0h] [rbp-10h] BYREF

  result = AlpcInitializeMessageAttribute(805306368LL, v25, 64LL, v21);
  if ( (int)result >= 0 )
  {
    AlpcGetMessageAttribute(v25, 0x20000000LL);
    v3 = 0LL;
    memset_0(v22, 0, 0x48uLL);
    v23 = 48LL;
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 14, 1, 1) )
            return 0LL;
          v5 = *((_QWORD *)this + 1);
          v13 = 48LL;
          v6 = NtAlpcSendWaitReceivePort(
                 v5,
                 0x10000LL,
                 v3,
                 0LL,
                 v15,
                 &v13,
                 v25,
                 &HandleSendReceiveServer::AeServerApiThreadTimeout);
          if ( v6 >= 0 )
            break;
LABEL_6:
          v3 = 0LL;
        }
      }
      while ( v6 == 258 );
      if ( (unsigned __int8)v17 != 1 )
      {
        if ( (unsigned __int8)v17 != 3 )
        {
          if ( (unsigned __int8)v17 == 5 )
          {
            v4 = (void *)*((_QWORD *)this + 3);
            if ( v4 )
            {
              NtClose(v4);
              *((_QWORD *)this + 3) = 0LL;
            }
            _InterlockedExchange((volatile __int32 *)this + 14, 1);
          }
          else
          {
            v7 = v17 - 10;
            if ( (unsigned __int8)v17 == 10 )
            {
              v22[0] = 0;
              v24 = 0;
              if ( v18 <= 0xFFFFFFFF && (_DWORD)v18 == *((_DWORD *)this + 4) )
              {
                v7 = 1;
                v22[0] = 0x80000;
                v24 = 16;
              }
              LOBYTE(v11) = v7;
              NtAlpcAcceptConnectPort(&v14, *((_QWORD *)this + 1), 0LL, 0LL, v22, 0LL, v15, v25, v11);
              *((_QWORD *)this + 3) = v14;
              *((_BYTE *)this + 60) = 1;
            }
          }
        }
        goto LABEL_6;
      }
      v12 = (struct _AE_API_MSG *)v15;
      if ( v16 != 48 )
        goto LABEL_25;
      v8 = (unsigned int)(v19 - 1);
      if ( v19 == 1 )
      {
        v9 = (void **)*((_QWORD *)this + 4);
LABEL_21:
        v10 = HandleSendReceiveServer::ExtractHandle(
                (HandleSendReceiveServer *)v8,
                &v12,
                (struct _ALPC_MESSAGE_ATTRIBUTES *)v25,
                v9);
        goto LABEL_22;
      }
      v8 = (unsigned int)(v19 - 2);
      if ( v19 != 2 )
        break;
      v10 = HandleSendReceiveServer::ValidateStopListening(this, &v12);
LABEL_22:
      v20 = v10;
      v3 = v15;
    }
    if ( v19 == 3 )
    {
      v9 = (void **)*((_QWORD *)this + 5);
      goto LABEL_21;
    }
LABEL_25:
    v10 = -1073741649;
    goto LABEL_22;
  }
  return result;
}
