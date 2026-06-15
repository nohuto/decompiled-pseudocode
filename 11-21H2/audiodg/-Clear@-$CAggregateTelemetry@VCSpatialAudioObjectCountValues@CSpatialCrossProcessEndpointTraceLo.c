/*
 * XREFs of ?Clear@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAXXZ @ 0x14008FBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z @ 0x14008EE8C (--0-$CSAutoLock@$00@@QEAA@PEAVCSLock@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::Clear(
        __int64 a1)
{
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  CSAutoLock<1>::CSAutoLock<1>(&lpCriticalSection, *(struct _RTL_CRITICAL_SECTION **)(a1 + 24));
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *(_BYTE *)(a1 + 16) = 0;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
