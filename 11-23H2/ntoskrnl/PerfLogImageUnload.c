/*
 * XREFs of PerfLogImageUnload @ 0x140697438
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 * Callees:
 *     EtwpTraceImageUnload @ 0x140211D68 (EtwpTraceImageUnload.c)
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     KeAreAllApcsDisabled @ 0x140215000 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeInitializeApc @ 0x1402BE960 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402CC8D0 (KeInsertQueueApc.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     EtwpCoverageSamplerUnloadImage @ 0x1409F3C1C (EtwpCoverageSamplerUnloadImage.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall PerfLogImageUnload(
        unsigned __int16 *a1,
        void *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        int CheckSum,
        int a7,
        int a8,
        unsigned int a9)
{
  __int64 ImageBase; // rbx
  int TimeDateStamp; // edi
  PIMAGE_NT_HEADERS v15; // rax
  __int64 Pool2; // rsi
  __int64 v17; // rdx
  int v18; // eax
  unsigned __int16 *v19; // rcx
  int v20; // [rsp+50h] [rbp-68h]
  __int64 v21; // [rsp+58h] [rbp-60h]
  __int64 v22; // [rsp+60h] [rbp-58h] BYREF
  _OWORD v23[5]; // [rsp+68h] [rbp-50h] BYREF

  ImageBase = 0LL;
  v21 = 0LL;
  v23[0] = 0LL;
  v22 = 0LL;
  TimeDateStamp = 0;
  v20 = 0;
  if ( EtwpHostSiloState != -4572 && (*(_DWORD *)(EtwpHostSiloState + 4572) & 4) != 0 )
    EtwpCoverageSamplerUnloadImage(a3, a4, a5);
  if ( a3 )
  {
    v15 = RtlImageNtHeader(a4);
    if ( v15 )
    {
      CheckSum = v15->OptionalHeader.CheckSum;
      TimeDateStamp = v15->FileHeader.TimeDateStamp;
      v20 = TimeDateStamp;
      ImageBase = v15->OptionalHeader.ImageBase;
      v21 = ImageBase;
    }
  }
  if ( a2 )
  {
    if ( a9 || KeAreAllApcsDisabled() )
    {
      Pool2 = ExAllocatePool2(64LL, 144LL, 1098347589LL);
      if ( Pool2 )
      {
        ObfReferenceObject(a2);
        *(_QWORD *)(Pool2 + 88) = a2;
        *(_QWORD *)(Pool2 + 96) = a3;
        *(_QWORD *)(Pool2 + 104) = a4;
        *(_QWORD *)(Pool2 + 112) = a5;
        *(_DWORD *)(Pool2 + 120) = CheckSum;
        *(_DWORD *)(Pool2 + 124) = TimeDateStamp;
        *(_DWORD *)(Pool2 + 128) = a7;
        *(_DWORD *)(Pool2 + 132) = a8;
        *(_QWORD *)(Pool2 + 136) = ImageBase;
        KeInitializeApc(
          Pool2,
          (__int64)KeGetCurrentThread(),
          0,
          (__int64)xHalTimerWatchdogStop,
          (__int64)EtwpCancelTraceImageUnloadApc,
          (__int64)EtwpTraceImageUnloadApc,
          0,
          Pool2);
        if ( (unsigned __int8)KeInsertQueueApc(Pool2, 0LL, 0LL, 0) )
          return;
        ExFreePoolWithTag((PVOID)Pool2, 0);
        ObfDereferenceObject(a2);
        ImageBase = v21;
        TimeDateStamp = v20;
      }
      v17 = 512LL;
    }
    else
    {
      v17 = 1024LL;
    }
    if ( FltMgrCallbacks )
    {
      v18 = (*(__int64 (__fastcall **)(void *, __int64, _OWORD *, __int64 *))(FltMgrCallbacks + 24))(a2, v17, v23, &v22);
      v19 = (unsigned __int16 *)v23;
      if ( v18 < 0 )
        v19 = a1;
      a1 = v19;
    }
  }
  EtwpTraceImageUnload(a1, a3, (__int64)a4, a5, CheckSum, TimeDateStamp, a7, a8, ImageBase, a9);
  if ( v22 )
    (*(void (**)(void))(FltMgrCallbacks + 32))();
}
