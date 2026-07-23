/*
 * XREFs of MiInitializeColorTable @ 0x140397EDC
 * Callers:
 *     MiInitializeLargePageNodeLists @ 0x140837C28 (MiInitializeLargePageNodeLists.c)
 *     MiCreateZeroThreadContext @ 0x140837D38 (MiCreateZeroThreadContext.c)
 * Callees:
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeColorTable(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = a1;
  a1[3] = dword_140C65AF8 & ExGenRandom(1) | (a2 << byte_140C65A8D);
  v3 = 3LL;
  do
  {
    result = ExGenRandom(1);
    *v2++ = result;
    --v3;
  }
  while ( v3 );
  return result;
}
