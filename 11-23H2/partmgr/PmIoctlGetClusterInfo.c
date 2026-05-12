/*
 * XREFs of PmIoctlGetClusterInfo @ 0x1C001CF50
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlGetClusterInfo(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbx
  _OWORD *v5; // rdi

  v2 = 0;
  if ( *(_DWORD *)(a2[23] + 8LL) < 0x20u )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 64);
    v5 = (_OWORD *)a2[3];
    KeWaitForSingleObject((PVOID)(v4 + 56), Executive, 0, 0, 0LL);
    *v5 = *(_OWORD *)(v4 + 560);
    v5[1] = *(_OWORD *)(v4 + 576);
    KeReleaseMutex((PRKMUTEX)(v4 + 56), 0);
    a2[7] = 32LL;
  }
  return v2;
}
