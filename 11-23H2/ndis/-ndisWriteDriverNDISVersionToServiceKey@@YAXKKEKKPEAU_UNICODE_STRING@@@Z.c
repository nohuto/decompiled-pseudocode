/*
 * XREFs of ?ndisWriteDriverNDISVersionToServiceKey@@YAXKKEKKPEAU_UNICODE_STRING@@@Z @ 0x1C0030410
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002ACD4 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterProtocolDriver @ 0x1C002FBC0 (NdisRegisterProtocolDriver.c)
 *     NdisFRegisterFilterDriver @ 0x1C00306C0 (NdisFRegisterFilterDriver.c)
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C0069EE0 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 *     NdisRegisterProtocol @ 0x1C009D850 (NdisRegisterProtocol.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisWriteDriverNDISVersionToServiceKey(
        int a1,
        int a2,
        char a3,
        int a4,
        unsigned int a5,
        struct _UNICODE_STRING *a6)
{
  wchar_t *Buffer; // rdx
  wchar_t *v11; // rdx
  wchar_t *v12; // rdx
  _DWORD ValueData[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( !RtlIsStateSeparationEnabled() )
  {
    ValueData[0] = a1;
    RtlWriteRegistryValue(1u, (PCWSTR)a6->Buffer, L"NdisMajorVersion", 4u, ValueData, 4u);
    Buffer = a6->Buffer;
    ValueData[0] = a2;
    RtlWriteRegistryValue(1u, (PCWSTR)Buffer, L"NdisMinorVersion", 4u, ValueData, 4u);
    v11 = a6->Buffer;
    if ( a3 )
    {
      ValueData[0] = a4;
      RtlWriteRegistryValue(1u, (PCWSTR)v11, L"DriverMajorVersion", 4u, ValueData, 4u);
      v12 = a6->Buffer;
      ValueData[0] = a5;
      RtlWriteRegistryValue(1u, (PCWSTR)v12, L"DriverMinorVersion", 4u, ValueData, 4u);
    }
    else
    {
      RtlDeleteRegistryValue(1u, (PCWSTR)v11, L"DriverMajorVersion");
      RtlDeleteRegistryValue(1u, (PCWSTR)a6->Buffer, L"DriverMinorVersion");
    }
  }
}
