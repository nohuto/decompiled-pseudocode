/*
 * XREFs of sub_180042940 @ 0x180042940
 * Callers:
 *     <none>
 * Callees:
 *     sub_180040284 @ 0x180040284 (sub_180040284.c)
 */

LPVOID __fastcall sub_180042940(__int64 a1)
{
  void *v1; // rcx
  LPVOID result; // rax

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    return sub_180040284(v1);
  return result;
}
