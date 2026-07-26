/*
 * XREFs of ?ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C00B1220
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C0058C60 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     McTemplateK0ujqzr2jxx_EtwWriteTransfer @ 0x1C005B114 (McTemplateK0ujqzr2jxx_EtwWriteTransfer.c)
 */

void __fastcall ndisWdfCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1, char a2, char a3)
{
  KSPIN_LOCK *v3; // r13
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  _DEVICE_OBJECT *PhysicalDeviceObject; // rax
  unsigned __int16 IfIndex; // ax
  wchar_t **v13; // rbx
  int i; // edi
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  KIRQL v17; // [rsp+51h] [rbp-28h]
  KSPIN_LOCK *AoAc; // [rsp+58h] [rbp-21h]
  GUID v19; // [rsp+60h] [rbp-19h] BYREF
  GUID v20; // [rsp+70h] [rbp-9h] BYREF
  __int128 v21; // [rsp+80h] [rbp+7h] BYREF

  AoAc = (KSPIN_LOCK *)a1->AoAc;
  v3 = AoAc;
  v21 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc(AoAc);
  v17 = v7;
  v10 = AoAc + 103;
  if ( a2 )
  {
    *v10 = 0LL;
  }
  else
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v19 = 0LL;
    *(_QWORD *)&v21 = PhysicalDeviceObject;
    if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      McTemplateK0ujqzr2jxx_EtwWriteTransfer(
        (__int64)a1->pAdapterInstanceName,
        (a1->pAdapterInstanceName->Length >> 1) + 1,
        &a1->InterfaceGuid,
        a3,
        (__int64)&v21,
        (a1->pAdapterInstanceName->Length >> 1) + 1,
        (__int64)a1->pAdapterInstanceName->Buffer,
        (__int64)&a1->InterfaceGuid,
        *v10,
        a3);
    LOBYTE(v9) = a3;
    IfIndex = a1->IfIndex;
    v20 = GUID_CS_BLOCKER_GEN;
    v20.Data3 = IfIndex;
    v20.Data4[0] = 0;
    if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
      McTemplateK0ujqzr2jxx_EtwWriteTransfer(
        v9,
        v8,
        &a1->InterfaceGuid,
        a3,
        (__int64)&a1->InterfaceGuid,
        5,
        (__int64)L"NDIS",
        (__int64)&v20,
        *v10,
        a3);
    v13 = &off_1C00D7BE0;
    for ( i = 0; i < 17; ++i )
    {
      v15 = *(__int64 *)((char *)v13 + (char *)AoAc - (char *)&off_1C00D7BE0 + 536);
      if ( v15 )
      {
        v16 = a1->IfIndex;
        v19 = GUID_CS_BLOCKER_GEN;
        v19.Data3 = v16;
        v19.Data4[0] = i;
        if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          McTemplateK0ujqzr2jxx_EtwWriteTransfer(
            v15,
            v8,
            &a1->InterfaceGuid,
            a3,
            (__int64)&v20,
            *((_DWORD *)v13 + 2),
            (__int64)*v13,
            (__int64)&v19,
            v15,
            a3);
      }
      v13 += 2;
    }
    v3 = AoAc;
    v7 = v17;
  }
  KeReleaseSpinLock(v3, v7);
}
