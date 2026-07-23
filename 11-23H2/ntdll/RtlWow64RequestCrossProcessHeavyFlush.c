/*
 * XREFs of RtlWow64RequestCrossProcessHeavyFlush @ 0x1801119B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlWow64RequestCrossProcessHeavyFlush(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  signed __int64 v2; // rtt
  signed __int64 v4; // [rsp+28h] [rbp+10h]

  v1 = *a1;
  do
  {
    HIDWORD(v4) = HIDWORD(v1) + 1;
    LODWORD(v4) = v1 | 0x80000000;
    v2 = v1;
    v1 = _InterlockedCompareExchange64(a1, v4, v1);
  }
  while ( v2 != v1 );
  return 1;
}
