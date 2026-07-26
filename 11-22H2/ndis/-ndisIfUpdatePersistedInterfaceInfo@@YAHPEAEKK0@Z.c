/*
 * XREFs of ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C013E7C8
 * Callers:
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002C4B0 (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0034F98 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1C00B9758 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z @ 0x1C00B9974 (-ndisIfSetIfDescr@@YAHPEAU_NDIS_IF_DESCR_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIfUpdatePersistedInterfaceInfo(unsigned __int8 *a1, int a2, int a3, unsigned __int8 *a4)
{
  unsigned int v4; // ebx
  _QWORD v6[9]; // [rsp+20h] [rbp-50h] BYREF
  int v7; // [rsp+68h] [rbp-8h]
  int v8; // [rsp+6Ch] [rbp-4h]

  v4 = 0;
  v6[5] = a1;
  v6[1] = 0LL;
  v6[7] = 0LL;
  v6[0] = 0LL;
  v6[2] = &NPI_MS_NDIS_MODULEID;
  v6[4] = 0LL;
  v6[3] = 10LL;
  v6[6] = 8LL;
  v7 = a2;
  v8 = a3;
  v6[8] = a4;
  if ( (int)NsiSetParameterEx(v6) < 0 )
    return (unsigned int)-1073741823;
  return v4;
}
