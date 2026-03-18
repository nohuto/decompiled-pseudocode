/*
 * XREFs of WriteFieldLoop @ 0x1C0017A60
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall WriteFieldLoop(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rsi
  unsigned int v7; // eax
  unsigned int v8; // r8d
  _SLIST_ENTRY *v9; // r12
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // r14
  _SLIST_ENTRY *v13; // rax
  _SLIST_ENTRY *v14; // r9
  __int64 v15; // r12
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // eax
  _SLIST_ENTRY *Next; // rsi
  _SLIST_ENTRY *v21; // rbx
  __int64 v22; // r8
  _SLIST_ENTRY *v23; // rax
  _SLIST_ENTRY *i; // rdx
  _SLIST_ENTRY **v25; // rcx
  _SLIST_ENTRY *v26; // r9
  __int64 v27; // rcx
  _SLIST_ENTRY *v28; // rax
  _SLIST_ENTRY *v29; // r9
  _SLIST_ENTRY *v30; // rbx
  _SLIST_ENTRY *v31; // rdx
  _SLIST_ENTRY **v32; // rax
  __int64 v33; // rcx
  __int64 Next_high; // r10
  _SLIST_ENTRY *v35; // rcx
  _SLIST_ENTRY **v36; // rax
  _SLIST_ENTRY *v37; // rcx
  _SLIST_ENTRY **v38; // rax

  v3 = a3;
  if ( a3 )
    goto LABEL_19;
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
      return v3;
LABEL_19:
    Next = a1[26].Next;
    v21 = Next - 1;
    a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
    LODWORD(Next[-1].Next) = 0;
    byte_1C0082868 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v22 = *((_QWORD *)&Next[-1].Next + 1);
    v23 = *(_SLIST_ENTRY **)(v22 + 40);
    for ( i = (_SLIST_ENTRY *)(v22 + 40); v23 != i; v23 = v23->Next )
    {
      if ( Next < v23 )
        break;
    }
    v25 = (_SLIST_ENTRY **)*((_QWORD *)&v23->Next + 1);
    if ( *v25 == v23 )
    {
      *((_QWORD *)&Next->Next + 1) = v25;
      Next->Next = v23;
      *v25 = Next;
      *((_QWORD *)&v23->Next + 1) = Next;
      v26 = Next->Next;
      v27 = (__int64)&Next->Next[-1];
      if ( Next->Next != i )
      {
        Next_high = HIDWORD(v21->Next);
        if ( (_SLIST_ENTRY *)v27 == (_SLIST_ENTRY *)((char *)v21 + Next_high) )
        {
          HIDWORD(v21->Next) = Next_high + *(_DWORD *)(v27 + 4);
          v35 = v26->Next;
          if ( *(&v26->Next->Next + 1) != v26 )
            goto LABEL_38;
          v36 = (_SLIST_ENTRY **)*((_QWORD *)&v26->Next + 1);
          if ( *v36 != v26 )
            goto LABEL_38;
          *v36 = v35;
          *((_QWORD *)&v35->Next + 1) = v36;
        }
      }
      v28 = (_SLIST_ENTRY *)*((_QWORD *)&v21[1].Next + 1);
      v29 = v28 - 1;
      if ( v28 != i )
      {
        v33 = HIDWORD(v29->Next);
        if ( v21 == (_SLIST_ENTRY *)((char *)v29 + v33) )
        {
          HIDWORD(v29->Next) = HIDWORD(v21->Next) + v33;
          v37 = Next->Next;
          if ( *(&Next->Next->Next + 1) != Next )
            goto LABEL_38;
          v38 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
          if ( *v38 != Next )
            goto LABEL_38;
          *v38 = v37;
          v21 = v29;
          *((_QWORD *)&v37->Next + 1) = v38;
        }
      }
      if ( *(_QWORD *)(v22 + 32) > (unsigned __int64)v21 + HIDWORD(v21->Next) )
      {
LABEL_27:
        KeReleaseSpinLock(&gmutHeap, byte_1C0082868);
        return v3;
      }
      *(_QWORD *)(v22 + 32) = v21;
      v30 = v21 + 1;
      v31 = v30->Next;
      if ( *(&v30->Next->Next + 1) == v30 )
      {
        v32 = (_SLIST_ENTRY **)*((_QWORD *)&v30->Next + 1);
        if ( *v32 == v30 )
        {
          *v32 = v31;
          *((_QWORD *)&v31->Next + 1) = v32;
          goto LABEL_27;
        }
      }
    }
LABEL_38:
    __fastfail(3u);
  }
  v6 = *(unsigned int *)(a2 + 56);
  if ( !(_DWORD)v6 )
  {
    ++*(_DWORD *)(a2 + 16);
    goto LABEL_19;
  }
  v7 = *(_DWORD *)(a2 + 60);
  v8 = 128;
  v9 = *(_SLIST_ENTRY **)(a2 + 32);
  if ( v7 <= (unsigned int)v6 )
    v6 = v7;
  v10 = *(_QWORD *)(a2 + 48);
  v11 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(v11 + 20) )
    v8 = *(_DWORD *)(v11 + 28) + 128;
  v12 = 0LL;
  v3 = 0;
  v13 = HeapAlloc(a1 + 30, 1297237576, v8);
  v14 = v13;
  if ( v13 )
  {
    *((_QWORD *)&v13->Next + 1) = a1[26].Next;
    a1[26].Next = v13;
    LODWORD(v13->Next) = 1330004801;
    *((_QWORD *)&v13[1].Next + 1) = WriteFieldObj;
    v13[2].Next = v9;
    *((_QWORD *)&v13[2].Next + 1) = v10;
    v13[3].Next = (_SLIST_ENTRY *)(v6 + v10);
    v15 = (unsigned int)v6;
    v16 = 1 << ((*(_BYTE *)(v11 + 12) & 0xF) - 1);
    if ( (*(_DWORD *)(v11 + 12) & 0xFu) - 1 > 3 )
      v16 = 1;
    *((_DWORD *)&v13[3].Next + 2) = v16;
    v17 = 8 * v16 + *(_DWORD *)(v11 + 8) + *(_DWORD *)(v11 + 4) - 1;
    if ( 8 * v16 == 8 )
      v18 = v17 >> 3;
    else
      v18 = v17 / (8 * v16);
    *((_DWORD *)&v14[3].Next + 3) = v18;
    if ( (unsigned int)(8 * v16) < 0x40 )
      v12 = 1LL << (8 * (unsigned __int8)v16);
    v14[4].Next = (_SLIST_ENTRY *)(v12 - 1);
    *((_DWORD *)&v14[4].Next + 2) = 8 * v16 - *(_DWORD *)(v11 + 4);
    *((_DWORD *)&v14[4].Next + 3) = *(_DWORD *)(v11 + 4);
    memmove(&v14[6], (const void *)v11, (unsigned int)(*(_DWORD *)(v11 + 28) + 32));
  }
  else
  {
    v3 = -1072431102;
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    v15 = (unsigned int)v6;
  }
  *(_DWORD *)(a2 + 56) -= v6;
  *(_QWORD *)(a2 + 48) += v15;
  return v3;
}
