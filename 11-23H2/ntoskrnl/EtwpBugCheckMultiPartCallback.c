/*
 * XREFs of EtwpBugCheckMultiPartCallback @ 0x140600870
 * Callers:
 *     <none>
 * Callees:
 *     KeTestSpinLock @ 0x140227000 (KeTestSpinLock.c)
 *     memmove @ 0x140435B00 (memmove.c)
 */

void __fastcall EtwpBugCheckMultiPartCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        GUID *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int128 *v4; // rdi
  LARGE_INTEGER *v6; // rcx
  _QWORD **v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rcx
  int v12; // eax
  __int64 v13; // r14
  unsigned int v14; // ebp
  unsigned __int16 v15; // ax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  int v18; // edx

  v4 = *(__int128 **)&ReasonSpecificData[3].Data1;
  *(_DWORD *)ReasonSpecificData[2].Data4 = 0;
  ReasonSpecificData[1] = EtwSecondaryDumpDataGuid;
  if ( !v4 )
  {
    v4 = &EtwpDumpCallbackContext;
    EtwpDumpCallbackContext = 0LL;
    *(_QWORD *)&ReasonSpecificData[3].Data1 = &EtwpDumpCallbackContext;
  }
  if ( *((_BYTE *)v4 + 2) )
  {
    v8 = *(unsigned __int16 *)v4;
    v7 = (_QWORD **)v4 + 1;
    v9 = *((_QWORD *)v4 + 1);
    if ( v9 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * *(unsigned __int16 *)v4);
      v11 = *(_DWORD **)(v9 + 16);
      if ( v11[2] <= *v11 )
        v12 = v11[2];
      else
        v12 = v11[1];
      v11[12] = v12;
      *(_DWORD *)ReasonSpecificData[2].Data4 = v12;
      if ( *(_DWORD *)ReasonSpecificData->Data4 )
        *(_QWORD *)&ReasonSpecificData[2].Data1 = v11;
      v17 = (_QWORD *)**v7;
      if ( v17 == (_QWORD *)(v10 + 80) )
        v17 = 0LL;
LABEL_27:
      *v7 = v17;
      if ( !v17 )
LABEL_28:
        ++*(_WORD *)v4;
    }
    else
    {
      while ( v8 < *(_DWORD *)(EtwpHostSiloState + 16) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(EtwpHostSiloState + 456) + 8LL * (unsigned __int16)v8);
        if ( (v13 & 1) == 0
          && *(int *)(v13 + 12) < 0
          && (*(_DWORD *)(v13 + 300) & 1) == 0
          && KeTestSpinLock((PKSPIN_LOCK)(v13 + 696)) )
        {
          v14 = *(unsigned __int16 *)(v13 + 136) + 48;
          *(_DWORD *)ReasonSpecificData[2].Data4 = v14;
          if ( !*(_DWORD *)ReasonSpecificData->Data4 )
            goto LABEL_20;
          if ( v14 <= *(_DWORD *)&ReasonSpecificData->Data4[4] )
          {
            v16 = *(_QWORD *)&ReasonSpecificData->Data1;
            *(_DWORD *)v16 = 32223201;
            *(_DWORD *)(v16 + 4) = *(_DWORD *)v13;
            *(_DWORD *)(v16 + 16) = *(_DWORD *)(v13 + 4);
            *(_DWORD *)(v16 + 12) = *(_DWORD *)(v13 + 200);
            *(_QWORD *)(v16 + 24) = *(_QWORD *)(v13 + 792);
            *(_DWORD *)(v16 + 8) = *(_DWORD *)(v13 + 12);
            *(_DWORD *)(v16 + 20) = *(unsigned __int16 *)(v13 + 136);
            *(_OWORD *)(v16 + 32) = *(_OWORD *)(v13 + 304);
            memmove((void *)(v16 + 48), *(const void **)(v13 + 144), *(unsigned __int16 *)(v13 + 136));
            *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
            *(_DWORD *)ReasonSpecificData[2].Data4 = v14;
            *(_DWORD *)ReasonSpecificData->Data4 = v14;
LABEL_20:
            v17 = *(_QWORD **)(v13 + 80);
            if ( v17 != (_QWORD *)(v13 + 80) )
              goto LABEL_27;
            *v7 = 0LL;
            goto LABEL_28;
          }
        }
        v15 = *(_WORD *)v4 + 1;
        v8 = v15;
        *(_WORD *)v4 = v15;
      }
    }
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
    if ( *(_DWORD *)ReasonSpecificData->Data4 )
    {
      v6 = *(LARGE_INTEGER **)&ReasonSpecificData->Data1;
      v6[2].QuadPart = EtwpBootTime;
      v6[1].LowPart = EtwCPUSpeedInMHz;
      v6[3] = EtwPerfFreq;
      v6->LowPart = KeMaximumIncrement;
      v6->HighPart = NtBuildNumber;
      *(_QWORD *)&ReasonSpecificData[2].Data1 = *(_QWORD *)&ReasonSpecificData->Data1;
      *(_DWORD *)ReasonSpecificData[2].Data4 = 32;
      *(_DWORD *)ReasonSpecificData->Data4 = 32;
    }
    *((_BYTE *)v4 + 2) = 1;
    v7 = (_QWORD **)v4 + 1;
  }
  v18 = *(_DWORD *)ReasonSpecificData[3].Data4;
  if ( (unsigned int)*(unsigned __int16 *)v4 >= *(_DWORD *)(EtwpHostSiloState + 16) )
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v18 & 0xFFFFFFFE;
    *v7 = 0LL;
    *((_BYTE *)v4 + 2) = 0;
    *(_WORD *)v4 = 0;
  }
  else
  {
    *(_DWORD *)ReasonSpecificData[3].Data4 = v18 | 1;
  }
}
