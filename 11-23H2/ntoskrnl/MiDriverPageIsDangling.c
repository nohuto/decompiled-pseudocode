/*
 * XREFs of MiDriverPageIsDangling @ 0x14062CAF8
 * Callers:
 *     MiDeleteValidSystemPage @ 0x140280AA0 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x1402E96D0 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax

  result = qword_140C65930;
  if ( *(__int64 *)(a1 + 40) < 0 )
    --*(_QWORD *)(qword_140C65930 + 200);
  --*(_QWORD *)(result + 208);
  return result;
}
