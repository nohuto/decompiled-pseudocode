/*
 * XREFs of ?ndisMSendNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00C9C10
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0003650 (NdisSendNetBufferLists.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x1C0073B54 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 *     ?ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@Z @ 0x1C00B0FFC (-ndisMSendNetBufferListsCompleteInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KE@.c)
 */

void __fastcall ndisMSendNetBufferListsToPackets(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        int a4)
{
  char v7; // bl
  struct _NET_BUFFER_LIST *Alignment; // rdx
  struct _NET_BUFFER_LIST *v9; // rax
  _BYTE *v10; // [rsp+20h] [rbp-49h] BYREF
  int v11; // [rsp+28h] [rbp-41h]
  int v12; // [rsp+2Ch] [rbp-3Dh]
  struct _NET_BUFFER_LIST *v13; // [rsp+30h] [rbp-39h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+38h] [rbp-31h]
  int v15; // [rsp+40h] [rbp-29h]
  int v16; // [rsp+44h] [rbp-25h]
  struct _NDIS_MINIPORT_BLOCK *v17; // [rsp+48h] [rbp-21h]
  _BYTE v18[80]; // [rsp+50h] [rbp-19h] BYREF

  v12 = 0;
  v15 = 0;
  memset(v18, 0, sizeof(v18));
  v11 = 10;
  v10 = v18;
  FirstNetBuffer = a2->FirstNetBuffer;
  v13 = a2;
  v16 = a4;
  v17 = a1;
  do
  {
    v7 = ndisXlateSendNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v10, 1);
    if ( v15 )
    {
      ((void (__fastcall *)(struct _NDIS_MINIPORT_BLOCK *, _BYTE *))a1->FinalSendPacketsHandler)(a1, v18);
      if ( !v7 )
        break;
    }
  }
  while ( v7 );
  Alignment = v13;
  if ( v13 )
  {
    if ( FirstNetBuffer != v13->FirstNetBuffer )
      Alignment = (struct _NET_BUFFER_LIST *)v13->Link.Alignment;
    if ( Alignment )
    {
      v9 = Alignment;
      do
      {
        v9->Status = -1073741670;
        v9 = (struct _NET_BUFFER_LIST *)v9->Link.Alignment;
      }
      while ( v9 );
      ndisMSendNetBufferListsCompleteInternal(a1, Alignment, a4 & 1);
    }
  }
}
