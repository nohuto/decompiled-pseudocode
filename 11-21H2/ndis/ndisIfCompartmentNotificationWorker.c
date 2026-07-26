/*
 * XREFs of ndisIfCompartmentNotificationWorker @ 0x1C0035C50
 * Callers:
 *     <none>
 * Callees:
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002D458 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C01123B0 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 */

void ndisIfCompartmentNotificationWorker()
{
  KIRQL v0; // si
  _QWORD *v1; // rcx
  __int64 v2; // rax
  _QWORD *v3; // rbx
  int v4; // edi
  unsigned int v5; // edx
  struct _KEVENT *v6; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  while ( 1 )
  {
    v1 = (_QWORD *)qword_1C00ECC38;
    if ( (__int64 *)qword_1C00ECC38 == &qword_1C00ECC38 )
      break;
    if ( *(__int64 **)(qword_1C00ECC38 + 8) != &qword_1C00ECC38
      || (v2 = *(_QWORD *)qword_1C00ECC38, *(_QWORD *)(*(_QWORD *)qword_1C00ECC38 + 8LL) != qword_1C00ECC38) )
    {
      __fastfail(3u);
    }
    qword_1C00ECC38 = *(_QWORD *)qword_1C00ECC38;
    v3 = v1 - 218;
    *(_QWORD *)(v2 + 8) = &qword_1C00ECC38;
    v1[1] = v1;
    *v1 = v1;
    v4 = *(_DWORD *)(v1 - 213) & 3;
    if ( ((*(_DWORD *)(v1 - 213) & 4) != 0) != (v4 == 0) )
    {
      v5 = *((_DWORD *)v1 - 426) | 4;
      if ( v4 )
        v5 = *(_DWORD *)(v1 - 213) & 0xFFFFFFFB;
      *((_DWORD *)v3 + 10) = v5;
      KeReleaseSpinLock(&ndisIfListLock, v0);
      ndisNsiNotifyClientCompartmentChange(v3, (unsigned int)(v4 != 0) + 1);
      v0 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    }
    if ( v4 )
    {
      v6 = (struct _KEVENT *)v3[220];
      if ( v6 )
      {
        KeSetEvent(v6, 0, 0);
        v3[220] = 0LL;
      }
    }
    COMPARTMENTBLOCK_DECREMENT_REF((struct _NDIS_IF_COMPARTMENT_BLOCK *)v3);
  }
  byte_1C00EC194 = 0;
  KeReleaseSpinLock(&ndisIfListLock, v0);
}
