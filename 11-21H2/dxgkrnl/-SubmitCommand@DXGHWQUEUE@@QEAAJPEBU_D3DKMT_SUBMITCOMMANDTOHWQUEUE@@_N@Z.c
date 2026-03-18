/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C022354A
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0223D28 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C00019F8 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0001B60 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1C01DBD18 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z @ 0x1C030DA70 (-AllocateElements@-$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C0317E84 (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::SubmitCommand(
        struct _SLIST_ENTRY **this,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a2,
        char a3)
{
  struct _SLIST_ENTRY *v6; // rcx
  char v7; // r13
  UINT PrivateDriverDataSize; // eax
  UINT Next; // edx
  struct _SLIST_ENTRY *v11; // rcx
  struct _SLIST_ENTRY *v12; // rsi
  void *v13; // r12
  size_t v14; // r8
  const D3DKMT_HANDLE *WrittenPrimaries; // r9
  PVOID v16; // rcx
  struct _SLIST_ENTRY *v17; // r14
  PSLIST_ENTRY v18; // rcx
  UINT v19; // eax
  char *pPrivateDriverData; // r9
  size_t v21; // r8
  struct _SLIST_ENTRY *v22; // rcx
  __int64 v23; // r14
  struct _SLIST_ENTRY *v24; // rax
  UINT v25; // r14d
  ADAPTER_RENDER *v26; // r13
  __int64 v27; // r8
  int v28; // eax
  struct _SLIST_ENTRY **v29; // rdx
  __int64 v30; // r8
  PSLIST_ENTRY *p_Next; // r12
  struct _SLIST_ENTRY *v32; // rax
  int v33; // eax
  UINT i; // r12d
  __int64 v35; // r8
  struct _SLIST_ENTRY *v36; // rcx
  struct _SLIST_ENTRY *v37; // rcx
  struct _SLIST_ENTRY *v39; // [rsp+58h] [rbp-2D0h]
  struct _SLIST_ENTRY *v40[2]; // [rsp+60h] [rbp-2C8h] BYREF
  void *v41; // [rsp+70h] [rbp-2B8h]
  DXGHWQUEUE *v42; // [rsp+78h] [rbp-2B0h]
  int Next_high; // [rsp+80h] [rbp-2A8h]
  const D3DKMT_HANDLE *v44; // [rsp+88h] [rbp-2A0h]
  PVOID v45; // [rsp+90h] [rbp-298h]
  __int64 v46; // [rsp+98h] [rbp-290h]
  char *v47; // [rsp+A0h] [rbp-288h]
  struct _SLIST_ENTRY *v48; // [rsp+A8h] [rbp-280h]
  struct _DXGKARG_VALIDATESUBMITCOMMAND v49; // [rsp+B0h] [rbp-278h] BYREF
  PVOID P; // [rsp+2E0h] [rbp-48h] BYREF
  char v51; // [rsp+2E8h] [rbp-40h] BYREF
  unsigned int v52; // [rsp+2F0h] [rbp-38h]

  v42 = (DXGHWQUEUE *)this;
  LODWORD(v39) = 0x8000000;
  v6 = this[2];
  Next_high = HIDWORD(v6[25].Next);
  v7 = (4 * Next_high) & 0x80;
  HIDWORD(v39) = (unsigned __int8)v7;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  Next = (UINT)v6[13].Next;
  if ( PrivateDriverDataSize > Next )
  {
    WdLogSingleEntry2(1LL, PrivateDriverDataSize, Next);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PrivateDriverDataSize > m_ContextInfo.DmaBufferPrivateDataSize 0x%I64x, 0x%I64x",
      a2->PrivateDriverDataSize,
      LODWORD(this[2][13].Next),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v11 = v6[1].Next[1].Next;
  v40[0] = 0LL;
  v40[1] = v11;
  CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v40);
  v12 = v40[0];
  if ( !v40[0] )
  {
    WdLogSingleEntry1(6LL, 945LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate VidSchSubmitData",
      945LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_57:
    CVidSchSubmitData::~CVidSchSubmitData(v40);
    return 3221225495LL;
  }
  v40[0]->Next = v39;
  P = 0LL;
  v52 = 0;
  v13 = 0LL;
  v41 = 0LL;
  if ( a2->NumPrimaries )
  {
    if ( a3 )
    {
      if ( !PagedPoolZeroedArray<unsigned int,2>::AllocateElements(&P) )
      {
        WdLogSingleEntry1(6LL, 962LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate WrittenPrimariesLocal",
          962LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( P != &v51 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
        P = 0LL;
        v52 = 0;
        CVidSchSubmitData::~CVidSchSubmitData(v40);
        return 3221225495LL;
      }
      v14 = v52;
      WrittenPrimaries = a2->WrittenPrimaries;
      v44 = WrittenPrimaries;
      v16 = P;
      v45 = P;
      if ( &WrittenPrimaries[v14] < WrittenPrimaries || (unsigned __int64)&WrittenPrimaries[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, WrittenPrimaries, v14 * 4);
      v13 = P;
    }
    else
    {
      v13 = (void *)a2->WrittenPrimaries;
    }
    v41 = v13;
  }
  if ( a2->PrivateDriverDataSize )
  {
    v17 = this[2][31].Next;
    ++HIDWORD(v17[1].Next);
    v18 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v17);
    if ( !v18 )
    {
      ++*((_DWORD *)&v17[1].Next + 2);
      v18 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _SLIST_ENTRY *))v17[3].Next)(
                            HIDWORD(v17[2].Next),
                            *((unsigned int *)&v17[2].Next + 3),
                            *((unsigned int *)&v17[2].Next + 2),
                            v17);
    }
    if ( !v18 )
    {
      if ( P != &v51 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v52 = 0;
      goto LABEL_57;
    }
    v12[1].Next = v18;
    v19 = a2->PrivateDriverDataSize;
    v18->Next = v17;
    *((_DWORD *)&v18->Next + 2) = v19;
    *((_DWORD *)&v18->Next + 3) = 1;
    pPrivateDriverData = (char *)a2->pPrivateDriverData;
    v21 = a2->PrivateDriverDataSize;
    v22 = v12[1].Next + 1;
    if ( a3 )
    {
      v46 = a2->PrivateDriverDataSize;
      v47 = pPrivateDriverData;
      v48 = v22;
      if ( &pPrivateDriverData[v21] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v21] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v22, pPrivateDriverData, v21);
    }
    else
    {
      memmove(v22, a2->pPrivateDriverData, v21);
    }
  }
  if ( v7 >= 0 )
  {
    v25 = a2->PrivateDriverDataSize;
    if ( v25 )
    {
      v26 = (ADAPTER_RENDER *)this[2][1].Next[1].Next;
      if ( *(_QWORD *)(*((_QWORD *)v26 + 2) + 1352LL) )
      {
        memset(&v49, 0, sizeof(v49));
        v49.Flags.Value = 1;
        v49.Commands = a2->CommandBuffer;
        v49.CommandLength = a2->CommandLength;
        v49.ContextCount = 1;
        v49.Context[0] = this[4];
        v49.pPrivateDriverData = &v12[1].Next[1];
        v49.PrivateDriverDataSize = v25;
        v49.UmdPrivateDataSize = v25;
        v49.HwQueueProgressFenceId = a2->HwQueueProgressFenceId;
        v28 = ADAPTER_RENDER::DdiValidateSubmitCommand(v26, &v49, v27);
        LODWORD(v23) = v28;
        if ( v28 < 0 )
        {
          v29 = (struct _SLIST_ENTRY **)v28;
          v30 = 1046LL;
          goto LABEL_49;
        }
      }
    }
LABEL_33:
    *((_QWORD *)&v12[2].Next + 1) = a2->CommandBuffer;
    HIDWORD(v12[3].Next) = a2->CommandLength;
    LODWORD(v12[5].Next) = a2->PrivateDriverDataSize;
    v12[31].Next = (struct _SLIST_ENTRY *)a2->HwQueueProgressFenceId;
    *((_DWORD *)&v12[31].Next + 2) = 1;
    *((_QWORD *)&v12[32].Next + 1) = this[7];
    v12[32].Next = this[8];
    v24 = this[2][1].Next[1].Next;
    LODWORD(v23) = (*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *, _QWORD, void *, int, struct _SLIST_ENTRY **, struct _SLIST_ENTRY *, _QWORD))(*(_QWORD *)(*((_QWORD *)&v24[40].Next + 1) + 8LL) + 872LL))(
                     v24[41].Next,
                     this[2][1].Next,
                     a2->NumPrimaries,
                     v13,
                     1,
                     &v12[12].Next + 1,
                     this[5],
                     0LL);
    if ( (int)v23 < 0 )
    {
      WdLogSingleEntry1(3LL, 1072LL);
      goto LABEL_50;
    }
    p_Next = &v12[1].Next;
    v32 = v12[1].Next;
    if ( v32 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v32->Next + 3);
      v12 = v40[0];
    }
    this[10] = (struct _SLIST_ENTRY *)((char *)this[10] + 1);
    v12[34].Next = this[10];
    v33 = (*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, struct _SLIST_ENTRY *))(*((_QWORD *)&this[2][1].Next[1].Next[39].Next->Next
                                                                                    + 1)
                                                                                  + 432LL))(
            this[5],
            v12);
    v23 = v33;
    if ( v33 >= 0 )
      goto LABEL_50;
    if ( *p_Next )
      CRefCountedBuffer::RefCountedBufferRelease(*p_Next);
    for ( i = 0; i < a2->NumPrimaries; ++i )
    {
      v35 = *((_QWORD *)&v12[13].Next + i);
      if ( v35 )
      {
        v36 = this[2][1].Next[1].Next;
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, _QWORD, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)&v36[40].Next
                                                                                             + 1)
                                                                                           + 8LL)
                                                                               + 440LL))(
          v36[41].Next,
          0LL,
          v35,
          0LL);
      }
    }
    v30 = v23;
    v29 = this;
LABEL_49:
    WdLogSingleEntry2(3LL, v29, v30);
    goto LABEL_50;
  }
  LODWORD(v23) = CheckNoKmdAccessPrivateData(a2->PrivateDriverDataSize, &v12[1].Next[1], 0xFF000002);
  if ( (int)v23 >= 0 )
    goto LABEL_33;
LABEL_50:
  v37 = v12[1].Next;
  if ( v37 )
    CRefCountedBuffer::RefCountedBufferRelease(v37);
  if ( P != &v51 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v52 = 0;
  CVidSchSubmitData::~CVidSchSubmitData(v40);
  return (unsigned int)v23;
}
