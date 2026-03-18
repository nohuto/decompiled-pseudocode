/*
 * XREFs of HandleAsyncResizeComplete @ 0x1C0210238
 * Callers:
 *     NtUserLayoutCompleted @ 0x1C00A2930 (NtUserLayoutCompleted.c)
 * Callees:
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 */

__int64 __fastcall HandleAsyncResizeComplete(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(result + 672);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 16) == a1 )
    {
      FindTimer(a1, 65522LL, 2u, 1, 0LL);
      result = *(unsigned int *)(v2 + 200);
      if ( (result & 0x100000) != 0 && (int)result < 0 )
      {
        *(_DWORD *)(v2 + 200) = result & 0x7FFFFFFF;
        return GenerateMouseMove(0LL);
      }
    }
  }
  return result;
}
