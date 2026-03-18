/*
 * XREFs of IopLiveDumpEstimateMemoryPages @ 0x140A666B0
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14093AAEC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlClearAllBitsEx @ 0x1402340F0 (RtlClearAllBitsEx.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HvlCalculateLivedumpSize @ 0x14054A8D0 (HvlCalculateLivedumpSize.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055A628 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceBufferEstimation @ 0x14055AA68 (IopLiveDumpTraceBufferEstimation.c)
 *     IopLiveDumpTraceMmDuplicateMemoryFailure @ 0x14055BBDC (IopLiveDumpTraceMmDuplicateMemoryFailure.c)
 *     IopLiveDumpTraceQueryHvlDumpSizeFailure @ 0x14055BE90 (IopLiveDumpTraceQueryHvlDumpSizeFailure.c)
 *     RtlNumberOfSetBitsEx @ 0x1405E6540 (RtlNumberOfSetBitsEx.c)
 *     MmDuplicateMemory @ 0x140A487C0 (MmDuplicateMemory.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x140A659E0 (IopLiveDumpCallRemovePagesCallbacks.c)
 *     IopLiveDumpUncorralProcessors @ 0x140A67A68 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpEstimateMemoryPages(__int64 a1)
{
  __int64 MillisecondCounter; // rax
  __int64 v3; // r15
  int v4; // eax
  int v5; // ecx
  unsigned __int64 v6; // rdx
  int v7; // edi
  unsigned __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rsi
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  bool v13; // zf
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  bool v16; // al
  bool v18; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[3]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v28[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  bool *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  __int64 *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  __int64 *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]

  v27 = 0LL;
  MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  *(_DWORD *)(a1 + 80) |= 1u;
  v19 = 0LL;
  v3 = MillisecondCounter;
  v21 = 0LL;
  v20 = 0LL;
  IopLiveDumpCallRemovePagesCallbacks((_DWORD *)a1);
  v26[0] = IopLiveDumpStartMirroringCallback;
  v26[1] = IopLiveDumpEndMirroringCallback;
  v26[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  v4 = *(_DWORD *)(a1 + 80);
  v5 = (*(_BYTE *)(a1 + 40) & 4) != 0 ? 657 : 593;
  DWORD2(v27) = v5;
  if ( (v4 & 0x20) != 0 )
    DWORD2(v27) = v5 | 0x100;
  v7 = MmDuplicateMemory((__int64)v26);
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v6 = (unsigned __int64)(1000LL * *(_QWORD *)(a1 + 456)) % PerformanceFrequency.QuadPart;
    *(_QWORD *)(a1 + 464) = (unsigned __int64)(1000LL * *(_QWORD *)(a1 + 456)) / PerformanceFrequency.QuadPart;
  }
  if ( v7 < 0 || v7 == 258 )
  {
    if ( (*(_DWORD *)(a1 + 312) & 1) != 0 )
    {
      LOBYTE(v6) = 1;
      IopLiveDumpUncorralProcessors(a1 + 304, v6);
    }
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    IopLiveDumpTraceMmDuplicateMemoryFailure(a1, v7);
    if ( v7 == 258 )
    {
      *(_DWORD *)(a1 + 80) |= 0x40u;
      v7 = -1073740682;
    }
  }
  else
  {
    v8 = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 544));
    v9 = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 96) = v8 + (v8 >> 4);
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    if ( (v9 & 1) != 0 )
    {
      v10 = v9 & 2;
      v11 = 0LL;
      if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
        v11 = IopLiveDumpGetMillisecondCounter(0);
      v7 = HvlCalculateLivedumpSize(v10, &v19, &v21, &v20);
      if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
        *(_QWORD *)(a1 + 288) = IopLiveDumpGetMillisecondCounter(0) - v11;
      if ( v7 < 0 )
      {
        *(_DWORD *)(a1 + 80) |= 0x10u;
        IopLiveDumpTraceQueryHvlDumpSizeFailure(v7);
        if ( (unsigned int)dword_140C064E0 > 5 && tlgKeywordOn((__int64)&dword_140C064E0, 0x400000000000LL) )
        {
          v20 = 0x1000000LL;
          v29 = &v20;
          v16 = (*(_DWORD *)(a1 + 80) & 0x10) != 0;
          v30 = 8LL;
          v18 = v16;
          v32 = 1LL;
          v31 = &v18;
          v33 = &v19;
          LODWORD(v19) = v7;
          v34 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C064E0,
            (unsigned __int8 *)byte_14002B6D0,
            (const GUID *)(a1 + 960),
            (const GUID *)(a1 + 944),
            5u,
            v28);
        }
        v7 = 0;
      }
      else
      {
        v12 = v21;
        v13 = (v21 & 0xFFF) == 0;
        *(_QWORD *)(a1 + 120) = (v19 >> 12) + ((v19 & 0xFFF) != 0);
        v14 = (v12 >> 12) + !v13;
        v15 = v20;
        v13 = (v20 & 0xFFF) == 0;
        *(_QWORD *)(a1 + 128) = v14;
        *(_QWORD *)(a1 + 136) = (v15 >> 12) + !v13;
      }
    }
  }
  *(_QWORD *)(a1 + 432) = IopLiveDumpGetMillisecondCounter(0) - v3;
  IopLiveDumpTraceBufferEstimation();
  RtlClearAllBitsEx(a1 + 544);
  RtlClearAllBitsEx(a1 + 600);
  RtlClearAllBitsEx(a1 + 656);
  *(_DWORD *)(a1 + 80) &= ~1u;
  if ( (unsigned int)dword_140C064E0 > 5 && tlgKeywordOn((__int64)&dword_140C064E0, 0x400000000000LL) )
  {
    v20 = 0x1000000LL;
    v29 = &v20;
    v21 = *(_QWORD *)(a1 + 432);
    v30 = 8LL;
    v31 = (bool *)&v21;
    v19 = *(_QWORD *)(a1 + 440);
    v33 = &v19;
    v22 = *(_QWORD *)(a1 + 448);
    v35 = &v22;
    v23 = *(_QWORD *)(a1 + 464);
    v37 = &v23;
    v24 = *(_QWORD *)(a1 + 472);
    v39 = &v24;
    v25 = *(_QWORD *)(a1 + 288);
    v41 = &v25;
    v32 = 8LL;
    v34 = 8LL;
    v36 = 8LL;
    v38 = 8LL;
    v40 = 8LL;
    v42 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C064E0,
      (unsigned __int8 *)&dword_14002B72C,
      (const GUID *)(a1 + 960),
      (const GUID *)(a1 + 944),
      9u,
      v28);
  }
  return (unsigned int)v7;
}
