/*
 * XREFs of ?ndisOidPostPacketFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001A0E0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C001A280 (NdisMIndicateStatusEx.c)
 *     ?ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C001A590 (-ndisPostSetOpenPacketFilter@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C0024EB4 (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

void __fastcall ndisOidPostPacketFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  struct _NDIS_OPEN_BLOCK *v4; // r15
  __int64 v5; // r14
  int v6; // eax
  struct _NDIS_IF_BLOCK *v7; // rcx
  unsigned __int8 v8; // r8
  unsigned __int8 *p_ifPromiscuousMode; // rdx
  int v10; // [rsp+28h] [rbp-59h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+38h] [rbp-49h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  v5 = *((_QWORD *)a1 + 2);
  v10 = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( *(_DWORD *)(v2 + 4) != 1 )
    return;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v2 + 88) & 0x800) != 0 )
    {
      *(_QWORD *)(v2 + 40) = *(_QWORD *)(v1 + 528);
      *(_DWORD *)(v2 + 48) = *(unsigned __int16 *)(v1 + 536);
      *(_QWORD *)(v1 + 528) = 0LL;
      *(_WORD *)(v1 + 536) = 0;
      *(_DWORD *)(v2 + 88) &= ~0x800u;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v6 = *(_DWORD *)(v1 + 1836);
      if ( v6 )
      {
        if ( v6 != 16 )
          goto LABEL_3;
        *(_DWORD *)(*(_QWORD *)(v1 + 600) + 312LL) = **(_DWORD **)(v2 + 40);
        v10 = **(_DWORD **)(v2 + 40);
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(v1 + 400) + 312LL) = **(_DWORD **)(v2 + 40);
        v10 = *(_DWORD *)(*(_QWORD *)(v1 + 400) + 312LL);
        v7 = *(struct _NDIS_IF_BLOCK **)(v1 + 4040);
        v8 = (v10 & 0x20) != 0;
        p_ifPromiscuousMode = &v7->ifPromiscuousMode;
        if ( v7->ifPromiscuousMode != v8 )
        {
          *p_ifPromiscuousMode = v8;
          ndisNsiScheduleIfBlockRodChangeNotification(v7, p_ifPromiscuousMode, 1u, 0x280u);
        }
      }
      StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
      StatusIndication.StatusBuffer = &v10;
      StatusIndication.SourceHandle = (void *)v1;
      StatusIndication.StatusCode = 1073807396;
      StatusIndication.StatusBufferSize = 4;
      NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
    }
  }
LABEL_3:
  if ( v4 )
    ndisPostSetOpenPacketFilter(v4, (struct _NDIS_OID_REQUEST *)v2, *((_DWORD *)a1 + 10));
  if ( !*((_DWORD *)a1 + 10) && v5 && (*(_DWORD *)(v5 + 56) & 0x8000) != 0 )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 400LL) + 312LL) = **(_DWORD **)(v2 + 40);
}
