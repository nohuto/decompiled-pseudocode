/*
 * XREFs of sub_1405230C0 @ 0x1405230C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140522930 @ 0x140522930 (sub_140522930.c)
 *     sub_14052314C @ 0x14052314C (sub_14052314C.c)
 */

void __fastcall sub_1405230C0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    LOBYTE(a3) = 1;
    sub_14052314C(a1, *(unsigned int *)(a1 + 20), a3);
  }
  else if ( *(_DWORD *)(a1 + 8) == 2 && !*(_BYTE *)(a1 + 12) )
  {
    sub_140522930(a1, 2, 0);
  }
}
