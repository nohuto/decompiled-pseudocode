/*
 * XREFs of RtlTraceDatabaseAdd @ 0x1405EDE20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405EE200 @ 0x1405EE200 (sub_1405EE200.c)
 *     sub_1405EE268 @ 0x1405EE268 (sub_1405EE268.c)
 *     sub_1405EE4E0 @ 0x1405EE4E0 (sub_1405EE4E0.c)
 */

char __fastcall RtlTraceDatabaseAdd(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  sub_1405EE200();
  LOBYTE(a4) = sub_1405EE268(a1, a2, a3, a4);
  sub_1405EE4E0(a1);
  return a4;
}
