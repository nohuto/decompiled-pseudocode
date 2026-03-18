/*
 * XREFs of ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0025980
 * Callers:
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     GreCreateRectRgn @ 0x1C008E350 (GreCreateRectRgn.c)
 *     NtGdiCreateRectRgn @ 0x1C008E4C0 (NtGdiCreateRectRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??$AllocateIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0025F50 (--$AllocateIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

RGNMEMOBJ *__fastcall RGNMEMOBJ::RGNMEMOBJ(RGNMEMOBJ *this, __int64 a2, int a3)
{
  __int64 v4; // rbp
  _BYTE *v5; // r14
  PVOID v6; // r15
  union _SLIST_HEADER *v7; // rsi
  struct _SLIST_ENTRY *v8; // rdi
  _QWORD *v9; // rax
  __int64 (__fastcall *Alignment)(__int64, __int64, __int64); // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  *((_DWORD *)this + 2) = 0;
  if ( a3 != 1 )
  {
    *(_QWORD *)this = 0LL;
    return this;
  }
  v4 = AllocateIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>();
  if ( v4 )
  {
    v5 = RGNMEMOBJ::s_pSCANLookAsideList;
    v6 = gpLeakTrackingAllocator;
    v7 = (union _SLIST_HEADER *)((char *)RGNMEMOBJ::s_pSCANLookAsideList + 16);
    ++*((_DWORD *)RGNMEMOBJ::s_pSCANLookAsideList + 9);
    v8 = ExpInterlockedPopEntrySList(v7);
    if ( v8
      || (Alignment = (__int64 (__fastcall *)(__int64, __int64, __int64))v7[3].Alignment,
          v12 = *((unsigned int *)&v7[2].HeaderX64 + 3),
          v13 = *((unsigned int *)&v7[2].HeaderX64 + 2),
          v14 = *((unsigned int *)&v7[2].HeaderX64 + 1),
          ++*((_DWORD *)&v7[1].HeaderX64 + 2),
          (v8 = (struct _SLIST_ENTRY *)Alignment(v14, v12, v13)) != 0LL) )
    {
      if ( !*v5 )
        goto LABEL_6;
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v6,
                              v8,
                              BackTrace) )
      {
        ++v8;
LABEL_6:
        *(_QWORD *)(v4 + 88) = v8;
        if ( !v8 )
        {
          REGION::vDeleteREGION((PSLIST_ENTRY)v4);
          *(_QWORD *)this = 0LL;
          return this;
        }
        goto LABEL_7;
      }
      ++*((_DWORD *)&v7[1].HeaderX64 + 3);
      if ( ExQueryDepthSList(v7) < LOWORD(v7[1].Alignment) )
      {
        ExpInterlockedPushEntrySList(v7, v8);
      }
      else
      {
        ++LODWORD(v7[2].Alignment);
        ((void (__fastcall *)(struct _SLIST_ENTRY *))v7[3].Region)(v8);
      }
    }
    v8 = 0LL;
    goto LABEL_6;
  }
LABEL_7:
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 24) = 112;
    *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
    v9 = (_QWORD *)(*(_QWORD *)this + 48LL);
    v9[1] = v9;
    *v9 = v9;
  }
  return this;
}
