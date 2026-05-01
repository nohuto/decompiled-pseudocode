/*
 * XREFs of ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001474C
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180014698 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180013ACC (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18004FBF0 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z.c)
 *     ?HampSystemJobIoAttributionStop@@YAXPEAX@Z @ 0x18008E67C (-HampSystemJobIoAttributionStop@@YAXPEAX@Z.c)
 */

void __fastcall HampActSystemResourceCleanup(struct _HAM_ACTIVITY *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rdx
  void *v4; // rcx
  unsigned int v5; // edx
  int v6; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx

  v1 = *((_QWORD *)a1 + 11);
  v3 = *(_QWORD *)(v1 + 16);
  if ( v3 != -1LL )
  {
    RmSrvResourceSetReleaseResources(a1, v3);
    *(_QWORD *)(v1 + 16) = -1LL;
  }
  v4 = (void *)*((_QWORD *)a1 + 63);
  if ( v4 )
  {
    HampSystemActivationClientDeactivate(v4);
    *((_QWORD *)a1 + 63) = 0LL;
  }
  HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
  v6 = *((_DWORD *)a1 + 138);
  if ( (v6 & 0x80u) != 0 )
  {
    v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 138) = v6 & 0xFFFFFF7F;
    HampHostReleaseLockExclusiveEx(v7, v5);
    HampSystemJobIoAttributionStop(*(HANDLE *)(*((_QWORD *)a1 + 10) + 576LL));
    HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
  }
  HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), v5);
}
