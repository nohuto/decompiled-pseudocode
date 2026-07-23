/*
 * XREFs of sub_1405079C8 @ 0x1405079C8
 * Callers:
 *     sub_140506BF4 @ 0x140506BF4 (sub_140506BF4.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_14050745C @ 0x14050745C (sub_14050745C.c)
 *     sub_140507644 @ 0x140507644 (sub_140507644.c)
 *     sub_14050770C @ 0x14050770C (sub_14050770C.c)
 */

__int64 __fastcall sub_1405079C8(__int64 a1)
{
  __int64 v2; // rdx
  ULONG ActiveProcessorCount; // ebx
  __int64 result; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  while ( byte_140D016DD )
    _mm_pause();
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( _InterlockedIncrement(&dword_140D01584) == ActiveProcessorCount )
    byte_140D016DD = 1;
  if ( byte_140D016C4 )
  {
    LOBYTE(v2) = 1;
    if ( sub_14050770C(a1, v2) )
      byte_140D016DC = 1;
    if ( _InterlockedIncrement(&dword_140D016C8) == 1 )
    {
      if ( !sub_140507644(&dword_140D016C8, ActiveProcessorCount, 5000) )
        sub_14050745C(0LL, 0LL, 0x80000002);
      _InterlockedAdd(&dword_140D016C8, 1u);
    }
    else
    {
      sub_140507644(&dword_140D016C8, ActiveProcessorCount + 1, 0);
    }
  }
  if ( sub_14050770C(a1, 0LL) )
    byte_140D016DC = 1;
  if ( _InterlockedIncrement(&dword_140D01598) == 1 )
  {
    if ( !sub_140507644(&dword_140D01598, ActiveProcessorCount, 5000) || !byte_140D016DC )
      sub_14050745C(0LL, 0LL, 0x80000001);
    _InterlockedAdd(&dword_140D01598, 1u);
  }
  else
  {
    sub_140507644(&dword_140D01598, ActiveProcessorCount + 1, 0);
  }
  result = (unsigned int)_InterlockedExchangeAdd(&dword_140D01584, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    byte_140D016DC = 0;
    dword_140D016C8 = 0;
    dword_140D01598 = 0;
    _InterlockedOr(v5, 0);
    byte_140D016DD = 0;
  }
  return result;
}
