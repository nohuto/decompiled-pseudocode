/*
 * XREFs of sub_1407A7658 @ 0x1407A7658
 * Callers:
 *     sub_1407A76C0 @ 0x1407A76C0 (sub_1407A76C0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14035AA74 @ 0x14035AA74 (sub_14035AA74.c)
 */

unsigned __int8 __fastcall sub_1407A7658(__int64 a1)
{
  unsigned __int8 result; // al
  void *v3; // rcx

  result = _bittestandreset((signed __int32 *)(a1 + 48), 2u);
  if ( result )
  {
    result = sub_14035AA74(a1, 0LL, 0LL);
    v3 = *(void **)(a1 + 32);
    if ( v3 )
      return ObfDereferenceObject(v3);
  }
  return result;
}
