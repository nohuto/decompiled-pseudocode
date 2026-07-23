/*
 * XREFs of ExRaiseHardError @ 0x140A00E10
 * Callers:
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408632EC (CmpMountPreloadedHives.c)
 *     IopHardErrorThread @ 0x140944F90 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x140945520 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x1409457C0 (IopRaiseInformationalHardError.c)
 *     ExpExpirationThread @ 0x1409F7EA0 (ExpExpirationThread.c)
 *     NtRaiseHardError @ 0x140A014E0 (NtRaiseHardError.c)
 *     CmpQuotaWarningWorker @ 0x140A0FFF0 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x140A11D70 (CmpDiskFullWarningWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x14041B3F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x14041B4B0 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpRaiseHardError @ 0x140A01148 (ExpRaiseHardError.c)
 */

__int64 __fastcall ExRaiseHardError(int a1, unsigned int a2, int a3, char *a4, int a5, int *a6)
{
  __int64 v8; // rsi
  int *v9; // r15
  int v10; // r14d
  ULONG_PTR v11; // rdi
  NTSTATUS v12; // ebx
  unsigned int v13; // edx
  char *v14; // r8
  char *v15; // r15
  char *v16; // r14
  __int64 i; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  int v22; // [rsp+48h] [rbp-160h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-158h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-150h] BYREF
  int v25; // [rsp+60h] [rbp-148h]
  unsigned int v26; // [rsp+68h] [rbp-140h]
  int v27; // [rsp+70h] [rbp-138h]
  char *v28; // [rsp+78h] [rbp-130h]
  int *v29; // [rsp+80h] [rbp-128h]
  PVOID v30; // [rsp+88h] [rbp-120h]
  const void *v31; // [rsp+90h] [rbp-118h]
  __int64 v32; // [rsp+98h] [rbp-110h]
  __int64 v33; // [rsp+A0h] [rbp-108h]
  __int64 v34; // [rsp+A8h] [rbp-100h]
  void **v35; // [rsp+B0h] [rbp-F8h]
  _OWORD v36[2]; // [rsp+B8h] [rbp-F0h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-D0h]
  _OWORD v38[2]; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+100h] [rbp-A8h]
  void *v40[10]; // [rsp+110h] [rbp-98h] BYREF

  v8 = a2;
  v25 = a1;
  v26 = a2;
  v27 = a3;
  v31 = a4;
  v9 = a6;
  v29 = a6;
  RegionSize = 0LL;
  v10 = 0;
  v22 = 0;
  BaseAddress = 0LL;
  memset(v38, 0, sizeof(v38));
  v39 = 0LL;
  memset(v36, 0, sizeof(v36));
  v37 = 0LL;
  v11 = 80LL;
  memset(v40, 0, sizeof(v40));
  if ( ExpTooLateForErrors )
  {
    v12 = 0;
    v10 = 1;
    goto LABEL_20;
  }
  if ( (unsigned int)v8 > 5 )
  {
    v12 = -1073741584;
    goto LABEL_20;
  }
  if ( !a4 )
    goto LABEL_19;
  memmove(v38, a4, 8 * v8);
  memmove(v36, a4, 8 * v8);
  if ( !a3 )
    goto LABEL_19;
  RegionSize = 80LL;
  v13 = 0;
  if ( (_DWORD)v8 )
  {
    v14 = a4;
    do
    {
      if ( _bittest(&a3, v13) )
      {
        v11 += *(unsigned __int16 *)(*(_QWORD *)v14 + 2LL);
        RegionSize = v11;
      }
      ++v13;
      v14 += 8;
    }
    while ( v13 < (unsigned int)v8 );
  }
  v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  if ( v12 >= 0 )
  {
    v15 = (char *)BaseAddress;
    v30 = BaseAddress;
    v16 = (char *)BaseAddress + 80;
    v28 = (char *)BaseAddress + 80;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v8; i = (unsigned int)(i + 1) )
    {
      if ( _bittest(&a3, i) )
      {
        v34 = 8 * i;
        v18 = 2LL * (unsigned int)i;
        v32 = v18 * 8;
        v33 = v18 * 8;
        v35 = &v40[v18];
        *(_OWORD *)v35 = *(_OWORD *)*(_QWORD *)&a4[8 * i];
        *(_QWORD *)&v15[v18 * 8 + 8] = v16;
        *(_WORD *)&v15[v18 * 8 + 2] = WORD1(v40[v18]);
        *(_WORD *)&v15[v18 * 8] = v40[v18];
        memmove(v16, v40[v18 + 1], WORD1(v40[v18]));
        v40[v18 + 1] = v16;
        v16 += WORD1(v40[v18]);
        v28 = v16;
        v19 = v34;
        *(_QWORD *)((char *)v38 + v34) = &v15[v33];
        *(_QWORD *)((char *)v36 + v19) = v35;
      }
    }
    v9 = v29;
LABEL_19:
    v12 = ExpRaiseHardError(a1, v8, a3, (unsigned int)v38, (__int64)v36, a5, (__int64)&v22);
    v10 = v22;
  }
LABEL_20:
  *v9 = v10;
  if ( BaseAddress )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v12;
}
