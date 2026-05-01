/*
 * XREFs of sub_180006F94 @ 0x180006F94
 * Callers:
 *     sub_180006E68 @ 0x180006E68 (sub_180006E68.c)
 *     sub_180008C74 @ 0x180008C74 (sub_180008C74.c)
 * Callees:
 *     sub_18000701C @ 0x18000701C (sub_18000701C.c)
 */

__int64 __fastcall sub_180006F94(__int64 a1, __int64 *a2)
{
  __int64 *v4; // rbx
  __int64 **v5; // rcx
  __int64 v6; // rbx

  RtlRbRemoveNode(a2 + 3, a1);
  v4 = (__int64 *)(a1 + 24);
  v5 = (__int64 **)a2[6];
  if ( *v5 != a2 + 5 )
    __fastfail(3u);
  v4[1] = (__int64)v5;
  *v4 = (__int64)(a2 + 5);
  *v5 = v4;
  a2[6] = (__int64)v4;
  v6 = *a2;
  RtlAcquireSRWLockExclusive(*a2 + 32);
  *(_DWORD *)(v6 + 64) |= 2u;
  sub_18000701C(v6);
  return RtlReleaseSRWLockExclusive(v6 + 32);
}
