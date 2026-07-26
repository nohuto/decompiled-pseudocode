/*
 * XREFs of NdisClRegisterSap @ 0x1C00BE670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00BC8C0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCmRegisterSapComplete @ 0x1C00BE7D0 (NdisCmRegisterSapComplete.c)
 */

NDIS_STATUS __stdcall NdisClRegisterSap(
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolSapContext,
        PCO_SAP Sap,
        PNDIS_HANDLE NdisSapHandle)
{
  NDIS_STATUS result; // eax
  __int64 Pool2; // rax
  NDIS_HANDLE *v10; // rbx
  bool v11; // cf
  __int64 v12; // rcx
  __int64 v13; // rax

  *NdisSapHandle = 0LL;
  if ( !ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)NdisAfHandle) )
    return -1073741823;
  Pool2 = ExAllocatePool2(64LL, 48LL, 1868776526);
  v10 = (NDIS_HANDLE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_DWORD *)(Pool2 + 36) = 1;
    KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 40));
    v11 = *((_DWORD *)NdisAfHandle + 98) < 6u;
    v12 = *((_QWORD *)NdisAfHandle + 6);
    v10[2] = NdisAfHandle;
    v10[3] = Sap;
    v10[1] = ProtocolSapContext;
    if ( v11 )
      v13 = *((_QWORD *)NdisAfHandle + 3);
    else
      v13 = *((_QWORD *)NdisAfHandle + 4);
    result = (*(__int64 (__fastcall **)(__int64, PCO_SAP, NDIS_HANDLE *, NDIS_HANDLE *))(v13 + 40))(v12, Sap, v10, v10);
    if ( result != 259 )
    {
      NdisCmRegisterSapComplete(result, v10, *v10);
      return 259;
    }
  }
  else
  {
    *NdisSapHandle = 0LL;
    return -1073741670;
  }
  return result;
}
