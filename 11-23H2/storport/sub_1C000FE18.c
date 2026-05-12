/*
 * XREFs of sub_1C000FE18 @ 0x1C000FE18
 * Callers:
 *     sub_1C00031D0 @ 0x1C00031D0 (sub_1C00031D0.c)
 *     sub_1C000FC10 @ 0x1C000FC10 (sub_1C000FC10.c)
 *     sub_1C0037720 @ 0x1C0037720 (sub_1C0037720.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C0066CAC @ 0x1C0066CAC (sub_1C0066CAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C000FE18(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int i; // r10d

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 904); ++i )
    v1 += _InterlockedCompareExchange((volatile signed __int32 *)(320LL * i + *(_QWORD *)(a1 + 896) + 192), 0, 0);
  return v1;
}
