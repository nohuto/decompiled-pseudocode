/*
 * XREFs of sub_140267708 @ 0x140267708
 * Callers:
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void sub_140267708()
{
  PULONG Buffer; // rdx
  ULONG v1; // r10d
  ULONG *v2; // r8
  bool i; // zf
  bool v4; // zf
  bool v5; // al
  unsigned int v6; // ecx
  char *v7; // rdx
  unsigned int v8; // r9d
  _DWORD *v9; // r10
  unsigned int v10; // r11d
  _DWORD *v11; // r8

  if ( *(_QWORD *)&qword_140C53448 )
  {
    if ( stru_140C29560.SizeOfBitMap )
    {
      if ( stru_140C29560.SizeOfBitMap > 1 )
      {
        Buffer = stru_140C29560.Buffer;
        v1 = *stru_140C29560.Buffer;
        v2 = &stru_140C29560.Buffer[(unsigned __int64)(stru_140C29560.SizeOfBitMap - 1) >> 5];
        if ( stru_140C29560.Buffer != v2 )
        {
          for ( i = v1 == 0; i; i = *Buffer == 0 )
          {
            if ( ++Buffer == v2 )
            {
              v4 = ((0xFFFFFFFF >> ~(LOBYTE(stru_140C29560.SizeOfBitMap) - 1)) & *Buffer) == 0;
              goto LABEL_10;
            }
          }
          goto LABEL_20;
        }
        v4 = (v1 & (0xFFFFFFFF >> (32 - LOBYTE(stru_140C29560.SizeOfBitMap)))) == 0;
LABEL_10:
        v5 = v4;
        goto LABEL_11;
      }
      if ( stru_140C29560.SizeOfBitMap == 1 )
      {
        v5 = !_bittest((const signed __int32 *)stru_140C29560.Buffer, 0);
LABEL_11:
        if ( v5 )
        {
          v6 = 0;
          v7 = (char *)&unk_140C29670;
LABEL_13:
          v8 = 0;
          v9 = v7;
LABEL_14:
          v10 = 0;
          v11 = v9;
          while ( *v11 == v11[1] )
          {
            ++v10;
            v11 += 2;
            if ( v10 >= 2 )
            {
              ++v8;
              v9 += 4;
              if ( v8 < 2 )
                goto LABEL_14;
              ++v6;
              v7 += 32;
              if ( v6 < 2 )
                goto LABEL_13;
              return;
            }
          }
        }
      }
    }
LABEL_20:
    if ( !_InterlockedCompareExchange16(&word_140C296D0, 1, 0) )
    {
      stru_140C296B0.Parameter = 0LL;
      stru_140C296B0.List.Flink = 0LL;
      stru_140C296B0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140713230;
      ExQueueWorkItem(&stru_140C296B0, DelayedWorkQueue);
    }
  }
}
