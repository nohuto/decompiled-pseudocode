/*
 * XREFs of NdisCloseAdapter @ 0x1C013BF70
 * Callers:
 *     NdisCloseAdapterEx @ 0x1C0016C10 (NdisCloseAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BC70 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     ?ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0016FB0 (-ndisCleanUpForProtocol@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C0017174 (-ndisQueueWorkitem@@YAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C001F740 (WPP_RECORDER_SF_qqZZ.c)
 *     PktMonClientComponentUnregister @ 0x1C0020E48 (PktMonClientComponentUnregister.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0jqxz_EtwWriteTransfer @ 0x1C009700C (McTemplateK0jqxz_EtwWriteTransfer.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C0101128 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013C13C (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall NdisCloseAdapter(int *a1, __int64 a2)
{
  KIRQL v4; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned __int8 v12; // dl
  int v13; // eax
  KIRQL v14; // al
  __int64 v15; // rcx
  char v16[8]; // [rsp+30h] [rbp-38h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Cu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v6 = 0;
  while ( NextGlobalOpen && NextGlobalOpen != (struct _NDIS_OPEN_BLOCK *)a2 )
    NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v4);
  if ( NextGlobalOpen )
  {
    v10 = *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)(a2 + 24);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        v9,
        0x1Du,
        (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
        v10,
        a2,
        (unsigned __int16 *)(v11 + 72),
        *(unsigned __int16 **)(v10 + 3856));
    if ( (byte_1C00EE581 & 2) != 0 )
      McTemplateK0jqxz_EtwWriteTransfer(
        v8,
        v7,
        (const GUID *)(v10 + 4008),
        v10 + 4008,
        *(_DWORD *)(v10 + 4056),
        *(_QWORD *)(v10 + 4024),
        *(const wchar_t **)(v11 + 80));
    PktMonClientComponentUnregister((__int64 *)(a2 + 920));
    if ( *(_BYTE *)(v11 + 56) < 6u )
    {
      if ( !*(_BYTE *)(a2 + 904)
        || *(struct NDIS_BIND_LINK_BASE **)(a2 + 856) != Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v10 + 5112)) )
      {
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 232));
        *(_DWORD *)(a2 + 224) |= 0x40000000u;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 232), v14);
        ndisQueueWorkitem((struct _WORK_QUEUE_ITEM *)(a2 + 864));
LABEL_16:
        v13 = 259;
LABEL_17:
        *a1 = v13;
        v6 = v13;
        goto LABEL_18;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 65) = 0;
      if ( *(struct _KTHREAD **)(v11 + 416) != KeGetCurrentThread() )
      {
        v13 = -1073741823;
        goto LABEL_17;
      }
    }
    *(_BYTE *)(a2 + 904) = 0;
    if ( (*(_DWORD *)(v10 + 124) & 0x2000) != 0 )
    {
      v15 = *(_QWORD *)(v10 + 3984);
      if ( v15 )
        (*(void (__fastcall **)(_QWORD))(v15 + 40))(*(_QWORD *)(v15 + 8));
    }
    ndisCleanUpForProtocol((struct _NDIS_OPEN_BLOCK *)a2, v12);
    ndisMKillOpen((struct _NDIS_OPEN_BLOCK *)a2);
    goto LABEL_16;
  }
  *a1 = 0;
LABEL_18:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v16 = v6;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Eu,
      (struct _GUID *)&WPP_2fca99124a243983c47039c87b76db5a_Traceguids,
      a2,
      *(_QWORD *)v16);
  }
}
