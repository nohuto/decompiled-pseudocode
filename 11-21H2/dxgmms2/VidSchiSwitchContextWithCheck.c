/*
 * XREFs of VidSchiSwitchContextWithCheck @ 0x1C000AEB0
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009B20 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0005BF0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiCheckPreemptionPolicy @ 0x1C0006F90 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     VidSchiDecrementDeviceReference @ 0x1C0013948 (VidSchiDecrementDeviceReference.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0017B68 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ @ 0x1C0017D88 (-HasOutstandingPresentReferences@_VIDMM_GLOBAL_ALLOC_NONPAGED@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiSwitchContextWithCheck(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // r12d
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rbx
  int v18; // r10d
  _DWORD *v19; // r9
  unsigned int v20; // eax
  int v21; // r8d
  _VIDMM_GLOBAL_ALLOC_NONPAGED *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // r8
  __int64 v28; // r8
  _QWORD *v29; // rdx
  KSPIN_LOCK *v30; // rdi
  _QWORD *v31; // rax
  LARGE_INTEGER v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // r8
  __int64 *v35; // rdx
  __int64 v36; // rcx
  __int64 **v37; // rax
  __int64 v38; // rcx
  void (__fastcall *v39)(_QWORD); // rax
  LARGE_INTEGER v40; // rcx
  unsigned __int128 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  void *v44; // rcx
  __int64 v45; // rcx
  void (__fastcall *v46)(_QWORD); // rax
  _QWORD *v47; // rax
  union _LARGE_INTEGER v48; // [rsp+B0h] [rbp+8h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v50; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v51; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 96);
  v3 = 1;
  v4 = *(_QWORD *)(v1 + 24);
  if ( *(_DWORD *)(v4 + 3012) || (*(_BYTE *)(v4 + 3036) & 1) != 0 )
    goto LABEL_22;
  v5 = *(_QWORD *)(a1 + 648);
  v6 = *(_QWORD *)(v5 + 88);
  v7 = *(_QWORD *)(v6 + 104);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 96) + 24LL);
  if ( !*(_BYTE *)(v7 + 204)
    && !_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0)
    && !*(_DWORD *)(v8 + 3012)
    && !*(_DWORD *)(v5 + 48)
    && (*(_DWORD *)(v5 + 64) & 8) == 0 )
  {
    v18 = *(_DWORD *)(v7 + 1576);
    v19 = (_DWORD *)(v5 + 472);
    v20 = *(_DWORD *)(v5 + 472);
    if ( v20 > 0x10 )
    {
      if ( *(_DWORD *)(v8 + 804) )
      {
LABEL_55:
        if ( *(_QWORD *)(a1 + 48) )
        {
LABEL_58:
          VidSchiUpdateContextStatus(a1, 3LL, 16056LL);
          return 3LL;
        }
        v35 = (__int64 *)(a1 + 40);
        v36 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3520LL;
        v37 = *(__int64 ***)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL) + 3528LL);
        if ( *v37 == (__int64 *)v36 )
        {
          *v35 = v36;
          *(_QWORD *)(a1 + 48) = v37;
          *v37 = v35;
          *(_QWORD *)(v36 + 8) = v35;
          goto LABEL_58;
        }
LABEL_91:
        __fastfail(3u);
      }
    }
    else
    {
      v21 = 0;
      if ( v20 )
      {
        do
        {
          if ( (v22 = *(_VIDMM_GLOBAL_ALLOC_NONPAGED **)(*(_QWORD *)&v19[2 * v21 + 2] + 96LL), v18)
            || (v23 = *(_DWORD *)v22, (*(_DWORD *)v22 & 0x20000000) != 0) && v23 < 0
            || (v23 & 0x80000) != 0
            || (v23 & 0x100) != 0 )
          {
            if ( _VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(v22) )
              goto LABEL_55;
          }
        }
        while ( (unsigned int)++v21 < *v19 );
      }
    }
  }
  v9 = *(_DWORD *)(a1 + 644);
  v10 = *(_DWORD *)(v1 + 11240);
  v50 = 0LL;
  if ( (v9 & 0xF) != 0 )
    goto LABEL_22;
  if ( (*(_DWORD *)(a1 + 112) & 0x10) == 0 )
    goto LABEL_22;
  v11 = *(_QWORD *)(a1 + 104);
  if ( *(_BYTE *)(v11 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 200), 0, 0) )
    goto LABEL_22;
  if ( VidSchiCheckPreemptionPolicy(a1, &v50) )
  {
    v3 = 4;
    goto LABEL_21;
  }
  v13 = v50;
  if ( v50 != -1 )
  {
    v48.QuadPart = 0LL;
    v40 = KeQueryPerformanceCounter(&v48);
    v41 = (unsigned __int64)v40.QuadPart * (unsigned __int128)0x989680uLL;
    v51 = *((_QWORD *)&v41 + 1);
    if ( is_mul_ok(v40.QuadPart, 0x989680uLL) )
      v42 = v41 / (unsigned __int64)v48.QuadPart;
    else
      v42 = 10000000 * (v40.QuadPart / (unsigned __int64)v48.QuadPart)
          + 10000000 * (v40.QuadPart % (unsigned __int64)v48.QuadPart) / v48.QuadPart;
    v43 = *(_QWORD *)(v1 + 96);
    *(_QWORD *)(v1 + 128) = v42 + v13;
    *(_QWORD *)(v1 + 136) = v43;
    WdLogSingleEntry2(4LL, *(unsigned __int16 *)(v1 + 4), v43);
  }
  v14 = *(_QWORD *)(v1 + 8LL * *(unsigned int *)(v1 + 1560) + 1568);
  if ( v13 == -1 && !*(_DWORD *)(v1 + 2904) && (*(_DWORD *)(v1 + 2884) > 1u || v14 && a1 != v14) )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v32 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(v32.QuadPart, 0x989680uLL) )
    {
      if ( PerformanceFrequency.QuadPart == 10000000 )
        v33 = 10000000 * v32.QuadPart / 0x989680uLL;
      else
        v33 = (unsigned __int64)(10000000 * v32.QuadPart) / PerformanceFrequency.QuadPart;
    }
    else
    {
      v33 = 10000000 * (v32.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
          + 10000000 * (v32.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    }
    v34 = *(_QWORD *)(v1 + 96);
    *(_QWORD *)(v1 + 128) = *(_QWORD *)(a1 + 480) + v33;
    *(_QWORD *)(v1 + 144) = v34;
    WdLogSingleEntry2(4LL, *(unsigned __int16 *)(v1 + 4), v34);
  }
  if ( *(int *)(v1 + 2880) > 0 && *(_DWORD *)(v1 + 2896) < *(_DWORD *)(v4 + 228) && !*(_DWORD *)(v1 + 2904) )
  {
LABEL_21:
    if ( v10 != -1 )
    {
      v38 = *(_QWORD *)(a1 + 648);
      if ( (*(_DWORD *)(v38 + 80) & 0x10) == 0 )
      {
        if ( *(_DWORD *)(v1 + 11240) != -1 )
        {
          v39 = *(void (__fastcall **)(_QWORD))(v4 + 3080);
          if ( v39 )
          {
            v39(*(_QWORD *)(v4 + 3120));
            v38 = *(_QWORD *)(a1 + 648);
          }
        }
        *(_DWORD *)(v38 + 80) |= 0x10u;
      }
      if ( !*(_BYTE *)(v1 + 11244) )
      {
        VidSchiUpdateContextStatus(a1, 8LL, 16223LL);
        return 3LL;
      }
    }
LABEL_22:
    v15 = *(_QWORD *)(a1 + 96);
    v16 = *(_QWORD *)(v15 + 216);
    if ( v16 != a1 )
    {
      VidSchiProfilePerformanceTick(3LL, *(_QWORD *)(v15 + 24), v15, 0LL, a1, 0LL, 0LL, *(_QWORD *)(v15 + 216));
      if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 72)) == 1 )
      {
        if ( !*(_BYTE *)(a1 + 908) )
        {
          WdLogSingleEntry5(0LL, 281LL, 3840LL, a1, 0LL, 0LL);
          __debugbreak();
        }
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 104) + 24LL));
      }
      *(_QWORD *)(v15 + 216) = a1;
      if ( v16 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v16 + 96) + 24LL);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 72), 0xFFFFFFFF) == 1 )
        {
          v25 = *(_QWORD *)(v16 + 96);
          if ( *(_QWORD *)(v25 + 224) == v16 )
            *(_QWORD *)(v25 + 224) = 0LL;
          v26 = *(_QWORD *)(v16 + 8);
          if ( *(_QWORD *)(v26 + 8) != v16 + 8 )
            goto LABEL_91;
          v27 = *(_QWORD **)(v16 + 16);
          if ( *v27 != v16 + 8 )
            goto LABEL_91;
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          v28 = *(_QWORD *)(v16 + 24);
          if ( *(_QWORD *)(v28 + 8) != v16 + 24 )
            goto LABEL_91;
          v29 = *(_QWORD **)(v16 + 32);
          if ( *v29 != v16 + 24 )
            goto LABEL_91;
          *v29 = v28;
          v30 = (KSPIN_LOCK *)(v24 + 1736);
          *(_QWORD *)(v28 + 8) = v29;
          while ( 1 )
          {
            v31 = VidSchiInterlockedRemoveHeadListIfExist(v30, (_QWORD **)(v16 + 712), (_DWORD *)(v16 + 728));
            if ( !v31 )
              break;
            ExFreePoolWithTag(v31 - 1, 0);
          }
          if ( (*(_DWORD *)(v16 + 112) & 0x100) != 0 )
          {
            while ( 1 )
            {
              v47 = VidSchiInterlockedRemoveHeadListIfExist(v30, (_QWORD **)(v16 + 736), (_DWORD *)(v16 + 752));
              if ( !v47 )
                break;
              ExFreePoolWithTag(v47 - 1, 0);
            }
          }
          if ( bTracingEnabled )
            VidSchiFlushGpuWorkEntries((struct _VIDSCH_CONTEXT *)v16);
          v44 = *(void **)(v16 + 992);
          if ( v44 )
            ExFreePoolWithTag(v44, 0);
          VidSchiDecrementDeviceReference(*(PVOID *)(v16 + 104));
          ExFreePoolWithTag((PVOID)v16, 0);
        }
      }
    }
    return v3;
  }
  RtlClearBitEx(v4 + 488, *(unsigned __int16 *)(v1 + 4), v12);
  RtlCopyBitMapEx(v4 + 440, v4 + 536, 0LL);
  RtlIntersectBitMapsEx(v4 + 536, v4 + 488);
  if ( !(unsigned __int8)RtlAreBitsClearEx(v4 + 536, 0LL, *(_QWORD *)(v4 + 536)) )
    return 3LL;
  if ( v10 != -1 )
  {
    v45 = *(_QWORD *)(a1 + 648);
    if ( (*(_DWORD *)(v45 + 80) & 0x10) == 0 )
    {
      if ( *(_DWORD *)(v1 + 11240) != -1 )
      {
        v46 = *(void (__fastcall **)(_QWORD))(v4 + 3080);
        if ( v46 )
        {
          v46(*(_QWORD *)(v4 + 3120));
          v45 = *(_QWORD *)(a1 + 648);
        }
      }
      *(_DWORD *)(v45 + 80) |= 0x10u;
    }
  }
  return 2LL;
}
