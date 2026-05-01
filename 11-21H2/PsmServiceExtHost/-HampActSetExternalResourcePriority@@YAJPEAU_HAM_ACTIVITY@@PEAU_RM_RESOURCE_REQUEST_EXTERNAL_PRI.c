/*
 * XREFs of ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x180078078
 * Callers:
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007173C (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079658 (-HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800820B8 (-HampRmContextSetExternalResourcePriority@@YAJPEAXPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z.c)
 */

__int64 __fastcall HampActSetExternalResourcePriority(
        struct _HAM_ACTIVITY *a1,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a2)
{
  int *v4; // rsi
  int v5; // eax
  int v6; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rcx
  int v8; // ebp
  ULONG v9; // edx
  unsigned __int64 v10; // rcx
  int v11; // ebx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

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
    v6 = HampRmContextSetExternalResourcePriority(*((void **)a1 + 11), a2);
    HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
    *v4 &= ~1u;
    if ( v6 >= 0 )
    {
      RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 124, 0x2Fu);
      v8 = *(unsigned __int8 *)a2;
      v9 = v8 - 3;
      v10 = (unsigned int)(v8 - 3);
      if ( *((_BYTE *)a2 + 1) >= 0x65u )
      {
        v11 = _bittest64((const signed __int64 *)BitMapHeader.Buffer, v10);
        RtlClearBit(&BitMapHeader, v9);
      }
      else
      {
        v11 = !_bittest64((const signed __int64 *)BitMapHeader.Buffer, v10);
        RtlSetBit(&BitMapHeader, v9);
      }
      if ( v11 && v8 == 27 )
        HampHostCheckQueueInterruptiveUIChangeWorker(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
      v6 = 0;
    }
  }
  HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  RtlWakeAddressAll((char *)a1 + 552);
  return (unsigned int)v6;
}
