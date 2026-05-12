/*
 * XREFs of PmIoctlGetDriveLayout @ 0x1C00257CC
 * Callers:
 *     ?PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00038D0 (-PmFilterDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     PmGetDriveLayoutEx @ 0x1C0002B60 (PmGetDriveLayoutEx.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall PmIoctlGetDriveLayout(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  KSPIN_LOCK *v4; // rdi
  signed int v5; // edi
  signed int DriveLayout; // eax
  struct _KMUTANT *v7; // rcx
  _DWORD *v8; // rbx
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _DWORD *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2[23];
  P = 0LL;
  v4 = *(KSPIN_LOCK **)(a1 + 64);
  if ( *(_DWORD *)(v2 + 8) >= 8u )
  {
    KeWaitForSingleObject(v4 + 7, Executive, 0, 0, 0LL);
    DriveLayout = PmGetDriveLayoutEx(v4, &P);
    v7 = (struct _KMUTANT *)(v4 + 7);
    v5 = DriveLayout;
    KeReleaseMutex(v7, 0);
    v8 = P;
    if ( v5 >= 0 )
    {
      if ( *(_DWORD *)P )
      {
        v5 = -1073741808;
      }
      else
      {
        v9 = -1;
        v10 = 32LL * *((unsigned int *)P + 1);
        if ( v10 > 0xFFFFFFFF )
        {
          v5 = -1073741675;
        }
        else
        {
          v11 = v10 + 8;
          if ( v11 >= 8 )
            v9 = v11;
          v5 = v11 < 8 ? 0xC0000095 : 0;
          if ( v11 >= 8 )
          {
            if ( *(_DWORD *)(v2 + 8) >= v9 )
            {
              v12 = (_DWORD *)a2[3];
              v13 = v9;
              memset(v12, 0, v9);
              v14 = 0LL;
              *v12 = v8[1];
              for ( v12[1] = v8[2]; (unsigned int)v14 < v8[1]; HIBYTE(v12[v16 + 8]) = v8[2 * v15 + 19] )
              {
                v15 = 18 * v14;
                v16 = 8LL * (unsigned int)v14;
                v14 = (unsigned int)(v14 + 1);
                *(_QWORD *)&v12[v16 + 2] = *(_QWORD *)&v8[2 * v15 + 14];
                *(_QWORD *)&v12[v16 + 4] = *(_QWORD *)&v8[2 * v15 + 16];
                v12[v16 + 6] = v8[2 * v15 + 21];
                v12[v16 + 7] = v8[2 * v15 + 18];
                LOBYTE(v12[v16 + 8]) = v8[2 * v15 + 20];
                BYTE1(v12[v16 + 8]) = BYTE1(v8[2 * v15 + 20]);
                BYTE2(v12[v16 + 8]) = BYTE2(v8[2 * v15 + 20]);
              }
              a2[7] = v13;
            }
            else
            {
              v5 = -1073741789;
            }
          }
        }
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v5;
}
