/*
 * XREFs of sub_18000E368 @ 0x18000E368
 * Callers:
 *     sub_18000E64C @ 0x18000E64C (sub_18000E64C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000E368(__int64 a1)
{
  DWORD CurrentThreadId; // ecx
  __int64 result; // rax

  CurrentThreadId = GetCurrentThreadId();
  for ( result = *(_QWORD *)(a1 + 8 * (CurrentThreadId % 0xAuLL)); result; result = *(_QWORD *)(result + 8) )
  {
    if ( *(_DWORD *)result == CurrentThreadId )
    {
      result += 16LL;
      return result;
    }
  }
  return result;
}
