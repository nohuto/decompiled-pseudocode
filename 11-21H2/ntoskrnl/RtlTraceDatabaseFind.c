/*
 * XREFs of RtlTraceDatabaseFind @ 0x1405EE110
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405EE200 @ 0x1405EE200 (sub_1405EE200.c)
 *     sub_1405EE42C @ 0x1405EE42C (sub_1405EE42C.c)
 *     sub_1405EE4E0 @ 0x1405EE4E0 (sub_1405EE4E0.c)
 */

char __fastcall RtlTraceDatabaseFind(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // bl

  sub_1405EE200();
  v8 = sub_1405EE42C(a1, a2, a3, a4);
  if ( v8 )
    ++*(_QWORD *)(a1 + 144);
  sub_1405EE4E0(a1);
  return v8;
}
