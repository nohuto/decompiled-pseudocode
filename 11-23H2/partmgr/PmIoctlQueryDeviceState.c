/*
 * XREFs of PmIoctlQueryDeviceState @ 0x1C001DE10
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlQueryDeviceState(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  __int64 v3; // r14
  __int64 v5; // rdi

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(a2[23] + 8LL) < 0x18u )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    v5 = a2[3];
    *(_OWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    KeWaitForSingleObject((PVOID)(v3 + 56), Executive, 0, 0, 0LL);
    *(_DWORD *)v5 = 24;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)(v3 + 516);
    *(_DWORD *)(v5 + 8) = *(_DWORD *)(v3 + 592);
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(v3 + 596);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(v3 + 600);
    *(_BYTE *)(v5 + 20) = *(_BYTE *)(v3 + 604);
    KeReleaseMutex((PRKMUTEX)(v3 + 56), 0);
    a2[7] = 24LL;
  }
  return v2;
}
