/*
 * XREFs of MiDriverPageIsDangling @ 0x14062C618
 * Callers:
 *     MiDeleteValidSystemPage @ 0x1402806F0 (MiDeleteValidSystemPage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x1402E9440 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax

  result = qword_140C65A30;
  if ( *(__int64 *)(a1 + 40) < 0 )
    --*(_QWORD *)(qword_140C65A30 + 200);
  --*(_QWORD *)(result + 208);
  return result;
}
