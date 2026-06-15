/*
 * XREFs of ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14009F420
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1400280E4 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ?CloseConnection@HandleSendReceiveClient@@QEAAJXZ @ 0x14007B540 (-CloseConnection@HandleSendReceiveClient@@QEAAJXZ.c)
 *     ?Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z @ 0x14007B578 (-Initialize@HandleSendReceiveClient@@QEAAJPEAG@Z.c)
 *     ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x14007B5D4 (-SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z.c)
 *     ??_EHandleSendReceiveClient@@UEAAPEAXI@Z @ 0x1400951B0 (--_EHandleSendReceiveClient@@UEAAPEAXI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14009C968 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientEndpoint::SetEventHandle(
        CSpatialCrossProcessClientEndpoint *this,
        void *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // r15d
  unsigned int v7; // ebx
  void **v8; // rsi
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // r9
  signed int v12; // eax

  v6 = 0;
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessClientEndpoint::SetEventHandle", 45, a3, a4);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 64LL), 0, 0) & 0x20) != 0
    || *((_BYTE *)this + 1376) )
  {
    goto LABEL_18;
  }
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v7 = -2147024809;
    goto LABEL_19;
  }
  if ( !*((_WORD *)this + 78) )
  {
LABEL_18:
    v7 = -2147418113;
    goto LABEL_19;
  }
  v8 = (void **)operator new(0x10uLL);
  *v8 = &HandleSendReceiveClient::`vftable';
  v8[1] = 0LL;
  v10 = HandleSendReceiveClient::Initialize(v8, (unsigned __int16 *)this + 78);
  v7 = -2004287484;
  if ( v10 >= 0 )
  {
    v12 = HandleSendReceiveClient::SendHandle((HandleSendReceiveClient *)v8, v9, a2, v11);
    v10 = v12;
    if ( v12 == -2147023537 )
    {
      v10 = -2004287484;
    }
    else if ( v12 >= 0 )
    {
      *((_BYTE *)this + 1376) = 1;
    }
    v6 = HandleSendReceiveClient::CloseConnection((HandleSendReceiveClient *)v8);
  }
  if ( v10 != -2147023537 )
  {
    v7 = v10;
    if ( v10 >= 0 && v6 < 0 )
    {
      v7 = v6;
      SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessClientEndpoint::SetEventHandle", 93, (unsigned int)v6, v11);
    }
  }
  if ( v8 )
    HandleSendReceiveClient::`vector deleting destructor'((HandleSendReceiveClient *)v8, 1);
LABEL_19:
  memset_0((char *)this + 156, 0, 0x80uLL);
  return v7;
}
