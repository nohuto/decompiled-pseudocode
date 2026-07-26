/*
 * XREFs of ?ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C00AB7F4
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0053870 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C0055CE0 (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 */

void __fastcall ndisWdfCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  KSPIN_LOCK *AoAc; // rdi
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DEVICE_OBJECT *PhysicalDeviceObject; // rax
  unsigned __int16 IfIndex; // ax
  wchar_t **v12; // rbx
  int i; // esi
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  KIRQL v16; // [rsp+51h] [rbp-28h]
  GUID v17; // [rsp+60h] [rbp-19h] BYREF
  GUID v18; // [rsp+70h] [rbp-9h] BYREF
  __int128 v19; // [rsp+80h] [rbp+7h] BYREF

  AoAc = (KSPIN_LOCK *)a1->AoAc;
  v19 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc(AoAc);
  v16 = v7;
  if ( a2 )
  {
    AoAc[103] = 0LL;
  }
  else
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v17 = 0LL;
    *(_QWORD *)&v19 = PhysicalDeviceObject;
    if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      McTemplateK0ujqzr2jxx_EtwWriteTransfer(
        (__int64)a1->pAdapterInstanceName,
        (a1->pAdapterInstanceName->Length >> 1) + 1,
        &a1->InterfaceGuid,
        a3,
        (__int64)&v19,
        (a1->pAdapterInstanceName->Length >> 1) + 1,
        (__int64)a1->pAdapterInstanceName->Buffer,
        (__int64)&a1->InterfaceGuid,
        AoAc[103],
        a3);
    LOBYTE(v9) = a3;
    IfIndex = a1->IfIndex;
    v18 = GUID_CS_BLOCKER_GEN;
    v18.Data3 = IfIndex;
    v18.Data4[0] = 0;
    if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      McTemplateK0ujqzr2jxx_EtwWriteTransfer(
        v9,
        v8,
        &a1->InterfaceGuid,
        a3,
        (__int64)&a1->InterfaceGuid,
        5,
        (__int64)L"NDIS",
        (__int64)&v18,
        AoAc[103],
        a3);
    v12 = &off_1C00D0800;
    for ( i = 0; i < 17; ++i )
    {
      v14 = *(__int64 *)((char *)v12 + (char *)AoAc - (char *)&off_1C00D0800 + 536);
      if ( v14 )
      {
        v15 = a1->IfIndex;
        v17 = GUID_CS_BLOCKER_GEN;
        v17.Data3 = v15;
        v17.Data4[0] = i;
        if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          McTemplateK0ujqzr2jxx_EtwWriteTransfer(
            v14,
            v8,
            &a1->InterfaceGuid,
            a3,
            (__int64)&v18,
            *((_DWORD *)v12 + 2),
            (__int64)*v12,
            (__int64)&v17,
            v14,
            a3);
      }
      v12 += 2;
    }
    v7 = v16;
  }
  KeReleaseSpinLock(AoAc, v7);
}
