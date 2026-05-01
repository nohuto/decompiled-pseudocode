/*
 * XREFs of sub_18000E304 @ 0x18000E304
 * Callers:
 *     sub_18000DDEC @ 0x18000DDEC (sub_18000DDEC.c)
 * Callees:
 *     <none>
 */

__int64 sub_18000E304()
{
  __int64 v0; // rbx
  DWORD CurrentThreadId; // r9d
  __int64 result; // rax

  v0 = qword_180032918;
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
