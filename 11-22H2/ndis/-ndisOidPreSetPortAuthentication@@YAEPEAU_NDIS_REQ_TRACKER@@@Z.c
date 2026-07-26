/*
 * XREFs of ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00A36E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisMIndicateStatusEx @ 0x1C001A280 (NdisMIndicateStatusEx.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00210F4 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     memset @ 0x1C0038580 (memset.c)
 */

char __fastcall ndisOidPreSetPortAuthentication(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char v4; // r12
  _DWORD *v5; // r15
  __int64 v6; // rsi
  unsigned __int8 v7; // r8
  KIRQL v8; // dl
  __int64 v10; // [rsp+30h] [rbp-99h]
  KIRQL NewIrql[16]; // [rsp+40h] [rbp-89h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-79h] BYREF
  __int128 v13; // [rsp+C0h] [rbp-9h] BYREF
  __int128 v14; // [rsp+D0h] [rbp+7h]
  __int128 v15; // [rsp+E0h] [rbp+17h]

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  v4 = 0;
  NewIrql[0] = 0;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA2u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      *(_DWORD *)(v2 + 8));
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFFD) != 0 )
    {
      if ( *(_DWORD *)(v2 + 48) >= 0x14u )
      {
        v5 = *(_DWORD **)(v2 + 40);
        if ( !*(_DWORD *)(v2 + 8) )
        {
          if ( (*(_DWORD *)(v1 + 124) & 0x8000000) != 0 )
          {
            v6 = *(_QWORD *)(v1 + 16);
            NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v6, NewIrql);
            if ( (*(_DWORD *)(v6 + 124) & 0x80u) == 0 )
            {
              v7 = NewIrql[0];
              *(_DWORD *)(v6 + 3320) = v5[1];
              *(_DWORD *)(v6 + 3324) = v5[2];
              *(_DWORD *)(v6 + 3328) = v5[3];
              *(_DWORD *)(v6 + 3332) = v5[4];
              ndisIfSetInterfaceState((struct _NDIS_MINIPORT_BLOCK *)v6, 1, v7);
            }
            *(_QWORD *)(v6 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), NewIrql[0]);
          }
          NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, NewIrql);
          v8 = NewIrql[0];
          if ( (*(_DWORD *)(v1 + 124) & 0x80u) != 0 )
          {
            *(_QWORD *)(v1 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v8);
          }
          else
          {
            *(_DWORD *)(v1 + 3320) = v5[1];
            *(_DWORD *)(v1 + 3324) = v5[2];
            *(_DWORD *)(v1 + 3328) = v5[3];
            *(_DWORD *)(v1 + 3332) = v5[4];
            LODWORD(v13) = 3146112;
            DWORD1(v13) = *(_DWORD *)(v1 + 480);
            *((_QWORD *)&v13 + 1) = *(_QWORD *)(v1 + 792);
            *(_QWORD *)&v14 = *(_QWORD *)(v1 + 800);
            DWORD2(v14) = *(_DWORD *)(*(_QWORD *)(v1 + 4040) + 532LL);
            HIDWORD(v14) = *(_DWORD *)(v1 + 3320);
            *(_QWORD *)&v15 = *(_QWORD *)(v1 + 3324);
            DWORD2(v15) = *(_DWORD *)(v1 + 3332);
            *(_QWORD *)(v1 + 520) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v8);
            memset(&StatusIndication, 0, sizeof(StatusIndication));
            StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
            StatusIndication.StatusBuffer = &v13;
            StatusIndication.SourceHandle = (void *)v1;
            StatusIndication.StatusCode = 1073807394;
            StatusIndication.StatusBufferSize = 48;
            NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
            *(_DWORD *)(v2 + 56) = 0;
            v4 = 1;
            *(_DWORD *)(v2 + 52) = 20;
            *((_DWORD *)a1 + 10) = 0;
          }
        }
      }
      else
      {
        *(_DWORD *)(v2 + 52) = 0;
        v4 = 1;
        *(_DWORD *)(v2 + 56) = 20;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 52) = 0;
      v4 = 1;
      *(_DWORD *)(v2 + 56) = 20;
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = *(_DWORD *)(v2 + 8);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA3u,
      (struct _GUID *)&WPP_a9b9344cfcab39cb180cc205462f61f2_Traceguids,
      v1,
      v10);
  }
  return v4;
}
