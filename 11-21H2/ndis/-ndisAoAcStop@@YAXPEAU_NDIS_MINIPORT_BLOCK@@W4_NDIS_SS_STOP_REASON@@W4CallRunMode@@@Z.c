/*
 * XREFs of ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x1C0052FBC
 * Callers:
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0013CD0 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01075AC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00200E8 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00526A0 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005275C (-ndisAoAcCleanup@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0052990 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0054BD8 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C5A8 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisAoAcStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2, enum CallRunMode a3)
{
  __int64 AoAc; // rbx
  KIRQL v7; // al
  int v8; // r9d
  KIRQL v9; // bp
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // eax
  char v18; // bl

  AoAc = (__int64)a1->AoAc;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  v8 = 1;
  v9 = v7;
  if ( a2 > 6 )
  {
    v14 = a2 - 8;
    if ( v14 )
    {
      v15 = v14 - 3;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
          {
            ++*(_DWORD *)(AoAc + 60);
            *(_DWORD *)(AoAc + 380) |= 0x1000u;
          }
        }
        else
        {
          *(_DWORD *)(AoAc + 380) |= 0x800u;
        }
      }
      else
      {
        *(_DWORD *)(AoAc + 380) |= 0x400u;
      }
    }
    else
    {
      ++*(_DWORD *)(AoAc + 56);
      *(_DWORD *)(AoAc + 380) |= 0x80u;
    }
  }
  else
  {
    if ( a2 == 6 )
    {
      *(_DWORD *)(AoAc + 380) |= 0x20u;
      goto LABEL_23;
    }
    v10 = a2 - 1;
    if ( !v10 )
    {
      *(_DWORD *)(AoAc + 380) |= 1u;
      goto LABEL_23;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      *(_DWORD *)(AoAc + 380) |= 2u;
      goto LABEL_12;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      *(_DWORD *)(AoAc + 380) |= 4u;
      *(_BYTE *)(AoAc + 387) = 1;
      goto LABEL_12;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *(_DWORD *)(AoAc + 380) |= 0x10u;
LABEL_12:
        ndisAoAcCleanup((struct _NDIS_MINIPORT_AOAC *)AoAc);
      }
    }
    else
    {
      *(_DWORD *)(AoAc + 380) |= 8u;
    }
  }
LABEL_23:
  if ( *(_DWORD *)(AoAc + 64) )
  {
    *(_DWORD *)(AoAc + 64) = 0;
    ndisAoAcActiveRefSubtract(AoAc, 0, v8);
    if ( KeCancelTimer((PKTIMER)(AoAc + 72)) )
      ndisDereferenceMiniport(a1, 2u);
  }
  if ( *(_DWORD *)(AoAc + 376) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v9);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x29u,
        (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
        a1);
    ndisCancelWaitWake(a1);
    v17 = ndisRequestNicActive(a1, a3);
    v18 = v17;
    if ( v17 && v17 != 259 )
    {
      ndisAoAcCompleteQueuedIrps(a1, v17);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x2Au,
          (struct _GUID *)WPP_1cdba23956c23e7115893e836b18f005_Traceguids,
          v18,
          a1);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v9);
  }
}
