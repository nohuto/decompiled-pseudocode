/*
 * XREFs of sub_1403BA9B4 @ 0x1403BA9B4
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 *     sub_14050DC38 @ 0x14050DC38 (sub_14050DC38.c)
 * Callees:
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 sub_1403BA9B4()
{
  ULONG_PTR v0; // rbx
  ULONG_PTR v1; // rdi
  int v2; // ecx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // r9

  v0 = qword_140C4E500;
  v1 = qword_140C4E390;
  if ( qword_140C4E500 )
    v0 = -(__int64)(*(_DWORD *)(qword_140C4E500 + 220) < 0x40u) & qword_140C4E500;
  KeQueryPerformanceCounter(0LL);
  qword_140C4C7F8 = MEMORY[0xFFFFF78000000014];
  v2 = *(_DWORD *)(v1 + 220);
  if ( is_mul_ok(1LL << v2, 0xFAuLL) )
    v3 = (unsigned __int64)(1LL << v2) * (unsigned __int128)0xFAuLL / *(unsigned __int64 *)(v1 + 192);
  else
    v3 = 120000LL;
  v4 = v3;
  if ( v0 )
  {
    v6 = 1LL << *(_DWORD *)(v0 + 220);
    if ( is_mul_ok(v6, 0xFAuLL) )
      v4 = v6 * (unsigned __int128)0xFAuLL / *(unsigned __int64 *)(v0 + 192);
    else
      v4 = 120000LL;
  }
  if ( v4 >= v3 )
    v4 = v3;
  if ( v4 > 0x1D4C0 || !v4 )
    LODWORD(v4) = 120000;
  return sub_1402E2D20((unsigned __int64)&qword_140C4E3A0, -10000LL * (int)v4, v4, 0, (__int64)&dword_140C4E440);
}
