/*
 * XREFs of sub_14085FAA4 @ 0x14085FAA4
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406C9754 @ 0x1406C9754 (sub_1406C9754.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14085FAA4(__int64 a1, unsigned int a2, char a3)
{
  void *v4; // r14
  char v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ecx
  int v8; // edi
  unsigned int v10; // edi
  _DWORD *PoolWithTag; // rax
  struct _KTHREAD *v12; // rax
  SIZE_T v13; // r15
  _QWORD *v14; // rbx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  void *v18; // rdi
  unsigned __int16 v19; // ax
  unsigned int Length; // [rsp+28h] [rbp-A0h]
  unsigned int Length_4; // [rsp+2Ch] [rbp-9Ch] BYREF
  SIZE_T v23; // [rsp+30h] [rbp-98h]
  _DWORD *v24; // [rsp+38h] [rbp-90h]
  volatile void *Address; // [rsp+40h] [rbp-88h]
  volatile void *v26; // [rsp+48h] [rbp-80h]
  PVOID BaseAddress; // [rsp+50h] [rbp-78h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-70h]
  __int128 Src; // [rsp+78h] [rbp-50h] BYREF
  int v30; // [rsp+88h] [rbp-40h]

  v26 = 0LL;
  LODWORD(v23) = 0;
  Src = 0LL;
  v30 = 0;
  Address = 0LL;
  Length_4 = 0;
  v4 = 0LL;
  v24 = 0LL;
  v5 = 0;
  BaseAddress = 0LL;
  NumberOfBytes = 0LL;
  if ( a2 < 0x20 )
  {
    v8 = -1073741811;
    goto LABEL_11;
  }
  LODWORD(v23) = *(_DWORD *)(a1 + 28);
  Length = *(_DWORD *)(a1 + 24);
  Address = *(volatile void **)(a1 + 8);
  v26 = *(volatile void **)(a1 + 16);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3B0A8, 0LL);
  v5 = 1;
  if ( qword_140D3B0D8 == (PVOID)-1LL )
  {
    v8 = -1073741637;
    goto LABEL_11;
  }
  if ( !qword_140D3B0D8 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3B0A8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140D3B0A8);
    sub_1402AFC00((ULONG_PTR)&qword_140D3B0A8);
    sub_1402F9540((__int64)KeGetCurrentThread());
    v5 = 0;
    if ( Length || (_DWORD)v23 )
    {
      v8 = -1073741811;
      goto LABEL_11;
    }
    *(_QWORD *)&Src = 0x141435049LL;
    *((_QWORD *)&Src + 1) = 1413632087LL;
    v7 = sub_1406C9754((char *)&Src, 0, 0x14u, &Length_4);
    if ( v7 != -1073741789 )
    {
      v8 = -1073741637;
      if ( v7 >= 0 )
        v8 = -1073741701;
      goto LABEL_11;
    }
    v10 = Length_4;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Length_4, 0x54425057u);
    v4 = PoolWithTag;
    v24 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_11;
    }
    *PoolWithTag = 1094930505;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = 1413632087;
    PoolWithTag[3] = v10 - 16;
    v8 = sub_1406C9754((char *)PoolWithTag, 0, v10, &Length_4);
    if ( v8 < 0 )
      goto LABEL_11;
    v12 = KeGetCurrentThread();
    --*((_WORD *)v12 + 242);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3B0A8, 0LL);
    if ( qword_140D3B0D8 )
    {
      if ( qword_140D3B0D8 == (PVOID)-1LL )
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3B0A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(&qword_140D3B0A8);
        sub_1402AFC00((ULONG_PTR)&qword_140D3B0A8);
        sub_1402F9540((__int64)KeGetCurrentThread());
        v8 = -1073741637;
        goto LABEL_11;
      }
    }
    else
    {
      qword_140D3B0D8 = v4;
      v4 = 0LL;
      v24 = 0LL;
    }
    _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3B0A8, 17LL, 1LL);
  }
  v13 = (unsigned int)v23;
  if ( (v23 & 1) == 0 )
  {
    v14 = qword_140D3B0D8;
    if ( *((_BYTE *)qword_140D3B0D8 + 64) != 1
      || *((_BYTE *)qword_140D3B0D8 + 65) != 1
      || (v15 = *((unsigned __int16 *)qword_140D3B0D8 + 33), (v15 & 1) != 0)
      || (v16 = *((_QWORD *)qword_140D3B0D8 + 7)) == 0
      || *((_DWORD *)qword_140D3B0D8 + 10) != 1 )
    {
      v8 = -1073741701;
      goto LABEL_50;
    }
    v17 = *((unsigned int *)qword_140D3B0D8 + 13);
    if ( (unsigned int)v17 > Length || v15 > (unsigned int)v23 )
    {
      v8 = -1073741789;
      *(_DWORD *)(a1 + 24) = v17;
      *(_DWORD *)(a1 + 28) = *((unsigned __int16 *)v14 + 33);
      goto LABEL_50;
    }
    NumberOfBytes = *((unsigned int *)qword_140D3B0D8 + 13);
    v18 = (void *)MmMapIoSpaceEx(v16, v17, 2u);
    BaseAddress = v18;
    if ( !v18 )
    {
      v8 = -1073741670;
      goto LABEL_50;
    }
    *(_QWORD *)a1 = v14[7];
    if ( a3 )
      ProbeForWrite(Address, Length, 4u);
    memmove((void *)Address, v18, *((unsigned int *)v14 + 13));
    v19 = *((_WORD *)v14 + 33);
    if ( v19 )
    {
      if ( a3 )
      {
        ProbeForWrite(v26, v13, 2u);
        v19 = *((_WORD *)v14 + 33);
      }
      memmove((void *)v26, (char *)v14 + 68, v19);
    }
    v8 = 0;
    v5 = 1;
LABEL_11:
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_50;
  }
  v8 = -1073741811;
LABEL_50:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3B0A8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140D3B0A8);
  sub_1402AFC00((ULONG_PTR)&qword_140D3B0A8);
  sub_1402F9540((__int64)KeGetCurrentThread());
LABEL_12:
  if ( BaseAddress )
    MmUnmapVideoDisplay(BaseAddress, NumberOfBytes);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
  return (unsigned int)v8;
}
