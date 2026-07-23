/*
 * XREFs of RtlTraceDatabaseValidate @ 0x1405EE1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405EE200 @ 0x1405EE200 (sub_1405EE200.c)
 *     sub_1405EE4E0 @ 0x1405EE4E0 (sub_1405EE4E0.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // r8

  sub_1405EE200();
  v2 = *(_DWORD *)(a1 + 112);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 120);
    v4 = v2;
    do
    {
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
  sub_1405EE4E0(a1);
  return 1;
}
