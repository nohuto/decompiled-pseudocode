/*
 * XREFs of NdisDeregisterDeviceEx @ 0x1C005E4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0003060 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 */

void __stdcall NdisDeregisterDeviceEx(NDIS_HANDLE NdisDeviceHandle)
{
  char *v2; // rcx
  char v3; // al
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  _QWORD *v6; // r9
  NDIS_HANDLE *v7; // rdx
  __int64 v8; // rdi
  NDIS_HANDLE *v9; // r9
  NDIS_HANDLE *v10; // rdx
  KSPIN_LOCK *v11; // rcx
  _QWORD *v12; // r9
  NDIS_HANDLE *v13; // r8

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x70u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      NdisDeviceHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v2 = (char *)*((_QWORD *)NdisDeviceHandle + 3);
  v3 = *v2;
  if ( *v2 == 2 )
  {
    v4 = (KSPIN_LOCK *)(v2 + 392);
    goto LABEL_15;
  }
  if ( v3 == 4 )
  {
    v4 = (KSPIN_LOCK *)(v2 + 40);
LABEL_15:
    v5 = KeAcquireSpinLockRaiseToDpc(v4);
    v12 = (_QWORD *)*((_QWORD *)NdisDeviceHandle + 1);
    if ( (NDIS_HANDLE)v12[1] == (char *)NdisDeviceHandle + 8 )
    {
      v13 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
      if ( *v13 == (char *)NdisDeviceHandle + 8 )
      {
        *v13 = v12;
        v12[1] = v13;
        goto LABEL_18;
      }
    }
LABEL_23:
    __fastfail(3u);
  }
  if ( v3 != 17 )
  {
    if ( v3 != -86 )
      goto LABEL_20;
    v4 = (KSPIN_LOCK *)((char *)IoGetDriverObjectExtension(**((PDRIVER_OBJECT **)v2 + 1), (PVOID)0x4E4D4944) + 392);
    v5 = KeAcquireSpinLockRaiseToDpc(v4);
    v6 = (_QWORD *)*((_QWORD *)NdisDeviceHandle + 1);
    if ( (NDIS_HANDLE)v6[1] == (char *)NdisDeviceHandle + 8 )
    {
      v7 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
      if ( *v7 == (char *)NdisDeviceHandle + 8 )
      {
        *v7 = v6;
        v6[1] = v7;
LABEL_18:
        v11 = v4;
        goto LABEL_19;
      }
    }
    goto LABEL_23;
  }
  v8 = *((_QWORD *)v2 + 470);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 392));
  v9 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
  if ( v9[1] != (char *)NdisDeviceHandle + 8 )
    goto LABEL_23;
  v10 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
  if ( *v10 != (char *)NdisDeviceHandle + 8 )
    goto LABEL_23;
  *v10 = v9;
  v11 = (KSPIN_LOCK *)(v8 + 392);
  v9[1] = v10;
LABEL_19:
  KeReleaseSpinLock(v11, v5);
LABEL_20:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  IoDeleteSymbolicLink((PUNICODE_STRING)NdisDeviceHandle + 18);
  IoDeleteDevice(*((PDEVICE_OBJECT *)NdisDeviceHandle + 4));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x71u,
      (struct _GUID *)&WPP_9c2ae63cf1b030f77db7d8db8508a9c2_Traceguids,
      NdisDeviceHandle);
}
