/*
 * XREFs of PmIoctlGetPerformanceInfo @ 0x1C001D4F8
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmPerfCounterQuery @ 0x1C001D5B0 (PmPerfCounterQuery.c)
 *     PmWmiCounterEnable @ 0x1C00223F0 (PmWmiCounterEnable.c)
 */

__int64 __fastcall PmIoctlGetPerformanceInfo(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v4; // rdi
  _DWORD *v6; // rbp

  v2 = a2[23];
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v2 + 16) < 8u )
    return (unsigned int)-1073741820;
  v6 = (_DWORD *)a2[3];
  if ( *v6 != 8 || (int)v6[1] >= 2 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(v2 + 8) < 0x58u )
    return (unsigned int)-1073741789;
  if ( !*(_BYTE *)(v4 + 704) )
  {
    v3 = PmWmiCounterEnable(v4 + 720);
    if ( v3 < 0 )
      return (unsigned int)v3;
    *(_BYTE *)(v4 + 704) = 1;
  }
  PmPerfCounterQuery(*(PRKMUTEX *)(v4 + 720));
  a2[7] = 88LL;
  return (unsigned int)v3;
}
