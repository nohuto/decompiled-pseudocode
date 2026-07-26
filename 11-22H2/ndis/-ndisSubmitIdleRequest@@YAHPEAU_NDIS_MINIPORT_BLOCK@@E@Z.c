/*
 * XREFs of ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00AEA38
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0059B4C (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00ADA90 (-ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0020E6C (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00217BC (WPP_RECORDER_SF_Lq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C003DA16 (McTemplateK0qq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_ql @ 0x1C0060DBC (WPP_RECORDER_SF_ql_ea_1C0060DBC.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00ABCEC (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00ACD7C (-ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AD2C8 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AE924 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  char v3; // bp
  int v4; // r14d
  KIRQL v7; // r15
  int v8; // r12d
  __int64 v9; // rdx
  unsigned int v10; // r14d
  unsigned int *v11; // rcx
  KIRQL v12; // al
  int v13; // r8d
  KIRQL v14; // bl
  unsigned int *v15; // rcx
  bool v16; // bl
  struct _GUID *v17; // [rsp+20h] [rbp-48h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v3 = 0;
  v4 = a2;
  if ( a2 || (a1->PMHardwareCapabilities.Flags & 4) == 0 || ndisShouldEngageNicAutoPowerSaver(a1) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x404) != 0 || !ndisReferenceMiniport(a1, 0x15u) )
    {
      v16 = (*((_DWORD *)SelectiveSuspend + 126) & 4) != 0;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
      return v16 ? 259 : -1073676271;
    }
    else
    {
      v8 = v4;
      *((_DWORD *)SelectiveSuspend + 126) = *((_DWORD *)SelectiveSuspend + 126) ^ (*((_DWORD *)SelectiveSuspend + 126) ^ (v4 << 8)) & 0x100 | 4;
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 200));
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 224));
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
      ndisLogMiniportEvent(a1, NdisMEvent_SSIdleReq);
      LOBYTE(v9) = v4;
      v10 = a1->DriverHandle->IdleNotificationHandler(a1->MiniportAdapterContext, v9);
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 224), 0, 0);
      if ( v10 == 259 )
      {
        v15 = &WPP_RECORDER_INITIALIZED;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xFu,
            0xEu,
            (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
            (char)a1,
            v8);
        if ( (byte_1C00F7641 & 8) != 0 )
          McTemplateK0q_EtwWriteTransfer(
            (__int64)v15,
            &SSIdleDetected,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF);
        ndisClearIdleTimer(a1);
        return 259LL;
      }
      else
      {
        v11 = &WPP_RECORDER_INITIALIZED;
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xFu,
            0xDu,
            (struct _GUID *)&WPP_64b9953f987037c4a892513bd407e9c6_Traceguids,
            v10,
            a1);
        if ( (byte_1C00F7641 & 8) != 0 )
        {
          LODWORD(v17) = v10;
          McTemplateK0qq_EtwWriteTransfer(
            (__int64)v11,
            &SSIdleDeclined,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF,
            (__int64)v17);
        }
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        v13 = *((_DWORD *)SelectiveSuspend + 126);
        v14 = v12;
        *((_DWORD *)SelectiveSuspend + 126) = v13 & 0xFFFFFEFF;
        if ( (v13 & 4) != 0 )
        {
          *((_DWORD *)SelectiveSuspend + 126) = v13 & 0xFFFFFEFB;
          KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 200), 0, 0);
          *((_DWORD *)SelectiveSuspend + 126) &= ~0x80u;
          v3 = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v14);
        if ( v3 )
          ndisDereferenceMiniport(a1, 0x15u);
        return v10;
      }
    }
  }
  else
  {
    ndisNicAutoPowerSaverControlIdleTimer(a1);
    return 3221291025LL;
  }
}
