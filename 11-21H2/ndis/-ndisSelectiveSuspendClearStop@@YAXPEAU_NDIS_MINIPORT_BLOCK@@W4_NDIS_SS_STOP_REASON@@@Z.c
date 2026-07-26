/*
 * XREFs of ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A7B9C
 * Callers:
 *     ?ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0014340 (-ndisPowerSaveClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0030784 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0054594 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0054BD8 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C005B440 (NdisWdfPnpPowerEventHandler.c)
 *     NdisWdfMiniportSetPower @ 0x1C00881F0 (NdisWdfMiniportSetPower.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01075AC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013A96C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A8284 (-ndisSetIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisSelectiveSuspendClearStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  int v4; // ebp
  KIRQL v6; // r14
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  int v16; // eax

  SelectiveSuspend = a1->SelectiveSuspend;
  v4 = a1->Flags & 0x80;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x22u,
      (struct _GUID *)&WPP_197eb4ab19783370fa11e732ea3b5a2d_Traceguids,
      (char)a1,
      a2);
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 3;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 2;
              if ( v13 )
              {
                if ( v13 == 2 )
                {
                  v14 = *((_DWORD *)SelectiveSuspend + 127);
                  if ( (v14 & 0x1000) == 0 )
                    NT_ASSERT("SS->StopFlags.BindChanges");
                  v15 = *((_DWORD *)SelectiveSuspend + 135);
                  if ( v15 <= 0 )
                    NT_ASSERT("SS->PendingBindChangesCount > 0");
                  v16 = v15 - 1;
                  *((_DWORD *)SelectiveSuspend + 135) = v16;
                  if ( !v16 )
                    *((_DWORD *)SelectiveSuspend + 127) = v14 & 0xFFFFEFFF;
                }
              }
              else
              {
                *((_DWORD *)SelectiveSuspend + 127) &= ~0x400u;
              }
            }
            else
            {
              *((_DWORD *)SelectiveSuspend + 127) &= ~0x100u;
            }
          }
          else if ( (*((_DWORD *)SelectiveSuspend + 134))-- == 1 )
          {
            *((_DWORD *)SelectiveSuspend + 127) &= ~0x80u;
          }
        }
        else
        {
          *((_DWORD *)SelectiveSuspend + 127) &= ~0x40u;
        }
      }
      else
      {
        *((_DWORD *)SelectiveSuspend + 127) &= ~0x20u;
      }
    }
    else
    {
      *((_DWORD *)SelectiveSuspend + 127) &= ~8u;
    }
  }
  else
  {
    *((_DWORD *)SelectiveSuspend + 127) &= ~1u;
  }
  if ( v4 )
  {
    if ( !*((_DWORD *)SelectiveSuspend + 128)
      && !*((_DWORD *)SelectiveSuspend + 129)
      && !*((_DWORD *)SelectiveSuspend + 132)
      && !*((_DWORD *)SelectiveSuspend + 133)
      && !*((_DWORD *)SelectiveSuspend + 130)
      && !*((_DWORD *)SelectiveSuspend + 131)
      && !*((_DWORD *)SelectiveSuspend + 144)
      && !*((_DWORD *)SelectiveSuspend + 127) )
    {
      a1->DriverHandle->CxBlock->Chars.EvtCxPowerDereference(a1->MiniportAdapterContext);
    }
    goto LABEL_35;
  }
  if ( *((_DWORD *)SelectiveSuspend + 127) )
  {
LABEL_35:
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
    return;
  }
  *((_DWORD *)SelectiveSuspend + 126) &= ~0x200u;
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v6);
  ndisSetIdleTimer(a1);
}
