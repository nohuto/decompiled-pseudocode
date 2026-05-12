/*
 * XREFs of PmIoctlGetSnapshotInfo @ 0x1C00232E0
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     memmove @ 0x1C000B740 (memmove.c)
 *     PmGetSnapshotInfo @ 0x1C00233F4 (PmGetSnapshotInfo.c)
 */

__int64 __fastcall PmIoctlGetSnapshotInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rdi
  int SnapshotInfo; // eax
  struct _KMUTANT *v6; // rcx
  int v7; // edi
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rbx

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(v2 + 8) < 0x4Cu )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    KeWaitForSingleObject((PVOID)(v4 + 56), Executive, 0, 0, 0LL);
    SnapshotInfo = PmGetSnapshotInfo((struct _DEVICE_EXTENSION *)v4);
    v6 = (struct _KMUTANT *)(v4 + 56);
    v7 = SnapshotInfo;
    KeReleaseMutex(v6, 0);
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(a2 + 24);
      *(_OWORD *)v8 = MEMORY[0];
      *(_OWORD *)(v8 + 16) = MEMORY[0x10];
      *(_OWORD *)(v8 + 32) = MEMORY[0x20];
      *(_OWORD *)(v8 + 48) = MEMORY[0x30];
      *(_QWORD *)(v8 + 64) = MEMORY[0x40];
      *(_DWORD *)(v8 + 72) = MEMORY[0x48];
      v9 = MEMORY[0x48] + 76;
      if ( MEMORY[0x48] >= 0xFFFFFFB4 )
      {
        return (unsigned int)-1073741675;
      }
      else
      {
        v7 = 0;
        if ( *(_DWORD *)(v2 + 8) < v9 )
        {
          *(_QWORD *)(a2 + 56) = 76LL;
          return (unsigned int)-2147483643;
        }
        else
        {
          v10 = v9;
          memmove(*(void **)(a2 + 24), 0LL, v9);
          *(_QWORD *)(a2 + 56) = v10;
        }
      }
    }
  }
  return (unsigned int)v7;
}
