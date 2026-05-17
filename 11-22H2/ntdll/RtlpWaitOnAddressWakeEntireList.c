/*
 * XREFs of RtlpWaitOnAddressWakeEntireList @ 0x180050654
 * Callers:
 *     RtlpWakeByAddress @ 0x18002A1DC (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x1800500C4 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     RtlpOptimizeWaitOnAddressWaitList @ 0x1800505FC (RtlpOptimizeWaitOnAddressWaitList.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x18009FBE0 (ZwAlertThreadByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWakeEntireList(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v1 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v1 )
  {
    do
    {
      v2 = *(_QWORD *)(v1 + 16);
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)(v1 + 40), 2);
      if ( !(_DWORD)result )
        result = ZwAlertThreadByThreadId(*(_QWORD *)(v1 + 8));
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}
