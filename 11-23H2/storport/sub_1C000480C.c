/*
 * XREFs of sub_1C000480C @ 0x1C000480C
 * Callers:
 *     sub_1C000152C @ 0x1C000152C (sub_1C000152C.c)
 *     sub_1C001A278 @ 0x1C001A278 (sub_1C001A278.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1C000480C(__int64 a1)
{
  signed __int64 v1; // rdi
  char result; // al
  bool v4; // zf
  signed __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 88);
  if ( (v1 & 1) == 0 )
    return 1;
  result = 0;
  if ( !*(_DWORD *)(a1 + 28)
    && !*(_DWORD *)(a1 + 16)
    && !*(_DWORD *)(a1 + 32)
    && !*(_BYTE *)(a1 + 37)
    && !*(_BYTE *)(a1 + 39)
    && !*(_BYTE *)(a1 + 36)
    && *(int *)(a1 + 24) <= 0
    && !*(_BYTE *)(a1 + 38) )
  {
    ExReInitializeRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
    do
    {
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v1 ^ 1, v1);
      v4 = v1 == v5;
      v1 = v5;
    }
    while ( !v4 && (v5 & 1) != 0 );
    return 1;
  }
  return result;
}
