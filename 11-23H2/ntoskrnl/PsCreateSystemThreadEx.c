/*
 * XREFs of PsCreateSystemThreadEx @ 0x1407727F0
 * Callers:
 *     MiZeroInParallel @ 0x1403044C0 (MiZeroInParallel.c)
 *     MiInsertNewZeroThread @ 0x1403AD11C (MiInsertNewZeroThread.c)
 *     ExpNodeCreateSystemThread @ 0x140683660 (ExpNodeCreateSystemThread.c)
 *     MiEnablePartitionMappedWrites @ 0x140746D88 (MiEnablePartitionMappedWrites.c)
 *     ExpWatchProductTypeWork @ 0x1407AC220 (ExpWatchProductTypeWork.c)
 *     PsCreateSystemThread @ 0x1407B83E0 (PsCreateSystemThread.c)
 *     NtGetMUIRegistryInfo @ 0x1407CA860 (NtGetMUIRegistryInfo.c)
 *     CmpCreateRegistryThread @ 0x14080AB08 (CmpCreateRegistryThread.c)
 *     KiStartDpcThread @ 0x140821AA0 (KiStartDpcThread.c)
 *     MmStoreRegister @ 0x140833104 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x140834390 (MiInsertPageFileInList.c)
 *     PfTStart @ 0x1408461D0 (PfTStart.c)
 *     PopFxCreateStaticWorkPoolThread @ 0x14084FBE4 (PopFxCreateStaticWorkPoolThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1408566A8 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     MiCreatePerNodeZeroingConductor @ 0x14085F898 (MiCreatePerNodeZeroingConductor.c)
 *     IoCreateSystemThread @ 0x140871EE0 (IoCreateSystemThread.c)
 *     IopStartApcHardError @ 0x140946770 (IopStartApcHardError.c)
 *     PopInitSystemSleeperThread @ 0x14098B9A0 (PopInitSystemSleeperThread.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0C8C (EtwpCovSampCaptureContextStart.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8830 (ExpWatchLicenseInfoWork.c)
 *     NtMapCMFModule @ 0x140A034A0 (NtMapCMFModule.c)
 *     MiZeroHugeRangeCore @ 0x140A2E1AC (MiZeroHugeRangeCore.c)
 *     MiInitializePartitionThreads @ 0x140A2FD90 (MiInitializePartitionThreads.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x140362610 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     PspCreateThread @ 0x140770F94 (PspCreateThread.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        __int64 a1,
        int a2,
        __int128 *a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        _DWORD *a9)
{
  __int128 *v10; // rsi
  int v11; // edi
  char v14; // r12
  __int64 v15; // rbx
  int Thread; // edi
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  int v20; // eax
  __int128 v21; // xmm0
  unsigned int v22; // ebx
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+78h] [rbp-88h]
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __m128i v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int128 v31; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v32[32]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = a8;
  v11 = a2;
  v30 = a5;
  v29 = a6;
  v24 = a2;
  v28 = a7;
  memset(v32, 0, 0x1F5uLL);
  *(_QWORD *)&v27 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  DWORD2(v27) = 0;
  v26 = 0LL;
  v31 = 0LL;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, ((unsigned __int64)KeGetCurrentIrql() << 16) | 4, 0LL, 0LL, 0LL);
  v14 = 0;
  if ( a4 )
  {
    Thread = ObpReferenceObjectByHandleWithTag(a4, 2, (__int64)PsProcessType, 0, 0x72437350u, &v23, 0LL, 0LL);
    if ( Thread < 0 )
      return (unsigned int)Thread;
    v15 = v23;
    v14 = 1;
    v11 = v24;
  }
  else
  {
    v15 = *((_QWORD *)PspSystemPartition + 14);
    v23 = v15;
  }
  if ( (*(_DWORD *)(v15 + 2172) & 0x1000) != 0 )
  {
    if ( !a8 && !a9 )
    {
      v22 = (unsigned __int16)(_InterlockedExchangeAdd(&PspSystemThreadAssignment, 1u) + 1);
      v10 = &v31;
      WORD4(v31) = v22 % KeQueryActiveGroupCount();
      v15 = v23;
      *(_QWORD *)&v31 = qword_140D1EFF8[WORD4(v31)];
    }
    memset(v32, 0, 0x1F8uLL);
    if ( v10 )
    {
      v21 = *v10;
      v20 = 4096;
      DWORD1(v32[0]) = 4096;
      v32[20] = v21;
    }
    else
    {
      v20 = DWORD1(v32[0]);
    }
    if ( a9 )
    {
      DWORD1(v32[0]) = v20 | 0x4000;
      HIDWORD(v32[15]) = *a9;
    }
  }
  if ( a3 )
  {
    v18 = *a3;
    v26 = (__m128i)a3[1];
    v25 = v18;
    v19 = a3[2];
    v26.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8)) | 0x200;
    v27 = v19;
  }
  else
  {
    LODWORD(v25) = 48;
    v27 = 0LL;
    *((_QWORD *)&v25 + 1) = 0LL;
    v26.m128i_i32[2] = 512;
    v26.m128i_i64[0] = 0LL;
  }
  Thread = PspCreateThread(
             a1,
             v11,
             (ULONG_PTR)&v25,
             0LL,
             (_KPROCESS *)v15,
             (unsigned __int64)v32 & -(__int64)((*(_DWORD *)(v15 + 2172) & 0x1000) != 0),
             v30,
             0LL,
             0LL,
             0,
             v29,
             v28,
             0LL);
  if ( v14 )
    ObfDereferenceObjectWithTag((PVOID)v15, 0x72437350u);
  return (unsigned int)Thread;
}
