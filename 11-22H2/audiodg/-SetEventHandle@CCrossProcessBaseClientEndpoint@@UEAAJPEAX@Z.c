/*
 * XREFs of ?SetEventHandle@CCrossProcessBaseClientEndpoint@@UEAAJPEAX@Z @ 0x140096050
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x14007B590 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x14007B5C8 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x14007B624 (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x140095200 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140096990 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::SetEventHandle(CCrossProcessBaseClientEndpoint *this, void *a2)
{
  int v2; // esi
  int v5; // ebx
  void **v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r9
  signed int v9; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 112) )
    goto LABEL_2;
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v5 = -2147024809;
    goto LABEL_20;
  }
  if ( (*((_DWORD *)this + 44) & 0x40000) == 0 || *((_QWORD *)this + 10) == -4LL )
  {
LABEL_2:
    v5 = -2147418113;
  }
  else
  {
    v6 = (void **)operator new(0x10uLL);
    v6[1] = 0LL;
    *v6 = &HandleSendReceiveClient::`vftable';
    v5 = HandleSendReceiveClient::Initialize(v6, (unsigned __int16 *)(*((_QWORD *)this + 10) + 4LL));
    if ( v5 >= 0 )
    {
      v9 = HandleSendReceiveClient::SendHandle((HandleSendReceiveClient *)v6, v7, a2, v8);
      v5 = v9;
      if ( v9 == -2147023537 )
      {
        v5 = -2004287484;
      }
      else if ( v9 >= 0 )
      {
        *((_DWORD *)this + 112) = 1;
      }
      v2 = HandleSendReceiveClient::CloseConnection((HandleSendReceiveClient *)v6);
    }
    if ( v5 == -2147023537 )
    {
      v5 = -2004287484;
    }
    else if ( v5 >= 0 && v2 < 0 )
    {
      v5 = v2;
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::SetEventHandle", 0x1B1u, v2);
    }
    if ( v6 )
      HandleSendReceiveClient::`vector deleting destructor'((HandleSendReceiveClient *)v6, 1);
  }
LABEL_20:
  memset_0((void *)(*((_QWORD *)this + 10) + 4LL), 0, 0x80uLL);
  return (unsigned int)v5;
}
