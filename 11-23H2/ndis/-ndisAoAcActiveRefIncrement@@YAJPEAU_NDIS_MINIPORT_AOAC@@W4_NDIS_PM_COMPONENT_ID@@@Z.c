/*
 * XREFs of ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0057998
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C0006720 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0057B9C (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00580C0 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0058198 (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00585CC (-ndisAoAcTakeInternalRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0058780 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00594D4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     ?ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C005815C (-ndisAoAcPauseRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 */

__int64 __fastcall ndisAoAcActiveRefIncrement(__int64 a1, int a2)
{
  unsigned int v3; // r10d
  __int64 v4; // r9
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx

  ++*(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 388) |= 2u;
  v3 = *(_DWORD *)(a1 + 52);
  v4 = a2;
  v5 = a2;
  v6 = *(_DWORD *)(a1 + 4LL * a2 + 468) + 1;
  *(_DWORD *)(a1 + 4LL * a2 + 468) = v6;
  if ( *(_BYTE *)(a1 + 1073) && v6 == 1 )
  {
    if ( a2 != 15 || ndisPowerRefManagementState )
    {
      if ( !*(_DWORD *)(a1 + 528) || ndisPowerRefManagementState == 1 )
      {
        v8 = *(_DWORD *)(a1 + 376);
        if ( !v8 || v8 == 3 )
        {
          v9 = MEMORY[0xFFFFF78000000008];
          if ( (_DWORD)v4 )
          {
            if ( *(int *)(a1 + 468) > 0 && *(_QWORD *)(a1 + 544) )
            {
              *(_QWORD *)(a1 + 536) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 544);
              *(_QWORD *)(a1 + 544) = 0LL;
            }
            *(_QWORD *)(a1 + 16 * (v5 + 34)) = v9;
          }
          else if ( v3 == 1 )
          {
            *(_QWORD *)(a1 + 16 * (v4 + 34)) = MEMORY[0xFFFFF78000000008];
          }
        }
      }
    }
    else
    {
      ndisAoAcPauseRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
      *(_QWORD *)(v7 + 784) = MEMORY[0xFFFFF78000000008];
    }
  }
  return v3;
}
