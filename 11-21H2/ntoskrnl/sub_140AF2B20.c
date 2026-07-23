/*
 * XREFs of sub_140AF2B20 @ 0x140AF2B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140280CBC @ 0x140280CBC (sub_140280CBC.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 */

__int64 __fastcall sub_140AF2B20(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2400) && (void (__noreturn *)())sub_140280CBC((__int64)a2, 0) == sub_1403DEE60 )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2400) = a2;
  }
  return 0LL;
}
