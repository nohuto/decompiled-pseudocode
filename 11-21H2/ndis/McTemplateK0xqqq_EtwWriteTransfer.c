/*
 * XREFs of McTemplateK0xqqq_EtwWriteTransfer @ 0x1C0055F0C
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C0001F20 (NdisTryAcquireNicActive.c)
 *     ndisDispatchRequest @ 0x1C0005B98 (ndisDispatchRequest.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00540AC (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00543F4 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     NdisReleaseNicActive @ 0x1C0056030 (NdisReleaseNicActive.c)
 *     ?ndisWdfNicActiveAcquireSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00AB9F8 (-ndisWdfNicActiveAcquireSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CO.c)
 *     ?ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00ABB2C (-ndisWdfNicActiveReleaseSleepStudy@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CO.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C001FE70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xqqq_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  va_list v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+68h] [rbp+17h]
  va_list v11; // [rsp+70h] [rbp+1Fh]
  __int64 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v17; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  va_list va3; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 4LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  v12 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 5u, &v4);
}
