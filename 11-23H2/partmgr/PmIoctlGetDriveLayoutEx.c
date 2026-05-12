/*
 * XREFs of PmIoctlGetDriveLayoutEx @ 0x1C001C494
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     memmove @ 0x1C000B740 (memmove.c)
 */

__int64 __fastcall PmIoctlGetDriveLayoutEx(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  KSPIN_LOCK *v4; // rdi
  signed int DriveLayout; // eax
  struct _KMUTANT *v6; // rcx
  signed int v7; // edi
  void *v8; // rsi
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx
  __int64 v11; // rbx
  void *Src; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  Src = 0LL;
  v4 = *(KSPIN_LOCK **)(a1 + 64);
  if ( *(_DWORD *)(v2 + 8) < 0x30u )
  {
    return (unsigned int)-1073741789;
  }
  else
  {
    KeWaitForSingleObject(v4 + 7, Executive, 0, 0, 0LL);
    DriveLayout = PmGetDriveLayoutEx(v4, &Src);
    v6 = (struct _KMUTANT *)(v4 + 7);
    v7 = DriveLayout;
    KeReleaseMutex(v6, 0);
    v8 = Src;
    if ( v7 >= 0 )
    {
      v9 = -1;
      v10 = 144LL * *((unsigned int *)Src + 1);
      if ( v10 > 0xFFFFFFFF )
      {
        v7 = -1073741675;
      }
      else
      {
        if ( (unsigned int)v10 < 0xFFFFFFD0 )
          v9 = v10 + 48;
        v7 = (unsigned int)v10 >= 0xFFFFFFD0 ? 0xC0000095 : 0;
        if ( (unsigned int)(v10 + 48) >= 0x30 )
        {
          if ( *(_DWORD *)(v2 + 8) < v9 )
          {
            v7 = -1073741789;
          }
          else
          {
            v11 = v9;
            memmove(*(void **)(a2 + 24), Src, v9);
            *(_QWORD *)(a2 + 56) = v11;
          }
        }
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)v7;
}
