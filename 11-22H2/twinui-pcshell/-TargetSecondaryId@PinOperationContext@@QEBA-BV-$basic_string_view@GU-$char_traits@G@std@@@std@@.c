/*
 * XREFs of ?TargetSecondaryId@PinOperationContext@@QEBA?BV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1806A71FC
 * Callers:
 *     ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x18069F680 (-AreEquivalentPinOperations@@YA_NV-$shared_ptr@VPinOperationContext@@@std@@0@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall PinOperationContext::TargetSecondaryId(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rax
  bool v3; // cf
  __int64 v4; // rcx
  _QWORD *result; // rax

  v2 = (__int64 *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 80) < 8uLL;
  v4 = a1 + 56;
  if ( !v3 )
    v4 = *v2;
  a2[1] = v2[2];
  result = a2;
  *a2 = v4;
  return result;
}
