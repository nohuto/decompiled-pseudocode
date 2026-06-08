/*
 * XREFs of ProcLibTraceCoordinatedLpiRundown @ 0x1C0020F10
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0020C40 (ProcLibTraceControlCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall ProcLibTraceCoordinatedLpiRundown(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r9d
  _DWORD *v11; // r10
  _DWORD *v12; // rsi
  _DWORD *v13; // rdx
  int v14; // eax
  struct _EVENT_DATA_DESCRIPTOR *v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  struct _EVENT_DATA_DESCRIPTOR *v19; // rcx

  v2 = 0LL;
  if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, &PPM_ETW_PROCESSOR_CONTAINER_LPI_STATES) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 + 16);
      Pool2 = ExAllocatePool2(256LL, 16LL * (unsigned int)(2 * v4 + 4), 1919119952LL);
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2;
      if ( Pool2 )
      {
        v7 = *(unsigned __int16 *)(a1 + 2);
        v8 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)(Pool2 + 12) = 0;
        *(_DWORD *)(Pool2 + 8) = v7;
        *(_QWORD *)Pool2 = v8;
        *(_QWORD *)(Pool2 + 24) = 4LL;
        *(_QWORD *)(Pool2 + 16) = v3;
        *(_DWORD *)(Pool2 + 44) = 0;
        *(_QWORD *)(Pool2 + 32) = v3 + 8;
        *(_DWORD *)(Pool2 + 40) = 8;
        *(_DWORD *)(Pool2 + 60) = 0;
        *(_QWORD *)(Pool2 + 48) = v3 + 16;
        *(_DWORD *)(Pool2 + 56) = 4;
        if ( (_DWORD)v4 )
        {
          v9 = ExAllocatePool2(256LL, 60 * v4, 1919119952LL);
          v2 = (void *)v9;
          if ( !v9 )
            goto LABEL_9;
          v10 = 0;
          v11 = (_DWORD *)(v9 + 8);
          v12 = (_DWORD *)(v3 + 32);
          do
          {
            v13 = v11 - 2;
            *v13 = *(v12 - 2);
            *(v11 - 1) = *(v12 - 1);
            v14 = *v12;
            v12 += 20;
            *v11 = v14;
            v11 += 15;
            *(v11 - 14) = *(v12 - 19);
            *(v11 - 13) = *(v12 - 18);
            *(v11 - 12) = *(v12 - 17);
            *(_QWORD *)(v11 - 11) = *((_QWORD *)v12 - 8);
            *(v11 - 9) = *(v12 - 14);
            *((_QWORD *)v11 - 4) = *(_QWORD *)(v12 - 13);
            *(v11 - 6) = *(v12 - 11);
            *(_QWORD *)(v11 - 5) = *((_QWORD *)v12 - 5);
            *(v11 - 3) = *(v12 - 8);
            v15 = &UserData[2 * v10 + 4];
            v15->Reserved = 0;
            v15->Ptr = (unsigned __int64)v13;
            v15->Size = 60;
            v16 = 2 * v10 + 5;
            v17 = *((unsigned __int16 *)v12 - 11);
            ++v10;
            v18 = *((_QWORD *)v12 - 2);
            v19 = &UserData[v16];
            v19->Reserved = 0;
            v19->Ptr = v18;
            v19->Size = v17;
          }
          while ( v10 < (unsigned int)v4 );
        }
        EtwWrite(
          (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
          &PPM_ETW_PROCESSOR_CONTAINER_LPI_STATES,
          0LL,
          (ULONG)(2 * v4 + 4),
          UserData);
LABEL_9:
        ExFreePoolWithTag(UserData, (ULONG)1919119952);
        if ( v2 )
          ExFreePoolWithTag(v2, (ULONG)1919119952);
      }
    }
  }
}
