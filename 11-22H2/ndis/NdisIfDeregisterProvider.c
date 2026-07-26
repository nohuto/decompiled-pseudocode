/*
 * XREFs of NdisIfDeregisterProvider @ 0x1C00B78D0
 * Callers:
 *     ?ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ @ 0x1C011BD98 (-ndisIfNdisProvidedInterfaceSubsystemInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __stdcall NdisIfDeregisterProvider(NDIS_HANDLE NdisProviderHandle)
{
  KIRQL v2; // di
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xCu,
      (struct _GUID *)&WPP_05716c62bb2536c54c77dd3b41b95439_Traceguids,
      NdisProviderHandle);
  if ( *((NDIS_HANDLE *)NdisProviderHandle + 3) != (char *)NdisProviderHandle + 24 )
    ndisBugCheckEx(0x17uLL, (ULONG_PTR)NdisProviderHandle, 0LL, 0LL);
  *(_BYTE *)NdisProviderHandle = ~*(_BYTE *)NdisProviderHandle;
  v2 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F7200);
  v3 = (NDIS_HANDLE *)*((_QWORD *)NdisProviderHandle + 1);
  if ( v3[1] != (char *)NdisProviderHandle + 8
    || (v4 = (NDIS_HANDLE *)*((_QWORD *)NdisProviderHandle + 2), *v4 != (char *)NdisProviderHandle + 8) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  v3[1] = v4;
  ExFreePoolWithTag(NdisProviderHandle, 0);
  KeReleaseSpinLock(&qword_1C00F7200, v2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_05716c62bb2536c54c77dd3b41b95439_Traceguids,
      NdisProviderHandle);
}
