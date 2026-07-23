/*
 * XREFs of sub_140851114 @ 0x140851114
 * Callers:
 *     sub_1409DEF5C @ 0x1409DEF5C (sub_1409DEF5C.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402631C0 (KeQueryMaximumProcessorCountEx.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403D35C8 @ 0x1403D35C8 (sub_1403D35C8.c)
 *     sub_1403D3830 @ 0x1403D3830 (sub_1403D3830.c)
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 *     sub_140851328 @ 0x140851328 (sub_140851328.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140851114(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  bool IsHostSilo; // si
  _QWORD *v8; // rax
  __int64 v9; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _WORD *v11; // r10
  __int64 v12; // r8
  unsigned int i; // r9d
  ULONG MaximumProcessorCount; // ebp
  __int64 Pool2; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx

  v4 = *((_QWORD *)sub_140204738(a1) + 108);
  v6 = 0;
  IsHostSilo = PsIsHostSilo(v5);
  if ( !IsHostSilo )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    Pool2 = ExAllocatePool2(72LL, MaximumProcessorCount * (24 * *(_DWORD *)(v4 + 16) + 64), 1635218501LL);
    *(_QWORD *)(v4 + 4144) = Pool2;
    if ( Pool2 )
    {
      v17 = MaximumProcessorCount;
      v18 = Pool2 + ((unsigned __int64)MaximumProcessorCount << 6);
      if ( MaximumProcessorCount )
      {
        v19 = 0LL;
        do
        {
          *(_QWORD *)(v19 + *(_QWORD *)(v4 + 4144)) = v18;
          v19 += 64LL;
          v20 = v18 + 8LL * *(unsigned int *)(v4 + 16);
          *(_QWORD *)(v19 + *(_QWORD *)(v4 + 4144) - 56) = v20;
          v21 = v20 + 8LL * *(unsigned int *)(v4 + 16);
          *(_QWORD *)(v19 + *(_QWORD *)(v4 + 4144) - 48) = v21;
          v18 = v21 + 8LL * *(unsigned int *)(v4 + 16);
          --v17;
        }
        while ( v17 );
      }
      goto LABEL_4;
    }
    return (unsigned int)-1073741801;
  }
  v8 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1467446341LL);
  *(_QWORD *)(v4 + 4168) = v8;
  if ( !v8 )
    return (unsigned int)-1073741801;
  v8[3] = 0LL;
  v8[2] = sub_14062D370;
  *v8 = 0LL;
  *(_DWORD *)(v4 + 4160) = 0;
  ExSubscribeWnfStateChange(v4 + 4152, (int)&qword_140012DC8, 1, 0, (__int64)sub_14062CA70, 0LL);
LABEL_4:
  v9 = PsAttachSiloToCurrentThread(a1);
  sub_1403D3830(v4);
  sub_1403D35C8(
    (_OWORD *)(v4 + 4176),
    (PVOID *)(v4 + 4216),
    (_WORD *)(v4 + 4224),
    (_DWORD *)(v4 + 4228),
    (_QWORD *)(v4 + 4208),
    (_OWORD *)(v4 + 4192));
  if ( IsHostSilo )
    qword_140D68798 = KeQueryPerformanceCounter(0LL).QuadPart;
  sub_140851328(a2);
  if ( IsHostSilo )
    qword_140D687A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  PsDetachSiloFromCurrentThread(v9);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(v4 + 432, 0LL);
  v11 = (_WORD *)(v4 + 4048);
  *(_QWORD *)(v4 + 440) = KeGetCurrentThread();
  v12 = v4 + 156;
  for ( i = 0; i < 8; ++i )
  {
    if ( *v11 )
    {
      *(_WORD *)(v12 + 2) = *v11;
      *(_DWORD *)(v12 - 4) = 1;
      *(_BYTE *)v12 = -1;
      *(_QWORD *)(v12 + 12) = -1LL;
      *(_QWORD *)(v12 + 20) = 0LL;
      *(_DWORD *)(v12 + 4) = 64;
      *(_BYTE *)(v4 + 4064) |= 1 << i;
    }
    ++v11;
    v12 += 32LL;
  }
  *(_QWORD *)(v4 + 440) = 0LL;
  ExReleasePushLockEx(v4 + 432, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  *(_QWORD *)(v4 + 4096) = 0LL;
  *(_QWORD *)(v4 + 4080) = 0LL;
  *(_QWORD *)(v4 + 4088) = 0LL;
  return v6;
}
