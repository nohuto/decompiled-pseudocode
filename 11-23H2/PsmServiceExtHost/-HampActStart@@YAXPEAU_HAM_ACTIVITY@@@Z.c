/*
 * XREFs of ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000C220
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180024B30 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB3C (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BF50 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003DB38 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x180051260 (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007B784 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 */

void __fastcall HampActStart(struct _HAM_ACTIVITY *a1)
{
  __int64 v1; // r8
  char v2; // r12
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  struct _RM_HAM_ACTIVITY_HOST *v6; // rcx
  __int64 v7; // r14
  unsigned int v8; // ecx
  struct _HAM_DEPENDENCY_GROUP *v9; // rbx
  __int64 v10; // rcx
  int v11; // esi
  __int16 v12; // r15
  DWORD v13; // esi
  __int64 v14; // r15
  _QWORD *Value; // rbx
  __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // rdx
  int v19; // eax
  ULONGLONG Ptr; // rbx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  struct _HAM_CLIENT_CONTEXT *v31; // rcx
  __int64 v32; // rax
  char v33; // [rsp+48h] [rbp-C0h] BYREF
  char v34; // [rsp+49h] [rbp-BFh] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v38[5]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v39; // [rsp+A0h] [rbp-68h]
  int v40; // [rsp+A4h] [rbp-64h]
  int v41; // [rsp+A8h] [rbp-60h]
  int v42; // [rsp+ACh] [rbp-5Ch]
  int v43; // [rsp+B0h] [rbp-58h]
  int v44; // [rsp+B4h] [rbp-54h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D8h] [rbp-30h]
  __int128 v48; // [rsp+E8h] [rbp-20h]
  char *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  char *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]

  v1 = *((_QWORD *)a1 + 66);
  v2 = *((_BYTE *)a1 + 562);
  v4 = *(_OWORD *)(v1 + 16);
  UserData = *(struct _EVENT_DATA_DESCRIPTOR *)v1;
  v5 = *(_OWORD *)(v1 + 32);
  *((_BYTE *)a1 + 562) = 3;
  v47 = v4;
  v48 = v5;
  if ( v1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v1);
    *((_QWORD *)a1 + 66) = 0LL;
  }
  v6 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_BYTE *)a1 + 563) = 6;
  HampHostUpdateActivityState(v6);
  v7 = *((_QWORD *)a1 + 10);
  *((_QWORD *)a1 + 64) = *(_QWORD *)(v7 + 816);
  v8 = *(_DWORD *)(v7 + 848);
  v9 = *(struct _HAM_DEPENDENCY_GROUP **)(v7 + 704);
  if ( v8 <= *((_DWORD *)a1 + 97) )
    v8 = *((_DWORD *)a1 + 97);
  *(_DWORD *)(v7 + 848) = v8;
  if ( v9 )
  {
    HampDepGroupAcquireLockExclusive(v9);
    HampDepGroupQueueWorker(v9);
    HampDepGroupReleaseLockExclusive(v9);
  }
  RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 124, 0x2Fu);
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x19u) )
    *(_QWORD *)(v7 + 664) |= 0x400000000000000uLL;
  if ( *((_QWORD *)a1 + 8) )
  {
    v38[0] = *((_QWORD *)a1 + 5);
    v10 = 624LL;
    if ( v7 )
      v10 = v7 + 560;
    v38[2] = 0LL;
    HIWORD(v39) = 0;
    v38[1] = 0LL;
    if ( *(_DWORD *)v10 == 2 )
    {
      v13 = HampLockTrackerId;
      v14 = *(_QWORD *)(v7 + 792);
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *Value |= 0x20uLL;
        ++Value[6];
      }
      v16 = v14 + 584;
      RtlAcquireSRWLockShared(v14 + 584);
      v17 = *(_DWORD *)(v14 + 620);
      v12 = *(_WORD *)(v14 + 616);
      v11 = (unsigned __int8)v17 >> 5;
      CempLockTrackerMarkReleased(HampLockTrackerId, v18, 5LL);
      RtlReleaseSRWLockShared(v16);
      if ( v11 == 4 )
      {
        v11 = 3;
      }
      else if ( v11 != 3 )
      {
        v19 = v11;
        if ( (*(_QWORD *)(v7 + 664) & 0x2000000000000LL) == 0 )
          v19 = 3;
        v11 = v19;
      }
    }
    else
    {
      v11 = 4;
      v12 = 6912;
    }
    Ptr = UserData.Ptr;
    LOWORD(v39) = v12;
    v38[4] = UserData.Ptr;
    v39 = (v11 << 16) | v39 & 0xFFF8FFFF;
    v38[3] = *((_QWORD *)a1 + 64);
    RtlQueryPerformanceFrequency(&v36);
    v21 = -1LL;
    if ( *(_QWORD *)&UserData.Size )
    {
      v22 = -1LL;
      v35 = ((*(_QWORD *)&UserData.Size - Ptr) * (unsigned __int128)0x3E8uLL) >> 64;
      if ( is_mul_ok(*(_QWORD *)&UserData.Size - Ptr, 0x3E8uLL) )
        v22 = 1000 * (*(_QWORD *)&UserData.Size - Ptr);
      v23 = v22 / v36;
      if ( v22 / v36 > 0xFFFFFFFF )
        LODWORD(v23) = -1;
    }
    else
    {
      LODWORD(v23) = -1;
    }
    v40 = v23;
    if ( (_QWORD)v47 )
    {
      v24 = -1LL;
      v35 = ((unsigned __int64)(v47 - *(_QWORD *)&UserData.Size) * (unsigned __int128)0x3E8uLL) >> 64;
      if ( is_mul_ok(v47 - *(_QWORD *)&UserData.Size, 0x3E8uLL) )
        v24 = 1000 * (v47 - *(_QWORD *)&UserData.Size);
      v25 = v24 / v36;
      if ( v24 / v36 > 0xFFFFFFFF )
        LODWORD(v25) = -1;
    }
    else
    {
      LODWORD(v25) = -1;
    }
    v41 = v25;
    if ( *((_QWORD *)&v47 + 1) )
    {
      v26 = -1LL;
      v35 = ((unsigned __int64)(*((_QWORD *)&v47 + 1) - v47) * (unsigned __int128)0x3E8uLL) >> 64;
      if ( is_mul_ok(*((_QWORD *)&v47 + 1) - v47, 0x3E8uLL) )
        v26 = 1000 * (*((_QWORD *)&v47 + 1) - v47);
      v27 = v26 / v36;
      if ( v26 / v36 > 0xFFFFFFFF )
        LODWORD(v27) = -1;
    }
    else
    {
      LODWORD(v27) = -1;
    }
    v42 = v27;
    if ( (_QWORD)v48 )
    {
      v28 = -1LL;
      v35 = ((unsigned __int64)(v48 - *((_QWORD *)&v47 + 1)) * (unsigned __int128)0x3E8uLL) >> 64;
      if ( is_mul_ok(v48 - *((_QWORD *)&v47 + 1), 0x3E8uLL) )
        v28 = 1000 * (v48 - *((_QWORD *)&v47 + 1));
      v29 = v28 / v36;
      if ( v28 / v36 > 0xFFFFFFFF )
        LODWORD(v29) = -1;
    }
    else
    {
      LODWORD(v29) = -1;
    }
    v43 = v29;
    if ( *((_QWORD *)&v48 + 1) )
    {
      v35 = ((unsigned __int64)(*((_QWORD *)&v48 + 1) - v48) * (unsigned __int128)0x3E8uLL) >> 64;
      if ( is_mul_ok(*((_QWORD *)&v48 + 1) - v48, 0x3E8uLL) )
        v21 = 1000 * (*((_QWORD *)&v48 + 1) - v48);
      v30 = v21 / v36;
      if ( v21 / v36 > 0xFFFFFFFF )
        LODWORD(v30) = -1;
    }
    else
    {
      LODWORD(v30) = -1;
    }
    v31 = (struct _HAM_CLIENT_CONTEXT *)*((_QWORD *)a1 + 8);
    v44 = v30;
    HampSystemIssueActivityCallback(v31, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v38, 0);
    v32 = *(_QWORD *)(v7 + 664);
    if ( (v32 & 0x100000000000LL) != 0 && (v32 & 0x30000) != 0 )
      HampActRequestStopEx(a1, 2LL, 5LL, 0LL, (unsigned __int16)v32, 0, 0LL);
  }
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v36 = *((_QWORD *)a1 + 5);
    v33 = v2;
    v51 = &v33;
    v34 = 3;
    v49 = &v34;
    v52 = 1LL;
    *(_QWORD *)&v48 = &v36;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800DB220;
    v50 = 1LL;
    *((_QWORD *)&v48 + 1) = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB220;
    *(_QWORD *)&v47 = &unk_1800C1F4D;
    UserData.Reserved = 2;
    *((_QWORD *)&v47 + 1) = 0x100000037LL;
    LODWORD(v35) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
}
