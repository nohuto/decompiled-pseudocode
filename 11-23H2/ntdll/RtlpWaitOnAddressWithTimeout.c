/*
 * XREFs of RtlpWaitOnAddressWithTimeout @ 0x180033EC4
 * Callers:
 *     RtlpWaitOnAddress @ 0x18004FE64 (RtlpWaitOnAddress.c)
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18004FF64 (RtlpWaitOnAddressRemoveWaitBlock.c)
 * Callees:
 *     RtlpWaitOnAddressRemoveWaitBlock @ 0x18004FF64 (RtlpWaitOnAddressRemoveWaitBlock.c)
 *     NtWaitForAlertByThreadId @ 0x1800A4AA0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlpWaitOnAddressWithTimeout(__int64 a1, PVOID *a2, LARGE_INTEGER *a3, unsigned int a4)
{
  unsigned int v4; // esi
  volatile signed __int32 *v5; // rdi
  int i; // ecx
  unsigned __int32 v10; // ebx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax

  v4 = 0;
  v5 = (volatile signed __int32 *)(a2 + 5);
  if ( MEMORY[0x7FFE036A] > 1u )
  {
    if ( a2 != (PVOID *)-40LL && MEMORY[0x7FFE0297] )
    {
      v12 = __rdtsc();
      v13 = v12 + a4;
      while ( 1 )
      {
        __asm { monitorx rax, rcx, rdx }
        if ( (*v5 & 1) == 0 )
          break;
        v14 = v12;
        v15 = __rdtsc();
        v12 = v15;
        if ( v15 <= v14 || v15 >= v13 )
          break;
        __asm { mwaitx  rax, rcx, rbx }
      }
    }
    else
    {
      for ( i = 0; (*v5 & 1) != 0 && i != a4 / MEMORY[0x7FFE02D6]; ++i )
        _mm_pause();
    }
  }
  if ( !_interlockedbittestandreset(v5, 0) )
    return 0LL;
  v10 = NtWaitForAlertByThreadId(*a2, a3);
  if ( v10 == 258 )
  {
    if ( _InterlockedExchange(v5, 4) == 2 )
      v10 = NtWaitForAlertByThreadId(*a2, 0LL);
    else
      RtlpWaitOnAddressRemoveWaitBlock(a1, a2);
  }
  if ( v10 != 257 )
    return v10;
  return v4;
}
