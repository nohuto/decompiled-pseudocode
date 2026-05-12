/*
 * XREFs of PmIoctlAreVolumesReady @ 0x1C000A538
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PmIoctlAreVolumesReady(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v4; // esi
  bool v5; // di
  struct _KMUTANT *v6; // r15
  __int64 v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  KIRQL v11; // dl

  v2 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = 0;
  v6 = (struct _KMUTANT *)(v2 + 56);
  KeWaitForSingleObject((PVOID)(v2 + 56), Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(v2 + 528) & 1) != 0 )
  {
    v4 = -2147483632;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 880) )
    goto LABEL_3;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 112));
  if ( !*(_BYTE *)(v2 + 816) )
    v5 = (*(_BYTE *)(v2 + 512) & 0x14) != 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 112), v11);
  if ( !v5 )
  {
LABEL_3:
    v7 = v2 + 864;
    v8 = (_QWORD *)(a2 + 168);
    v9 = *(_QWORD **)(v7 + 8);
    if ( *v9 != v7 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(a2 + 176) = v9;
    *v9 = v8;
    *(_QWORD *)(v7 + 8) = v8;
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)PmAreVolumesReadyCancelRoutine);
    if ( !*(_BYTE *)(a2 + 68) )
    {
      v4 = 259;
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
      goto LABEL_6;
    }
    if ( !_InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
    {
      v5 = 0;
      goto LABEL_6;
    }
    v4 = -1073741536;
LABEL_14:
    v5 = 1;
  }
LABEL_6:
  KeReleaseMutex(v6, 0);
  if ( v5 )
  {
    *(_DWORD *)(a2 + 48) = v4;
    IofCompleteRequest((PIRP)a2, 0);
  }
  return v4;
}
