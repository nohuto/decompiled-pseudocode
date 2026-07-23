/*
 * XREFs of sub_140761C98 @ 0x140761C98
 * Callers:
 *     sub_1407603D4 @ 0x1407603D4 (sub_1407603D4.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 * Callees:
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 */

PVOID *sub_140761C98()
{
  PVOID *v0; // r8
  PVOID *v1; // r10
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // r9

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = &PsLoadedModuleList;
  while ( v0 != v1 )
  {
    v2 = (__int64)v0[14];
    if ( v2 )
    {
      v3 = sub_140287970(v2);
      if ( v4 == v3 )
        return v0;
    }
    v0 = (PVOID *)*v0;
  }
  return 0LL;
}
