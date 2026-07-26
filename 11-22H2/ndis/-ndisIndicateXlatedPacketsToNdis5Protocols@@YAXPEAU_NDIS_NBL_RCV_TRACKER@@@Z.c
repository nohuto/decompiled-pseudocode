/*
 * XREFs of ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C93E4
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0011EB0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032490 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009E310 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A9F54 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00AAC30 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C0073400 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z @ 0x1C0073904 (-ndisXlateReturnPacketToNetBufferList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisIndicateXlatedPacketsToNdis5Protocols(struct _NDIS_NBL_RCV_TRACKER *a1)
{
  __int64 v1; // rax
  struct _NDIS_NBL_RCV_TRACKER *v2; // rbx
  KIRQL v3; // di
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // al
  __int64 v9; // r15
  char v10; // r13
  struct _NDIS_PACKET **v11; // r14
  char v12; // [rsp+20h] [rbp-E0h]
  unsigned int v13; // [rsp+24h] [rbp-DCh]
  __int128 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h]
  __int128 v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  struct _NDIS_NBL_RCV_TRACKER *v18; // [rsp+60h] [rbp-A0h]
  _BYTE v19[256]; // [rsp+70h] [rbp-90h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = a1;
  v18 = a1;
  v17 = v1;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  memset(v19, 0, sizeof(v19));
  v13 = *((_DWORD *)v2 + 172);
  if ( (*((_DWORD *)v2 + 4) & 1) != 0 )
  {
    v12 = 1;
    v3 = 2;
  }
  else
  {
    v12 = 0;
    v3 = KfRaiseIrql(2u);
  }
  v4 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)v2 + 1) + 328LL);
  if ( v5 && *(_DWORD *)(v5 + 608) < 6u )
  {
    if ( (*((_DWORD *)v2 + 4) & 2) == 0 )
      goto LABEL_10;
  }
  else
  {
    *((_BYTE *)v2 + 692) = 1;
  }
  HIDWORD(v14) = -1073741670;
  do
  {
LABEL_10:
    v6 = 5 * v4;
    v4 = (unsigned int)(v4 + 1);
    *(_QWORD *)&v15 = *((_QWORD *)v2 + v6 + 8);
    if ( (_QWORD)v15 )
    {
      *((_QWORD *)&v15 + 1) = 0LL;
      v7 = v17;
      LODWORD(v16) = 0;
      *(_QWORD *)&v14 = v19;
      *((_QWORD *)&v16 + 1) = v17;
      DWORD2(v14) = 32;
      do
      {
        v8 = ndisXlateRecvNetBufferListsToPacketArray((struct _NDIS_NBLS_TO_PKT_ARRAY *)&v14);
        v9 = (unsigned int)v16;
        v10 = v8;
        v11 = (struct _NDIS_PACKET **)v14;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 3392))(v7, v14, (unsigned int)v16);
        if ( HIDWORD(v14) == -1073741670 && (_DWORD)v9 )
        {
          do
          {
            ndisXlateReturnPacketToNetBufferList(*v11++);
            --v9;
          }
          while ( v9 );
        }
      }
      while ( v10 == 1 );
      v2 = v18;
      HIDWORD(v14) = -1073741670;
    }
  }
  while ( (unsigned int)v4 <= v13 );
  if ( !v12 && v3 != 2 )
    KeLowerIrql(v3);
}
