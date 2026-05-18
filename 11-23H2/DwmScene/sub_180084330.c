/*
 * XREFs of sub_180084330 @ 0x180084330
 * Callers:
 *     sub_18008CA6C @ 0x18008CA6C (sub_18008CA6C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180084330(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  int v4; // ecx

  for ( i = a1; i != a2; a3 += 12LL )
  {
    *(_QWORD *)a3 = *(_QWORD *)i;
    v4 = *(_DWORD *)(i + 8);
    i += 12LL;
    *(_DWORD *)(a3 + 8) = v4;
  }
  return a3;
}
