/*
 * XREFs of MiCheckLogPinDriverAddresses @ 0x14021EBE8
 * Callers:
 *     MiWorkingSetManager @ 0x14021D610 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void MiCheckLogPinDriverAddresses()
{
  bool v0; // al
  unsigned int v1; // ecx
  char *v2; // rdx
  unsigned int v3; // r9d
  _DWORD *v4; // r10
  unsigned int v5; // r11d
  _DWORD *v6; // r8
  unsigned int *Buffer; // rdx
  unsigned int v8; // r10d
  unsigned int *v9; // r8
  bool i; // zf
  bool v11; // zf

  if ( *(_QWORD *)&qword_140C699E8 )
  {
    if ( stru_140C12EC0.SizeOfBitMap )
    {
      if ( stru_140C12EC0.SizeOfBitMap > 1 )
      {
        Buffer = stru_140C12EC0.Buffer;
        v8 = *stru_140C12EC0.Buffer;
        v9 = &stru_140C12EC0.Buffer[(unsigned __int64)(stru_140C12EC0.SizeOfBitMap - 1) >> 5];
        if ( stru_140C12EC0.Buffer != v9 )
        {
          for ( i = v8 == 0; i; i = *Buffer == 0 )
          {
            if ( ++Buffer == v9 )
            {
              v11 = ((0xFFFFFFFF >> ~(LOBYTE(stru_140C12EC0.SizeOfBitMap) - 1)) & *Buffer) == 0;
              goto LABEL_21;
            }
          }
          goto LABEL_23;
        }
        v11 = (v8 & (0xFFFFFFFF >> (32 - LOBYTE(stru_140C12EC0.SizeOfBitMap)))) == 0;
LABEL_21:
        v0 = v11;
        goto LABEL_6;
      }
      if ( stru_140C12EC0.SizeOfBitMap == 1 )
      {
        v0 = !_bittest((const signed __int32 *)stru_140C12EC0.Buffer, 0);
LABEL_6:
        if ( v0 )
        {
          v1 = 0;
          v2 = (char *)&unk_140C12FD0;
LABEL_8:
          v3 = 0;
          v4 = v2;
LABEL_9:
          v5 = 0;
          v6 = v4;
          while ( *v6 == v6[1] )
          {
            ++v5;
            v6 += 2;
            if ( v5 >= 2 )
            {
              ++v3;
              v4 += 4;
              if ( v3 < 2 )
                goto LABEL_9;
              ++v1;
              v2 += 32;
              if ( v1 < 2 )
                goto LABEL_8;
              return;
            }
          }
        }
      }
    }
LABEL_23:
    if ( !_InterlockedCompareExchange16(&word_140C13030, 1, 0) )
    {
      WorkItem.Parameter = 0LL;
      WorkItem.List.Flink = 0LL;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))MiLogPinDriverAddressesWorker;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    }
  }
}
