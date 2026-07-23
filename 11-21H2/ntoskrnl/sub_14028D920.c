/*
 * XREFs of sub_14028D920 @ 0x14028D920
 * Callers:
 *     sub_140247300 @ 0x140247300 (sub_140247300.c)
 *     sub_140247874 @ 0x140247874 (sub_140247874.c)
 *     sub_14028D58C @ 0x14028D58C (sub_14028D58C.c)
 *     sub_14028D878 @ 0x14028D878 (sub_14028D878.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14028D920(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = 0LL;
  if ( !a3 )
    v3 = 2LL * (*(_DWORD *)(a1 + 152) & 0x200);
  return a2 + v3 + 1024;
}
