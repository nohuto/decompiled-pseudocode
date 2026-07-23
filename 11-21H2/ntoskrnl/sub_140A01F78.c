/*
 * XREFs of sub_140A01F78 @ 0x140A01F78
 * Callers:
 *     sub_140851EBC @ 0x140851EBC (sub_140851EBC.c)
 *     sub_1409B3490 @ 0x1409B3490 (sub_1409B3490.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     KeFlushQueuedDpcs @ 0x1402D96F0 (KeFlushQueuedDpcs.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     ZwWaitForSingleObject @ 0x14041B7E0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140A02158 @ 0x140A02158 (sub_140A02158.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A01F78(PVOID P)
{
  unsigned __int16 i; // si
  __int64 v3; // rdi
  void *v4; // rcx
  unsigned __int16 v5; // si
  unsigned __int16 *v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdx
  _DWORD *v9; // rdi

  if ( *((_QWORD *)P + 2) )
  {
    for ( i = 0; i < (unsigned __int16)word_140D05000; ++i )
    {
      v3 = *(_QWORD *)(*((_QWORD *)P + 2) + 8LL * i);
      if ( v3 )
      {
        if ( *(_QWORD *)(v3 + 264) )
        {
          *(_DWORD *)(v3 + 272) = 1;
          KeSetEvent((PRKEVENT)(v3 + 16), 0, 0);
          ZwWaitForSingleObject(*(HANDLE *)(v3 + 264), 0, 0LL);
          ZwClose(*(HANDLE *)(v3 + 264));
        }
        KeCancelTimer2(v3 + 128);
        KeCancelTimer((PKTIMER)(v3 + 40));
        KeFlushQueuedDpcs();
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 2) + 8LL * i), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 2), 0);
  }
  v4 = (void *)*((_QWORD *)P + 1);
  if ( v4 )
  {
    v5 = 0;
    if ( word_140D05000 )
    {
      do
      {
        if ( *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * v5) )
        {
          v6 = 0LL;
          v7 = 0LL;
          if ( (_UNKNOWN *)qword_140D31700[v5] != (_UNKNOWN *)((char *)&unk_140D3DDC0 + 280 * v5) )
            v6 = (unsigned __int16 *)qword_140D31700[v5];
          do
          {
            v8 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * *v6);
            v9 = *(_DWORD **)(v8 + v7);
            if ( ((unsigned __int8)v9 & 1) == 0 && v9 )
            {
              if ( v9[1] )
                KeBugCheckEx(0x18Eu, 2uLL, *(_QWORD *)P, *(_QWORD *)(v8 + v7), 0LL);
              sub_140A02158(*(PVOID *)(v8 + v7));
              ExFreePoolWithTag(v9, 0);
            }
            v7 += 8LL;
          }
          while ( v7 < 64 );
          ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 1) + 8LL * v5), 0);
        }
        ++v5;
      }
      while ( v5 < (unsigned __int16)word_140D05000 );
      v4 = (void *)*((_QWORD *)P + 1);
    }
    ExFreePoolWithTag(v4, 0);
  }
  ExFreePoolWithTag(P, 0);
}
