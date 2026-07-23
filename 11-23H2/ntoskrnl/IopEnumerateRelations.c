/*
 * XREFs of IopEnumerateRelations @ 0x1408685D0
 * Callers:
 *     PiRestartRemovalRelations @ 0x140863A1C (PiRestartRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408680A4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x140868228 (PiEventBuildPdoList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140868368 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140868480 (PnpCompileDeviceInstancePaths.c)
 *     PnpInvalidateRelationsInList @ 0x140881708 (PnpInvalidateRelationsInList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1408832B0 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140883F20 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x1409579DC (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpTrackQueryRemoveDevices @ 0x140964C6C (PnpTrackQueryRemoveDevices.c)
 *     IopCheckIfMergeRequired @ 0x14096CB2C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x140872548 (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(unsigned int **a1, int *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  bool v5; // r11
  int v6; // edi
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  int v12; // ecx

  v5 = 0;
  v6 = (int)a3;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v9 = *a2;
  if ( !*a2 || *((_BYTE *)a1 + 8) )
  {
    v10 = a2[1];
    v11 = **a1;
    if ( v10 < v11 )
    {
      if ( v9 )
      {
        v12 = v9 - 1;
        if ( v12 )
        {
          if ( v12 != 1 )
            return v5;
          v10 = v11 + ~v10;
        }
      }
      v5 = (int)PipDeviceObjectListElementAt((unsigned int)*a1, v10, v6, (_DWORD)a4, (__int64)a5) >= 0;
      ++a2[1];
    }
  }
  return v5;
}
