/*
 * XREFs of sub_140AA42B0 @ 0x140AA42B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406021F8 @ 0x1406021F8 (sub_1406021F8.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140AA55E8 @ 0x140AA55E8 (sub_140AA55E8.c)
 */

__int64 __fastcall sub_140AA42B0(__int64 a1)
{
  ULONG_PTR v1; // rdi
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // bl

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_BYTE *)(a1 + 8);
  sub_1406021F8(v1, 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    sub_140A8C924(0xC4u, 0x32uLL, CurrentIrql, v1, 0LL);
  LOBYTE(v3) = v2;
  LOBYTE(v4) = CurrentIrql;
  return sub_140AA55E8(v4, v3);
}
