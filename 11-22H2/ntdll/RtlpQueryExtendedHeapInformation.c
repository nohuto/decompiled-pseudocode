/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x18008AEC0
 * Callers:
 *     RtlQueryHeapInformation @ 0x18008AD00 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180029F10 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18002A090 (RtlLockHeap.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18008A9F0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x18008B358 (RtlpQueryExtendedInformationAllHeaps.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF258 (RtlpHeapPerformCrossProcessQuery.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int ExtendedInformationHeap; // r14d
  __int16 v9; // si
  int v10; // ecx
  unsigned int v11; // r15d
  unsigned __int64 v12; // rdx
  int v14; // esi
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // r14
  _QWORD *v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rdi
  unsigned __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+70h] [rbp-90h]
  _QWORD *v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+80h] [rbp-80h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+88h] [rbp-78h]
  _QWORD *v29; // [rsp+90h] [rbp-70h]
  _QWORD v30[9]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v31; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v32; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v33; // [rsp+F8h] [rbp-8h]
  _QWORD v34[3]; // [rsp+100h] [rbp+0h] BYREF
  int v35; // [rsp+118h] [rbp+18h]
  __int64 v36; // [rsp+120h] [rbp+20h]
  unsigned int v37; // [rsp+128h] [rbp+28h]
  int v38; // [rsp+1A0h] [rbp+A0h]
  HANDLE Handle; // [rsp+1B8h] [rbp+B8h] BYREF

  if ( *a1 == -1 )
  {
    v27 = *((_DWORD *)a1 + 4);
    memset_thunk_772440563353939046(v30, 0, 0x60uLL);
    if ( a1[3] )
    {
      v28 = (__int64 (__fastcall *)())a1[3];
      v6 = (_QWORD *)a1[4];
    }
    else
    {
      v30[0] = a1;
      v32 = (unsigned __int64)(a1 + 5);
      v33 = (unsigned __int64)a1 + a2;
      v6 = v30;
      v31 = a1;
      v28 = RtlpExtendedHeapInformationGenerator;
    }
    v29 = v6;
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
    v7 = a1[1];
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 16) == -571548178 )
        v9 = *(_WORD *)(v7 + 28);
      else
        v9 = *(_WORD *)(v7 + 208);
      if ( v9 != -1 )
        RtlLockHeap(v7);
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(a1[1], (__int64)&v27);
      if ( v9 != -1 )
        RtlUnlockHeap(a1[1]);
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps(&v27);
    }
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
    v10 = 0;
    if ( ExtendedInformationHeap != -2147483622 )
      v10 = ExtendedInformationHeap;
    v11 = v10;
    if ( v28 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v10 >= 0 )
      {
        v12 = v32;
        if ( a3 )
          *a3 = v32 - (_QWORD)v31;
        if ( v12 > v33 )
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
    Handle = 0LL;
    v22 = 0LL;
    v21 = 0x10000LL;
    v14 = NtCreateSection(&Handle, 983071LL, 0LL, &v21, 4, 0x8000000, 0LL);
    if ( v14 >= 0 )
    {
      while ( 1 )
      {
        memset_thunk_772440563353939046(v34, 0, 0x60uLL);
        v15 = *a1;
        v34[2] = a1[1];
        v35 = *((_DWORD *)a1 + 4);
        v34[1] = v21;
        v34[0] = Handle;
        v16 = RtlpHeapPerformCrossProcessQuery(v15, v34);
        v14 = v16;
        if ( v16 != -1073741789 )
          break;
        NtClose(Handle);
        Handle = 0LL;
        v21 = (v36 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
        v14 = NtCreateSection(&Handle, 983071LL, 0LL, &v21, 4, 0x8000000, 0LL);
        if ( v14 < 0 )
          goto LABEL_54;
      }
      if ( v16 >= 0 )
      {
        v23 = 0LL;
        v24 = 0x10000LL;
        v14 = ZwMapViewOfSection(Handle, -1LL, &v22, 0LL, 0x10000LL, &v23, &v24, 2, 0, 4);
        if ( v14 >= 0 )
        {
          v17 = 0LL;
          memset_thunk_772440563353939046(v30, 0, 0x60uLL);
          v25 = (__int64 (__fastcall *)())a1[3];
          if ( v25 )
          {
            v18 = (_QWORD *)a1[4];
          }
          else
          {
            v30[0] = a1;
            v32 = (unsigned __int64)(a1 + 5);
            v31 = a1;
            v33 = (unsigned __int64)a1 + a2;
            v18 = v30;
            v25 = RtlpExtendedHeapInformationGenerator;
          }
          v38 = 0;
          v26 = v18;
          if ( v37 )
          {
            while ( 1 )
            {
              v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v19 >= v21 || v19 >= 2 * v24 || (__int64)(v24 + v23) > (__int64)v21 )
                break;
              v20 = v19 + v22;
              if ( v19 + 16 >= v24 || !*(_DWORD *)v20 )
              {
                NtUnmapViewOfSection(-1LL);
                v22 = 0LL;
                v23 += v24;
                v14 = ZwMapViewOfSection(Handle, -1LL, &v22, 0LL, v24, &v23, &v24, 2, 0, 4);
                if ( v14 < 0 )
                  goto LABEL_46;
                v20 = v22;
                v19 = 0LL;
              }
              v14 = ((__int64 (__fastcall *)(__int64, _QWORD *))v25)(v20, v26);
              if ( v14 >= 0 )
              {
                v17 = *(_QWORD *)(v20 + 8) + v19;
                if ( ++v38 < v37 )
                  continue;
              }
              goto LABEL_46;
            }
            v14 = -1073741762;
          }
LABEL_46:
          if ( v25 == RtlpExtendedHeapInformationGenerator )
          {
            if ( v14 >= 0 )
            {
              if ( a3 )
                *a3 = v32 - (_QWORD)v31;
              if ( v32 > v33 )
                v14 = -1073741789;
            }
          }
          else if ( a3 )
          {
            *a3 = 88LL;
          }
        }
      }
    }
LABEL_54:
    if ( v22 )
      NtUnmapViewOfSection(-1LL);
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v14;
  }
}
