/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x1406970A4
 * Callers:
 *     MiProcessKernelCfgImage @ 0x140368450 (MiProcessKernelCfgImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A20 (RtlImageDirectoryEntryToData.c)
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiSnapDriverRange @ 0x140703908 (MiSnapDriverRange.c)
 *     MiCompleteSecureDriverLoad @ 0x140885AC8 (MiCompleteSecureDriverLoad.c)
 *     MiAcquireKernelCfgLock @ 0x140A44098 (MiAcquireKernelCfgLock.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A440FC (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReleaseKernelCfgLock @ 0x140A44364 (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiMarkKernelImageCfgBits(__int64 a1, __int64 a2)
{
  int KernelCfgBitmapPageTables; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  int v7; // edx
  unsigned __int64 v8; // r8
  ULONG Size; // [rsp+38h] [rbp-49h] BYREF
  __int64 v10; // [rsp+40h] [rbp-41h] BYREF
  __int64 v11; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v12[14]; // [rsp+58h] [rbp-29h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  Size = 0;
  if ( a2 )
  {
    MiAcquireKernelCfgLock();
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(
                                  *(_QWORD *)(a1 + 48),
                                  *(unsigned int *)(a1 + 64),
                                  1LL);
    MiReleaseKernelCfgLock();
    if ( KernelCfgBitmapPageTables >= 0 )
    {
      KernelCfgBitmapPageTables = MiCompleteSecureDriverLoad(a1);
      if ( KernelCfgBitmapPageTables >= 0 )
      {
        v5 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
        v6 = v5;
        if ( v5 && Size >= 0xB0 && v5[21] )
        {
          v7 = 0;
          while ( 1 )
          {
            v7 = MiSnapDriverRange(a1, v7, 2, 0, (__int64)&v10, (__int64)&v11);
            if ( v10 )
            {
              v8 = v6[20];
              if ( v8 >= v10 << 25 >> 16 && v8 <= ((v11 << 25) | 0xFFF0000) >> 16 )
                break;
            }
            if ( !v7 )
              return (unsigned int)KernelCfgBitmapPageTables;
          }
          *(_DWORD *)(a1 + 104) |= 0x800u;
        }
        else
        {
          *(_DWORD *)(a1 + 104) |= 0x100u;
        }
      }
    }
  }
  else if ( (MiFlags & 0x4000) != 0 )
  {
    memset(v12, 0, 0x68uLL);
    v12[1] = *(_QWORD *)(a1 + 48);
    return (unsigned int)VslpEnterIumSecureMode(2u, 217, 0, (__int64)v12);
  }
  else
  {
    return 0;
  }
  return (unsigned int)KernelCfgBitmapPageTables;
}
