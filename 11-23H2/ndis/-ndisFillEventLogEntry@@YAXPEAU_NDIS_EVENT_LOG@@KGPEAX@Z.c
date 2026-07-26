/*
 * XREFs of ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C0021880
 * Callers:
 *     ?ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z @ 0x1C00217F8 (-ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x1C00C4C54 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x1C00C4F70 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisFillEventLogEntry(struct _NDIS_EVENT_LOG *a1, int a2, __int16 a3, void *a4)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  __int16 v9; // cx
  ULONG_PTR v10; // rcx

  v5 = a2 * (unsigned int)a1->EntrySize;
  if ( (a1->Flags & 1) != 0 )
  {
    v7 = MEMORY[0xFFFFF78000000014];
    v8 = (MEMORY[0xFFFFF78000000014] - a1->LastEventTime) / 0x2710;
    if ( v8 >= 0x7FFF )
    {
      if ( v8 >= 0x1F3FC18 )
        v9 = *(_WORD *)((char *)&a1[1].LastEventTime + v5 + 2) | 0x8000;
      else
        v9 = (v8 / 0x3E8) | 0x8000;
    }
    else
    {
      v9 = v8 & 0x7FFF;
    }
    *(_WORD *)((char *)&a1[1].LastEventTime + v5 + 2) = v9;
    a1->LastEventTime = v7;
  }
  if ( (a1->Flags & 4) != 0 )
    *(_QWORD *)((char *)&a1[1].LastUsedEntry + v5) = a4;
  if ( (a1->Flags & 2) != 0 )
  {
    v10 = *(unsigned int *)((char *)&a1[1].LastEventTime + v5 + 4);
    if ( (_DWORD)v10 )
      ndisReleaseStackTrace(v10);
    *(_DWORD *)((char *)&a1[1].LastEventTime + v5 + 4) = ndisCaptureStackTrace(v10);
  }
  *(_WORD *)((char *)&a1[1].LastEventTime + v5) = a3;
}
