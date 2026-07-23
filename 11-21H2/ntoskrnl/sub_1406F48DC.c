/*
 * XREFs of sub_1406F48DC @ 0x1406F48DC
 * Callers:
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 * Callees:
 *     sub_140970668 @ 0x140970668 (sub_140970668.c)
 */

char __fastcall sub_1406F48DC(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x20) != 0 )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 62) & 0xC;
    if ( (_BYTE)v1 == 8 )
    {
      v2 = *(_QWORD *)(a1 + 96);
      if ( (*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        LOBYTE(v1) = sub_140970668((PVOID)(*(_QWORD *)(v2 + 48) & 0xFFFFFFFFFFFFFFF0uLL));
        *(_QWORD *)(v2 + 48) = 0LL;
      }
    }
  }
  return v1;
}
