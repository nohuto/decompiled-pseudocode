/*
 * XREFs of PmPowerCounterEnable @ 0x1C000B084
 * Callers:
 *     ?PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z @ 0x1C0008570 (-PmStartDeviceInternal@@YAJPEAU_DEVICE_EXTENSION@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?PmPowerContextInitialization@@YAJPEAU_DISK_POWER_CONTEXT@@W4_DISK_DEVICEPOWER_TYPE@@@Z @ 0x1C000AA10 (-PmPowerContextInitialization@@YAJPEAU_DISK_POWER_CONTEXT@@W4_DISK_DEVICEPOWER_TYPE@@@Z.c)
 */

__int64 __fastcall PmPowerCounterEnable(_QWORD *a1)
{
  int v1; // ebx
  unsigned int v3; // edx
  _WORD *Pool2; // rax
  void *v5; // rdi
  int v7; // eax
  __int64 v8; // rax

  v1 = 0;
  v3 = *(_DWORD *)(a1[29] + 28LL);
  if ( v3 - 12 > 1 )
  {
    if ( v3 <= 0xB && (v7 = 2862, _bittest(&v7, v3)) )
    {
      v8 = a1[34];
      if ( v8 )
        v1 = (*(_BYTE *)(v8 + 8) != 0) + 1;
      else
        v1 = 2;
    }
    else
    {
      if ( v3 != 17 )
      {
        a1[143] = 0LL;
        return (unsigned int)v1;
      }
      v1 = 3;
    }
  }
  Pool2 = (_WORD *)ExAllocatePool2(64LL, 240LL, 1129344336LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    v1 = PmPowerContextInitialization(Pool2, v1);
    if ( v1 < 0 )
      ExFreePoolWithTag(v5, 0);
    else
      a1[143] = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v1;
}
