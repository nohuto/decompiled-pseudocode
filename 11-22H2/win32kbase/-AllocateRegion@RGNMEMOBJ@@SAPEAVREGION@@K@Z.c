/*
 * XREFs of ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C003E160
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C007D940 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 *     ?bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z @ 0x1C0156794 (-bFastFill@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@JPEAU_POINTFIX@@@Z.c)
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0157530 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?Allocate@?$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C0002D18 (-Allocate@-$CSectionBitmapAllocator@$0IAAA@$0IA@@NSInstrumentation@@QEAAPEAXXZ.c)
 *     ?Create@?$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C000B8B0 (-Create@-$CSectionEntry@$0IAAA@$0IA@@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008F2C4 (-AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ??1?$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ @ 0x1C0091344 (--1-$CSectionEntry@$0GAAA@$0GA@@NSInstrumentation@@AEAA@XZ.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C012C570 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 */

struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(__int64 a1)
{
  unsigned __int64 v1; // r12
  __int64 v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r13
  _QWORD *i; // r15
  __int64 v6; // rsi
  __int64 v7; // rdi
  ULONG ClearBits; // eax
  ULONG v9; // ebp
  ULONG v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rsi
  struct REGION *v14; // rdi
  __int64 v15; // rcx
  struct REGION *result; // rax
  __int64 v17; // rax
  void *v18; // rax
  void *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  _QWORD v23[9]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v24; // [rsp+78h] [rbp+10h]
  __int64 v25; // [rsp+80h] [rbp+18h]
  void *v26; // [rsp+88h] [rbp+20h]

  v1 = (unsigned int)a1;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL) + 56LL);
  if ( !v2 )
    return 0LL;
  if ( *(_BYTE *)(v2 + 36) )
  {
    v14 = (struct REGION *)ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(v2 + 24));
    goto LABEL_12;
  }
  v3 = *(_QWORD *)(v2 + 16);
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  for ( i = *(_QWORD **)v2; i != (_QWORD *)v2; i = (_QWORD *)*i )
  {
    v6 = i[4];
    v23[0] = *(_QWORD *)v6;
    v7 = v23[0];
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    ClearBits = RtlFindClearBits(
                  (PRTL_BITMAP)(*(_QWORD *)(v6 + 24) ^ *(_QWORD *)(v6 + 16)),
                  1u,
                  *(_DWORD *)(v6 + 32) < 0x100u ? *(_DWORD *)(v6 + 32) : 0);
    v9 = ClearBits;
    if ( ClearBits == -1 )
      goto LABEL_19;
    v10 = ClearBits;
    v11 = *(_DWORD *)(v6 + 36);
    v12 = v10 >> 5;
    if ( v11 >= 8 || v12 < v11 )
    {
      v24 = (_QWORD *)(v6 + 8);
      LODWORD(v25) = v12 << 12;
    }
    else
    {
      v25 = v12 << 12;
      v26 = (void *)(v25 + (*(_QWORD *)(v6 + 8) ^ *(_QWORD *)(v6 + 16)));
      v24 = (_QWORD *)(v6 + 8);
      if ( (int)MmCommitSessionMappedView(v26, 4096LL) < 0 )
      {
LABEL_19:
        NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(v23);
        continue;
      }
      memset(v26, 0, 0x1000uLL);
      ++*(_DWORD *)(v6 + 36);
    }
    RtlTestBit((PRTL_BITMAP)(*(_QWORD *)(v6 + 16) ^ *(_QWORD *)(v6 + 24)), v9);
    RtlSetBit((PRTL_BITMAP)(*(_QWORD *)(v6 + 16) ^ *(_QWORD *)(v6 + 24)), v9);
    if ( ++*(_DWORD *)(v6 + 32) >= 0x100u )
      *(_DWORD *)(v6 + 32) = 0;
    v13 = (unsigned int)v25 + (*v24 ^ *(_QWORD *)(v6 + 16));
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    v14 = (struct REGION *)(v13 + ((unsigned __int8)(v9 & 0x1F) << 7));
    if ( v14 )
    {
      ExReleasePushLockSharedEx(v3, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_12;
    }
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v19 = NSInstrumentation::CSectionEntry<32768,128>::Create();
  v20 = v19;
  if ( v19 )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(*((__int64 **)v19 + 4));
    if ( v4 )
    {
      v21 = *(_QWORD *)(v2 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v21, 0LL);
      v22 = *(_QWORD **)(v2 + 8);
      if ( *v22 != v2 )
        __fastfail(3u);
      v20[1] = v22;
      *v20 = v2;
      *v22 = v20;
      *(_DWORD *)(v2 + 32) += 256;
      *(_QWORD *)(v2 + 8) = v20;
      ExReleasePushLockExclusiveEx(v21, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v20);
      ExFreePoolWithTag(v20, 0);
    }
  }
  v14 = (struct REGION *)v4;
LABEL_12:
  result = v14;
  if ( v14 )
  {
    if ( (_DWORD)v1 == 112 )
    {
      v17 = SGDGetSessionState(v15);
      v18 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
              *(NSInstrumentation::CLeakTrackingAllocator **)(v17 + 24),
              *(void **)(*(_QWORD *)(v17 + 24) + 6376LL));
    }
    else
    {
      if ( (unsigned int)v1 <= 0x70 )
        goto LABEL_17;
      v18 = (void *)NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, v1, 0x6E637347u);
    }
    *((_QWORD *)v14 + 4) = v18;
LABEL_17:
    result = v14;
    if ( *((_QWORD *)v14 + 4) )
      return result;
    REGION::vDeleteREGION(v14);
    return 0LL;
  }
  return result;
}
