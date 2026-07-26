/*
 * XREFs of ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0071A44
 * Callers:
 *     ndisLwmIoctlIrpHandler @ 0x1C00CBF98 (ndisLwmIoctlIrpHandler.c)
 *     ndisHandleBindNotification @ 0x1C012EB20 (ndisHandleBindNotification.c)
 *     ndisPnpRefresh @ 0x1C012EEDC (ndisPnpRefresh.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0011218 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

struct _NDIS_M_DRIVER_BLOCK *__fastcall ndisReferenceMiniportByGuid(const struct _GUID *a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  struct _NDIS_M_DRIVER_BLOCK *v5; // rdi
  KIRQL v6; // bp
  _NDIS_MINIPORT_BLOCK *i; // rbx
  __int64 v8; // rcx
  char v10; // al
  KSPIN_LOCK *p_SpinLock; // rcx

  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v5 = ndisMiniDriverList;
  v6 = v4;
LABEL_9:
  if ( v5 )
  {
    KeAcquireSpinLockAtDpcLevel(&v5->Ref.SpinLock);
    for ( i = v5->MiniportQueue; ; i = i->NextMiniport )
    {
      if ( !i )
      {
        KeReleaseSpinLockFromDpcLevel(&v5->Ref.SpinLock);
        v5 = v5->NextDriver;
        goto LABEL_9;
      }
      v8 = *(_QWORD *)&i->InterfaceGuid.Data1 - *(_QWORD *)&a1->Data1;
      if ( !v8 )
        v8 = *(_QWORD *)i->InterfaceGuid.Data4 - *(_QWORD *)a1->Data4;
      if ( !v8 )
        break;
    }
    v10 = ndisReferenceMiniport(i, a2);
    p_SpinLock = &v5->Ref.SpinLock;
    v5 = (struct _NDIS_M_DRIVER_BLOCK *)((unsigned __int64)i & -(__int64)(v10 != 0));
    KeReleaseSpinLockFromDpcLevel(p_SpinLock);
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
  return v5;
}
