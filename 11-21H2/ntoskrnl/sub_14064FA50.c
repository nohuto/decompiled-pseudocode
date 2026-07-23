/*
 * XREFs of sub_14064FA50 @ 0x14064FA50
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14064FA50(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 48) )
    return sub_14042A5E0(*(_QWORD *)(a2 + 8), a2);
  v3 = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(a2 + 48) = 1;
  if ( v3 )
    sub_14042A5E0(*(_QWORD *)(a2 + 8), a2);
  if ( *(_QWORD *)(a2 + 24) )
  {
    KeResetEvent((PRKEVENT)(a2 + 104));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 96));
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 64), CriticalWorkQueue);
  }
  result = *(unsigned int *)(a2 + 36);
  if ( (_DWORD)result )
    return ExSetTimer(*(_QWORD *)(a2 + 56), -10000LL * (unsigned int)(result - *(_DWORD *)(a2 + 32)), 0LL, 0LL);
  return result;
}
