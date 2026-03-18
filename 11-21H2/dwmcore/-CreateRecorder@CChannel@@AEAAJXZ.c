/*
 * XREFs of ?CreateRecorder@CChannel@@AEAAJXZ @ 0x1800BD7E4
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180070DE4 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180070928 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CChannel::CreateRecorder(CChannel *this)
{
  struct CCommandBatch **v1; // rdi
  unsigned int v2; // ebx
  PSLIST_ENTRY v3; // rax
  unsigned int v4; // ecx
  PSLIST_ENTRY v5; // rcx
  struct _SLIST_ENTRY *Next; // rdx
  struct _SLIST_ENTRY **v7; // r9
  PSLIST_ENTRY v8; // r8
  struct _SLIST_ENTRY **v9; // r10
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx

  v1 = (struct CCommandBatch **)((char *)this + 160);
  v2 = 0;
  v3 = InterlockedPopEntrySList((PSLIST_HEADER)(*((_QWORD *)this + 6) + 160LL));
  if ( v3 )
  {
    v5 = v3 - 4;
    Next = v3[-4].Next;
    if ( Next != &v3[-4] )
    {
      v7 = (struct _SLIST_ENTRY **)*((_QWORD *)&v5->Next + 1);
      if ( *(&Next->Next + 1) != v5
        || *v7 != v5
        || (*v7 = Next,
            v8 = v5 + 1,
            *((_QWORD *)&Next->Next + 1) = v7,
            v9 = (struct _SLIST_ENTRY **)*((_QWORD *)&v5[1].Next + 1),
            *(&v5[1].Next->Next + 1) != &v5[1])
        || *v9 != v8
        || *(&Next->Next->Next + 1) != Next
        || *v7 != Next )
      {
        __fastfail(3u);
      }
      *v9 = Next;
      *((_QWORD *)&v5[1].Next + 1) = *((_QWORD *)&Next->Next + 1);
      **((_QWORD **)&Next->Next + 1) = v8;
      *((_QWORD *)&Next->Next + 1) = v9;
    }
    v5[2].Next = 0LL;
    *((_DWORD *)&v5[2].Next + 2) = 0;
    *((_DWORD *)&v5[2].Next + 3) = 0;
    v5[3].Next = 0LL;
    *((_DWORD *)&v5[3].Next + 2) = 0;
    *((_QWORD *)&v5->Next + 1) = v5;
    v5->Next = v5;
    *v1 = (struct CCommandBatch *)v5;
  }
  else
  {
    v11 = CCommandBatch::Create(v4, v1);
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x5Bu);
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v2, 0x11Bu);
    }
  }
  return v2;
}
