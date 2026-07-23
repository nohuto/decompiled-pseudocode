/*
 * XREFs of MmMarkPhysicalMemoryAsGood @ 0x14058FE30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14058EB84 @ 0x14058EB84 (sub_14058EB84.c)
 */

__int64 __fastcall MmMarkPhysicalMemoryAsGood(_DWORD *a1, _DWORD *a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rdx

  if ( (*a1 & 0xFFF) != 0 )
    return 3221225711LL;
  if ( (*a2 & 0xFFF) != 0 )
    return 3221225712LL;
  v4 = *(_QWORD *)a1 >> 12;
  v5 = v4 + (*(_QWORD *)a2 >> 12);
  if ( v4 >= v5 )
    return 3221225711LL;
  *(_QWORD *)a2 = sub_14058EB84(v4, v5) << 12;
  return 0LL;
}
