/*
 * XREFs of ?ExtractHandle@HandleSendReceiveServer@@AEAAJAEBQEAU_AE_API_MSG@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@PEAPEAX@Z @ 0x140022C44
 * Callers:
 *     ?AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ @ 0x140022A18 (-AeServerApiLoop@HandleSendReceiveServer@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HandleSendReceiveServer::ExtractHandle(
        HandleSendReceiveServer *this,
        struct _AE_API_MSG *const *a2,
        struct _ALPC_MESSAGE_ATTRIBUTES *a3,
        void **a4)
{
  __int64 v4; // rbp
  int v5; // ebx
  void *v6; // rdi
  __int64 MessageAttribute; // rax

  v4 = (__int64)*a2;
  v5 = 0;
  v6 = 0LL;
  if ( (*((_DWORD *)a3 + 1) & 0x10000000) != 0 )
  {
    MessageAttribute = AlpcGetMessageAttribute(a3, 0x10000000LL);
    if ( MessageAttribute )
    {
      v6 = *(void **)(MessageAttribute + 8);
    }
    else
    {
      v5 = -1073741816;
      *(_DWORD *)(v4 + 44) = -1073741816;
    }
    if ( v5 >= 0 )
    {
      if ( a4 )
        _InterlockedExchange64((volatile __int64 *)a4, (__int64)v6);
      else
        NtClose(v6);
    }
  }
  else
  {
    v5 = -1073741649;
    *(_DWORD *)(v4 + 44) = -1073741649;
  }
  return (unsigned int)v5;
}
