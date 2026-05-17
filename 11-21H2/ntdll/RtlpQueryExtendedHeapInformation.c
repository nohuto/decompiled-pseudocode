/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x18007D9C8
 * Callers:
 *     RtlQueryHeapInformation @ 0x18007D840 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlLockHeap @ 0x180015BE0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x180015C80 (RtlUnlockHeap.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x18007DB40 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpQueryExtendedInformationHeap @ 0x1800833B0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF558 (RtlpHeapPerformCrossProcessQuery.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // r14d
  signed __int32 v9; // edi
  int v10; // ecx
  unsigned int v11; // r14d
  __int64 DeferredCriticalSectionEvent; // r10
  __int16 v14; // si
  int v15; // eax
  unsigned __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // r15
  _QWORD *v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // rdi
  signed __int32 v24[8]; // [rsp+0h] [rbp-100h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+88h] [rbp-78h]
  _QWORD *v33; // [rsp+90h] [rbp-70h]
  _QWORD v34[12]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v35[18]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v36; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v37; // [rsp+1A8h] [rbp+A8h]
  __int64 (__fastcall *v38)(); // [rsp+1B8h] [rbp+B8h]

  v37 = a2;
  if ( (a1 & 7) != 0 )
    return 3221225485LL;
  if ( *(_QWORD *)a1 == -1LL )
  {
    v31 = *(_DWORD *)(a1 + 16);
    memset(v34, 0, sizeof(v34));
    if ( *(_QWORD *)(a1 + 24) )
    {
      v32 = *(__int64 (__fastcall **)())(a1 + 24);
      v6 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v34[0] = a1;
      v34[10] = a1 + 40;
      v34[11] = a1 + a2;
      v6 = v34;
      v34[9] = a1;
      v32 = RtlpExtendedHeapInformationGenerator;
    }
    v33 = v6;
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 16) == -571548178 )
        v14 = *(_WORD *)(v7 + 28);
      else
        v14 = *(_WORD *)(v7 + 208);
      if ( v14 != -1 )
      {
        RtlLockHeap(v7);
        v7 = *(_QWORD *)(a1 + 8);
      }
      v8 = RtlpQueryExtendedInformationHeap(v7, &v31);
      if ( v14 != -1 )
        RtlUnlockHeap(*(_QWORD *)(a1 + 8));
    }
    else
    {
      v8 = RtlpQueryExtendedInformationAllHeaps(&v31);
    }
    if ( !--dword_180178D4C )
    {
      qword_180178D50 = 0LL;
      v9 = _InterlockedCompareExchange(&dword_180178D48, -1, -2);
      if ( v9 != -2 )
      {
        if ( (dword_180178D48 & 1) != 0 )
          RtlpNotOwnerCriticalSection(&RtlpProcessHeapsListLock);
        DeferredCriticalSectionEvent = qword_180178D58;
        if ( !qword_180178D58 )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(&RtlpProcessHeapsListLock);
        v36 = 0;
        while ( v9 != _InterlockedCompareExchange(&dword_180178D48, (v9 & 2 | 1) + v9, v9) )
        {
          RtlBackoff(&v36);
          _m_prefetchw(&dword_180178D48);
          v9 = dword_180178D48;
        }
        if ( (v9 & 2) != 0 )
        {
          if ( DeferredCriticalSectionEvent == -1 )
          {
            _InterlockedOr(v24, 0);
            RtlpWakeByAddress((unsigned __int64)&dword_180178D48, 0);
          }
          else
          {
            v15 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
            if ( v15 < 0 )
            {
              RtlRaiseStatus((unsigned int)v15);
              __debugbreak();
            }
          }
        }
      }
    }
    v10 = 0;
    if ( v8 != -2147483622 )
      v10 = v8;
    v11 = v10;
    if ( v32 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v10 >= 0 )
      {
        v16 = v34[10];
        if ( a3 )
          *a3 = v34[10] - v34[9];
        if ( v16 > v34[11] )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return v11;
  }
  else
  {
    v26 = 0x10000LL;
    Handle = 0LL;
    v27 = 0LL;
    v17 = NtCreateSection(&Handle, 983071LL, 0LL, &v26, 4, 0x8000000, 0LL);
    if ( v17 >= 0 )
    {
      while ( 1 )
      {
        memset(v35, 0, 0x60uLL);
        v18 = *(_QWORD *)a1;
        v35[2] = *(_QWORD *)(a1 + 8);
        LODWORD(v35[3]) = *(_DWORD *)(a1 + 16);
        v35[1] = v26;
        v35[0] = Handle;
        v19 = RtlpHeapPerformCrossProcessQuery(v18, v35);
        v17 = v19;
        if ( v19 != -1073741789 )
          break;
        NtClose(Handle);
        v26 = (v35[4] + 0xFFFFLL) & 0xFFFFFFFFFFFF0000uLL;
        Handle = 0LL;
        v17 = NtCreateSection(&Handle, 983071LL, 0LL, &v26, 4, 0x8000000, 0LL);
        if ( v17 < 0 )
          goto LABEL_71;
      }
      if ( v19 >= 0 )
      {
        v29 = 0x10000LL;
        v28 = 0LL;
        v17 = ZwMapViewOfSection(Handle, -1LL, &v27, 0LL, 0x10000LL, &v28, &v29, 2, 0, 4);
        if ( v17 >= 0 )
        {
          v20 = 0LL;
          memset(v34, 0, sizeof(v34));
          v38 = *(__int64 (__fastcall **)())(a1 + 24);
          if ( v38 )
          {
            v21 = *(_QWORD **)(a1 + 32);
          }
          else
          {
            v34[0] = a1;
            v34[10] = a1 + 40;
            v34[9] = a1;
            v34[11] = a1 + v37;
            v21 = v34;
            v38 = RtlpExtendedHeapInformationGenerator;
          }
          v30 = v21;
          v36 = 0;
          if ( LODWORD(v35[5]) )
          {
            while ( 1 )
            {
              v22 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v22 >= v26 || v22 >= 2 * v29 || (__int64)(v29 + v28) > (__int64)v26 )
                break;
              v23 = v22 + v27;
              if ( v22 + 16 >= v29 || !*(_DWORD *)v23 )
              {
                NtUnmapViewOfSection(-1LL);
                v28 += v29;
                v27 = 0LL;
                v17 = ZwMapViewOfSection(Handle, -1LL, &v27, 0LL, v29, &v28, &v29, 2, 0, 4);
                if ( v17 < 0 )
                  goto LABEL_63;
                v23 = v27;
                v22 = 0LL;
              }
              v17 = ((__int64 (__fastcall *)(__int64, _QWORD *))v38)(v23, v30);
              if ( v17 >= 0 )
              {
                v20 = *(_QWORD *)(v23 + 8) + v22;
                if ( ++v36 < LODWORD(v35[5]) )
                  continue;
              }
              goto LABEL_63;
            }
            v17 = -1073741762;
          }
LABEL_63:
          if ( v38 == RtlpExtendedHeapInformationGenerator )
          {
            if ( v17 >= 0 )
            {
              if ( a3 )
                *a3 = v34[10] - v34[9];
              if ( v34[10] > v34[11] )
                v17 = -1073741789;
            }
          }
          else if ( a3 )
          {
            *a3 = 88LL;
          }
        }
      }
    }
LABEL_71:
    if ( v27 )
      NtUnmapViewOfSection(-1LL);
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v17;
  }
}
