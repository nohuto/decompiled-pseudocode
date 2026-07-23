/*
 * XREFs of IoGetAdapterCryptoEngineExtension @ 0x1405592D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 */

__int64 __fastcall IoGetAdapterCryptoEngineExtension(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r8

  if ( !sub_14020C0F0(a1, 7u) )
    return 3221226021LL;
  *v2 = *(_QWORD *)(v1 + 200) + 40LL;
  return 0LL;
}
