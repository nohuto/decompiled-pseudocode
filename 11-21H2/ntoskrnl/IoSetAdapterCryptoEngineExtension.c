/*
 * XREFs of IoSetAdapterCryptoEngineExtension @ 0x140559350
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 *     sub_140459D9C @ 0x140459D9C (sub_140459D9C.c)
 */

__int64 __fastcall IoSetAdapterCryptoEngineExtension(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _WORD *v8; // rax

  if ( !sub_140459D9C(a1, 7LL, a3) )
    return 3221225659LL;
  v8 = sub_14020C420(a1, 7, v5, v6);
  if ( !v8 )
    return 3221225626LL;
  *(_OWORD *)(v8 + 20) = *a2;
  return 0LL;
}
