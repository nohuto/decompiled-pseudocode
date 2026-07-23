/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x140550B40
 * Callers:
 *     sub_140567874 @ 0x140567874 (sub_140567874.c)
 *     sub_140A6BDD0 @ 0x140A6BDD0 (sub_140A6BDD0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall InbvAcquireDisplayOwnership(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140C54D10;
  if ( qword_140C54D10 )
  {
    result = *(_QWORD *)(qword_140C54D10 + 8);
    if ( result )
      return sub_14042A5E0(a1, a2);
  }
  return result;
}
