/*
 * XREFs of PmIoctlCreateSpacesMetadata @ 0x1C001F0B8
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 */

__int64 __fastcall PmIoctlCreateSpacesMetadata(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int SpacesMetadata; // ebx

  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x260u )
  {
    return (unsigned int)-1073741820;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 64);
    v3 = *(_QWORD *)(a2 + 24);
    KeWaitForSingleObject((PVOID)(v2 + 56), Executive, 0, 0, 0LL);
    SpacesMetadata = PmCreateSpacesMetadata((struct _DEVICE_EXTENSION *)v2, v3);
    KeReleaseMutex((PRKMUTEX)(v2 + 56), 0);
  }
  return SpacesMetadata;
}
