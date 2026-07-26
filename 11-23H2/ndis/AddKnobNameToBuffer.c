/*
 * XREFs of AddKnobNameToBuffer @ 0x1C013F5C4
 * Callers:
 *     ?EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z @ 0x1C013F82C (-EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z.c)
 * Callees:
 *     memmove @ 0x1C0038400 (memmove.c)
 */

void *__fastcall AddKnobNameToBuffer(__int64 a1, _WORD *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // edi
  void *result; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  ++*(_DWORD *)a1;
  v4 = v3 + 1;
  *(_DWORD *)(a1 + 4) += v4;
  if ( *(_DWORD *)(a1 + 16) >= v4 )
  {
    result = memmove(*(void **)(a1 + 8), a2, 2LL * v4);
    *(_QWORD *)(a1 + 8) += 2LL * v4;
    *(_DWORD *)(a1 + 16) -= v4;
  }
  return result;
}
