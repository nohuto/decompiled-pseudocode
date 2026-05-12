/*
 * XREFs of PmIoctlGetSanSettings @ 0x1C0025B14
 * Callers:
 *     ?PmControlDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E8A0 (-PmControlDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlGetSanSettings(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  __int64 v3; // r14
  __int64 v5; // rdi

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(a2[23] + 8LL) >= 8u )
  {
    v5 = a2[3];
    *(_QWORD *)v5 = 0LL;
    KeWaitForSingleObject((PVOID)(v3 + 16), Executive, 0, 0, 0LL);
    *(_DWORD *)v5 = 8;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(v3 + 160);
    KeReleaseMutex((PRKMUTEX)(v3 + 16), 0);
    a2[7] = 8LL;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v2;
}
