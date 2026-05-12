/*
 * XREFs of PmIoctlIsClustered @ 0x1C000A91C
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlIsClustered(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // r14
  _BYTE *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // r15
  __int64 v9; // rax
  KIRQL v11; // al
  int v12; // edi

  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  if ( !a3 )
  {
    if ( !*(_DWORD *)(a2[23] + 8LL) )
      return (unsigned int)-1073741789;
    v4 = (_BYTE *)a2[3];
    v6 = 1LL;
  }
  KeWaitForSingleObject((PVOID)(v3 + 56), Executive, 0, 0, 0LL);
  v9 = *(_QWORD *)(v3 + 544) - CLUSDISK_OWNER_GUID;
  if ( !v9 )
    v9 = *(_QWORD *)(v3 + 552) + 0x502D88342DE82841LL;
  if ( v9 )
  {
    if ( a3 )
      v5 = -1073741823;
    else
      *v4 = 0;
  }
  else if ( a3 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 112));
    v12 = *(_DWORD *)(v3 + 512);
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 112), v11);
    v5 = (v12 & 8) != 0 ? 0xC0000001 : 0;
  }
  else
  {
    *v4 = 1;
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 56), 0);
  if ( !a3 )
    a2[7] = v6;
  return v5;
}
