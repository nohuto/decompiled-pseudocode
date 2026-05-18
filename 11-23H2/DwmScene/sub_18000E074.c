/*
 * XREFs of sub_18000E074 @ 0x18000E074
 * Callers:
 *     sub_18000DB64 @ 0x18000DB64 (sub_18000DB64.c)
 * Callees:
 *     <none>
 */

__int64 sub_18000E074()
{
  __int64 v0; // rbx
  DWORD CurrentThreadId; // r9d
  __int64 result; // rax

  v0 = qword_1801D3258;
  CurrentThreadId = GetCurrentThreadId();
  for ( result = *(_QWORD *)(v0 + 8 * (CurrentThreadId % 0xAuLL)); result; result = *(_QWORD *)(result + 8) )
  {
    if ( *(_DWORD *)result == CurrentThreadId )
    {
      result += 16LL;
      return result;
    }
  }
  return result;
}
