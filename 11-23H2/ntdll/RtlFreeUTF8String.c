/*
 * XREFs of RtlFreeUTF8String @ 0x1800F7160
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlFreeUTF8String(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = NtdllpFreeStringRoutine(v2);
    *(_OWORD *)a1 = 0LL;
  }
  return result;
}
