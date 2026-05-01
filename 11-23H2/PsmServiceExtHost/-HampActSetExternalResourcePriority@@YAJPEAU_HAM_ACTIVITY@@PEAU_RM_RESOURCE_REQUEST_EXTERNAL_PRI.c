/*
 * XREFs of ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007BAD8
 * Callers:
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800736B8 (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006EDF4 (-HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180084828 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 */

__int64 __fastcall HampActSetExternalResourcePriority(
        struct _HAM_ACTIVITY *a1,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a2)
{
  int *v4; // rsi
  int v5; // eax
  signed int v6; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int64 v10; // rdx
  struct _RM_SERVICE_GLOBALS *v11; // rcx
  unsigned int v12; // r8d
  int v13; // ebx
  int v14; // ebp
  ULONG v15; // edx
  unsigned __int64 v16; // rcx
  int v17; // ebx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+40h] [rbp-18h]

  HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
  v4 = (int *)((char *)a1 + 552);
  v5 = *((_DWORD *)a1 + 138);
  if ( (v5 & 1) != 0 )
  {
    v6 = -1073740682;
  }
  else if ( *((_BYTE *)a1 + 562) == 4 )
  {
    v6 = -1073741275;
  }
  else if ( (v5 & 8) != 0 )
  {
    v6 = -1058275327;
  }
  else
  {
    v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
    *v4 = v5 | 1;
    HampHostReleaseLockExclusiveEx(v7);
    v8 = *((_QWORD *)a1 + 11);
    v21 = 0LL;
    v9 = *(unsigned __int8 *)a2;
    v10 = *(_QWORD *)(v8 + 16);
    v20 = 0LL;
    LODWORD(v20) = v9;
    LODWORD(v21) = *((unsigned __int8 *)a2 + 1);
    v13 = RmSrvResourceSetExternalResourcePriorities(v11, v10, v12, (struct ExecutionModel::_ResourceInfo *)&v20);
    if ( v13 >= 0 )
      v6 = 0;
    else
      v6 = v13 | 0xC0000000;
    HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
    *v4 &= ~1u;
    if ( v6 >= 0 )
    {
      RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 124, 0x2Fu);
      v14 = *(unsigned __int8 *)a2;
      v15 = v14 - 3;
      v16 = (unsigned int)(v14 - 3);
      if ( *((_BYTE *)a2 + 1) >= 0x65u )
      {
        v17 = _bittest64((const signed __int64 *)BitMapHeader.Buffer, v16);
        RtlClearBit(&BitMapHeader, v15);
      }
      else
      {
        v17 = !_bittest64((const signed __int64 *)BitMapHeader.Buffer, v16);
        RtlSetBit(&BitMapHeader, v15);
      }
      if ( v17 && v14 == 27 )
        HampHostCheckQueueInterruptiveUIChangeWorker(*((struct _HAM_APPLICATION ***)a1 + 10));
      v6 = 0;
    }
  }
  HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  RtlWakeAddressAll((char *)a1 + 552);
  return (unsigned int)v6;
}
