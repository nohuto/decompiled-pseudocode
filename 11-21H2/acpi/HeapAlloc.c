/*
 * XREFs of HeapAlloc @ 0x1C0014FF0
 * Callers:
 *     ReadObject @ 0x1C000A950 (ReadObject.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     Package @ 0x1C00122B0 (Package.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ParsePackage @ 0x1C0012D00 (ParsePackage.c)
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     ParseField @ 0x1C0015980 (ParseField.c)
 *     NewObjData @ 0x1C0015D5C (NewObjData.c)
 *     IfElse @ 0x1C0015FE0 (IfElse.c)
 *     ReadField @ 0x1C0016430 (ReadField.c)
 *     PushCall @ 0x1C0016ABC (PushCall.c)
 *     PushTerm @ 0x1C0016BE8 (PushTerm.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     Method @ 0x1C0017300 (Method.c)
 *     FindNSObj @ 0x1C00175E0 (FindNSObj.c)
 *     WriteFieldLoop @ 0x1C0017A60 (WriteFieldLoop.c)
 *     WriteField @ 0x1C0017D20 (WriteField.c)
 *     ParseAcquire @ 0x1C0017EA0 (ParseAcquire.c)
 *     CreateXField @ 0x1C0018484 (CreateXField.c)
 *     PushScope @ 0x1C0018570 (PushScope.c)
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 *     Buffer @ 0x1C0018F50 (Buffer.c)
 *     Index @ 0x1C0019050 (Index.c)
 *     Field @ 0x1C0019CE0 (Field.c)
 *     OpRegion @ 0x1C0025430 (OpRegion.c)
 *     ParseString @ 0x1C0027434 (ParseString.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00277F0 (ConcatenateResTemplate.c)
 *     NewNameSpaceObject @ 0x1C0028388 (NewNameSpaceObject.c)
 *     NewObjOwner @ 0x1C00285B8 (NewObjOwner.c)
 *     ParseObjName @ 0x1C0028CA8 (ParseObjName.c)
 *     MidString @ 0x1C0028D90 (MidString.c)
 *     ToHexStr @ 0x1C0028EF0 (ToHexStr.c)
 *     InitMutex @ 0x1C002AFB0 (InitMutex.c)
 *     PowerRes @ 0x1C002B420 (PowerRes.c)
 *     Processor @ 0x1C002B9F0 (Processor.c)
 *     InitEvent @ 0x1C002DF60 (InitEvent.c)
 *     IndexField @ 0x1C002E000 (IndexField.c)
 *     Simulator_Copy_Arguments @ 0x1C0064C68 (Simulator_Copy_Arguments.c)
 *     LoadFieldUnitDDB @ 0x1C00683E8 (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0068620 (BankField.c)
 *     RawFieldAccess @ 0x1C0069244 (RawFieldAccess.c)
 *     ToDecStr @ 0x1C006AF60 (ToDecStr.c)
 *     ConvertToBuffer @ 0x1C006B518 (ConvertToBuffer.c)
 *     ConvertToString @ 0x1C006B6E8 (ConvertToString.c)
 *     ParseFieldConnection @ 0x1C006BCC4 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00BCDB8 (AMLIInitialize.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00C0760 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     NewGlobalHeap @ 0x1C0022190 (NewGlobalHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

_SLIST_ENTRY *__fastcall HeapAlloc(struct _SLIST_ENTRY *a1, int a2, unsigned int a3)
{
  __int64 v3; // r14
  int v4; // edi
  _SLIST_ENTRY *v6; // rbx
  struct _SLIST_ENTRY *v7; // r15
  int v8; // ebp
  unsigned int v9; // ebp
  KIRQL v10; // al
  PSLIST_ENTRY v11; // rsi
  struct _SLIST_ENTRY *v12; // rcx
  char *v13; // rax
  _SLIST_ENTRY *v14; // rcx
  _SLIST_ENTRY *Next; // rax
  int v16; // r13d
  __int64 v17; // rdi
  char *v18; // rax
  _SLIST_ENTRY *v20; // rcx
  _SLIST_ENTRY **v21; // rdx
  _SLIST_ENTRY *v22; // r8
  _SLIST_ENTRY **v23; // rdx
  unsigned int v24; // eax
  _SLIST_ENTRY **v25; // rax
  _SLIST_ENTRY *v26; // rcx
  _SLIST_ENTRY *v27; // r9
  _SLIST_ENTRY *v28; // r10
  __int64 v29; // rcx
  _SLIST_ENTRY **v30; // rax
  _SLIST_ENTRY **v31; // r10
  __int64 v32; // rcx
  __int64 Next_high; // r11
  int v34; // eax
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY **v36; // rax
  _SLIST_ENTRY *v37; // rcx
  _SLIST_ENTRY **v38; // rax
  _SLIST_ENTRY *v39; // r8
  _SLIST_ENTRY *v40; // rcx
  _SLIST_ENTRY **v41; // rax
  struct _SLIST_ENTRY *v43; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = a2;
  v6 = 0LL;
  v7 = 0LL;
  if ( a3 + 16 < a3 )
    return (_SLIST_ENTRY *)v3;
  if ( a3 + 16 < 0x20 )
  {
    v8 = 39;
  }
  else
  {
    v8 = a3 + 23;
    if ( a3 + 23 < a3 + 16 )
      return (_SLIST_ENTRY *)v3;
  }
  v9 = v8 & 0xFFFFFFF8;
  v10 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v43 = a1;
  v11 = a1;
  byte_1C0082868 = v10;
  if ( !a1 )
    goto LABEL_14;
  v12 = a1;
  while ( 1 )
  {
    v13 = (char *)*((_QWORD *)&v11[2].Next + 1);
    v7 = v12;
    v14 = (struct _SLIST_ENTRY *)((char *)v12 + 40);
    v6 = (_SLIST_ENTRY *)(v13 - 16);
    if ( v14 == (_SLIST_ENTRY *)v13 )
    {
      v6 = 0LL;
      goto LABEL_12;
    }
    while ( v9 > HIDWORD(v6->Next) )
    {
      Next = v6[1].Next;
      v6 = Next - 1;
      if ( v14 == Next )
      {
        v6 = 0LL;
        goto LABEL_12;
      }
    }
    if ( v6 )
    {
      v20 = v6[1].Next;
      if ( *(&v20->Next + 1) != &v6[1] )
        goto LABEL_54;
      v21 = (_SLIST_ENTRY **)*((_QWORD *)&v6[1].Next + 1);
      if ( *v21 != &v6[1] )
        goto LABEL_54;
      *v21 = v20;
      *((_QWORD *)&v20->Next + 1) = v21;
      if ( HIDWORD(v6->Next) >= (unsigned __int64)v9 + 32 )
      {
        v22 = (_SLIST_ENTRY *)((char *)v6 + v9);
        LODWORD(v22->Next) = 0;
        v23 = &v11[2].Next + 1;
        v24 = HIDWORD(v6->Next) - v9;
        *((_QWORD *)&v22->Next + 1) = v11;
        HIDWORD(v22->Next) = v24;
        HIDWORD(v6->Next) = v9;
        v25 = (_SLIST_ENTRY **)*((_QWORD *)&v11[2].Next + 1);
        if ( v25 != &v11[2].Next + 1 )
        {
          do
          {
            if ( &v22[1] < (_SLIST_ENTRY *)v25 )
              break;
            v25 = (_SLIST_ENTRY **)*v25;
          }
          while ( v25 != v23 );
        }
        v26 = v25[1];
        v27 = v22 + 1;
        if ( (_SLIST_ENTRY **)v26->Next != v25 )
          goto LABEL_54;
        *((_QWORD *)&v22[1].Next + 1) = v26;
        v27->Next = (_SLIST_ENTRY *)v25;
        v26->Next = v27;
        v25[1] = v27;
        v28 = v27->Next;
        v29 = (__int64)&v27->Next[-1];
        if ( (_SLIST_ENTRY **)v27->Next != v23 )
        {
          Next_high = HIDWORD(v22->Next);
          if ( (_SLIST_ENTRY *)v29 == (_SLIST_ENTRY *)((char *)v22 + Next_high) )
          {
            HIDWORD(v22->Next) = Next_high + *(_DWORD *)(v29 + 4);
            v35 = v28->Next;
            if ( *(&v28->Next->Next + 1) != v28 )
              goto LABEL_54;
            v36 = (_SLIST_ENTRY **)*((_QWORD *)&v28->Next + 1);
            if ( *v36 != v28 )
              goto LABEL_54;
            *v36 = v35;
            *((_QWORD *)&v35->Next + 1) = v36;
          }
        }
        v30 = (_SLIST_ENTRY **)*((_QWORD *)&v22[1].Next + 1);
        v31 = v30 - 2;
        if ( v30 != v23 )
        {
          v32 = *((unsigned int *)v31 + 1);
          if ( v22 == (_SLIST_ENTRY *)((char *)v31 + v32) )
          {
            *((_DWORD *)v31 + 1) = HIDWORD(v22->Next) + v32;
            v37 = v27->Next;
            if ( *(&v27->Next->Next + 1) != v27 )
              goto LABEL_54;
            v38 = (_SLIST_ENTRY **)*((_QWORD *)&v22[1].Next + 1);
            if ( *v38 != v27 )
              goto LABEL_54;
            *v38 = v37;
            v22 = (_SLIST_ENTRY *)v31;
            *((_QWORD *)&v37->Next + 1) = v38;
          }
        }
        if ( v11[2].Next <= (_SLIST_ENTRY *)((char *)v22 + HIDWORD(v22->Next)) )
        {
          v11[2].Next = v22;
          v39 = v22 + 1;
          v40 = v39->Next;
          if ( *(&v39->Next->Next + 1) == v39 )
          {
            v41 = (_SLIST_ENTRY **)*((_QWORD *)&v39->Next + 1);
            if ( *v41 == v39 )
            {
              *v41 = v40;
              *((_QWORD *)&v40->Next + 1) = v41;
              goto LABEL_22;
            }
          }
LABEL_54:
          __fastfail(3u);
        }
      }
LABEL_22:
      LODWORD(v6->Next) = v4;
      *((_QWORD *)&v6->Next + 1) = v11;
      memset(&v6[1], 0, v9 - 16LL);
      goto LABEL_23;
    }
LABEL_12:
    if ( v9 <= *((_DWORD *)&v11->Next + 2) - LODWORD(v11[2].Next) )
      break;
    v12 = (struct _SLIST_ENTRY *)*((_QWORD *)&v11[1].Next + 1);
    v43 = v12;
    v11 = v12;
    if ( !v12 )
      goto LABEL_14;
  }
  v6 = v11[2].Next;
  v11[2].Next = (_SLIST_ENTRY *)((char *)v6 + v9);
  HIDWORD(v6->Next) = v9;
  if ( v6 )
    goto LABEL_22;
LABEL_14:
  if ( a1 != (struct _SLIST_ENTRY *)gpheapGlobal )
  {
    ++dword_1C00821D4;
    v16 = 0;
    v11 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
    if ( !v11 )
    {
      ++dword_1C00821D8;
      v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00821F0)(
                            (unsigned int)dword_1C00821E4,
                            (unsigned int)dword_1C00821EC,
                            (unsigned int)dword_1C00821E8);
    }
    if ( v11 )
    {
      v17 = (unsigned int)gdwCtxtBlkSize;
      memset(v11, 0, (unsigned int)gdwCtxtBlkSize);
      v18 = (char *)v11 + v17;
      LODWORD(v11->Next) = 1346454856;
      v4 = a2;
      *((_QWORD *)&v11->Next + 1) = v18;
      v11[2].Next = (PSLIST_ENTRY)((char *)v11 + 56);
      v11[3].Next = (PSLIST_ENTRY)((char *)v11 + 40);
      *((_QWORD *)&v11[2].Next + 1) = (char *)v11 + 40;
    }
    else
    {
      v16 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, 3221225626LL);
      PrintDebugMessage(111, 0, 0, 0, 0LL);
    }
    goto LABEL_19;
  }
  if ( v9 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize * (v9 / (unsigned int)gdwGlobalHeapBlkSize + 1) <= 0x800000 )
    {
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v9 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      goto LABEL_44;
    }
    if ( v9 <= 0x800000 )
    {
      LODWORD(gdwGlobalHeapBlkSize) = v9;
      goto LABEL_44;
    }
  }
  else
  {
LABEL_44:
    v34 = NewGlobalHeap(&v43);
    v11 = v43;
    v16 = v34;
LABEL_19:
    if ( !v16 )
    {
      v11[1].Next = a1;
      *((_QWORD *)&v7[1].Next + 1) = v11;
      v6 = v11[2].Next;
      v11[2].Next = (_SLIST_ENTRY *)((char *)v6 + v9);
      HIDWORD(v6->Next) = v9;
      goto LABEL_22;
    }
  }
LABEL_23:
  KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
  if ( v6 )
    return v6 + 1;
  return (_SLIST_ENTRY *)v3;
}
