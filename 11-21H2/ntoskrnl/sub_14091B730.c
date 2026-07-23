/*
 * XREFs of sub_14091B730 @ 0x14091B730
 * Callers:
 *     sub_1406A0094 @ 0x1406A0094 (sub_1406A0094.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_14091B784 @ 0x14091B784 (sub_14091B784.c)
 */

__int64 __fastcall sub_14091B730(__int64 a1, void *a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  ObfReferenceObject(a2);
  v4 = sub_14091B784(a1, a2);
  v5 = v4;
  if ( v4 == -1073740008 )
  {
    v5 = 0;
  }
  else if ( v4 >= 0 )
  {
    return 0;
  }
  ObfDereferenceObject(a2);
  return v5;
}
