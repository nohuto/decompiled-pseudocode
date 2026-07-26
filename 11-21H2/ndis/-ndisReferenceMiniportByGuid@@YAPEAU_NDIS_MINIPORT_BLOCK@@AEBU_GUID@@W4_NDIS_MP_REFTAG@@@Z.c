/*
 * XREFs of ?ndisReferenceMiniportByGuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006C698
 * Callers:
 *     ndisLwmIoctlIrpHandler @ 0x1C00C7304 (ndisLwmIoctlIrpHandler.c)
 *     ndisHandleBindNotification @ 0x1C0122FB8 (ndisHandleBindNotification.c)
 *     ndisPnpRefresh @ 0x1C0123374 (ndisPnpRefresh.c)
 * Callees:
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceMiniportByGuid(const struct _GUID *a1, unsigned __int8 a2)
{
  KIRQL v4; // al
  struct _NDIS_M_DRIVER_BLOCK *v5; // rdi
  KIRQL v6; // bp
  _NDIS_MINIPORT_BLOCK *i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rsi

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
    v9 = (unsigned __int64)i & -(__int64)(ndisReferenceMiniport(i, a2) != 0);
    KeReleaseSpinLockFromDpcLevel(&v5->Ref.SpinLock);
  }
  else
  {
    v9 = 0LL;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v6);
  return (struct _NDIS_MINIPORT_BLOCK *)v9;
}
