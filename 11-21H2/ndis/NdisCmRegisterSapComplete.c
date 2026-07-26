/*
 * XREFs of NdisCmRegisterSapComplete @ 0x1C00B96D0
 * Callers:
 *     NdisClRegisterSap @ 0x1C00B9570 (NdisClRegisterSap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B763C (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 */

void __stdcall NdisCmRegisterSapComplete(NDIS_STATUS Status, NDIS_HANDLE NdisSapHandle, NDIS_HANDLE CallMgrSapContext)
{
  __int64 v3; // rax
  __int64 v6; // r8
  __int64 v8; // rdx

  v3 = *((_QWORD *)NdisSapHandle + 2);
  *(_QWORD *)NdisSapHandle = CallMgrSapContext;
  v6 = *((_QWORD *)NdisSapHandle + 3);
  v8 = *((_QWORD *)NdisSapHandle + 1);
  if ( *(_DWORD *)(v3 + 396) >= 6u )
    (*(void (__fastcall **)(NDIS_STATUS, __int64, __int64, NDIS_HANDLE))(v3 + 264))(Status, v8, v6, NdisSapHandle);
  else
    (*(void (__fastcall **)(NDIS_STATUS, __int64, __int64, NDIS_HANDLE))(v3 + 112))(Status, v8, v6, NdisSapHandle);
  if ( Status )
  {
    ndisDereferenceAf(*((KSPIN_LOCK **)NdisSapHandle + 2));
    ExFreePoolWithTag(NdisSapHandle, 0);
  }
}
