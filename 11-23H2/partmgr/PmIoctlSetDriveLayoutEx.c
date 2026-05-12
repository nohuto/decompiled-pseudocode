/*
 * XREFs of PmIoctlSetDriveLayoutEx @ 0x1C001EC1C
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmSetDriveLayoutEx @ 0x1C001ED08 (PmSetDriveLayoutEx.c)
 */

__int64 __fastcall PmIoctlSetDriveLayoutEx(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v4; // r13
  unsigned int v5; // edx
  unsigned int v6; // esi
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx

  v2 = a2[23];
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_DWORD *)(v2 + 16);
  if ( v5 < 0x30 )
    return (unsigned int)-1073741820;
  v6 = -1;
  v7 = 144LL * *(unsigned int *)(a2[3] + 4LL);
  if ( v7 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (unsigned int)v7 < 0xFFFFFFD0 )
    v6 = v7 + 48;
  v8 = (unsigned int)v7 >= 0xFFFFFFD0 ? 0xC0000095 : 0;
  if ( (unsigned int)v7 < 0xFFFFFFD0 )
  {
    if ( v5 >= v6 )
    {
      KeWaitForSingleObject((PVOID)(v4 + 56), Executive, 0, 0, 0LL);
      v8 = PmSetDriveLayoutEx((struct _DEVICE_EXTENSION *)v4);
      KeReleaseMutex((PRKMUTEX)(v4 + 56), 0);
      if ( (v8 & 0x80000000) == 0 )
      {
        v9 = *(unsigned int *)(v2 + 8);
        if ( (unsigned int)v9 >= v6 )
          v9 = v6;
        a2[7] = v9;
      }
      return v8;
    }
    return (unsigned int)-1073741820;
  }
  return v8;
}
