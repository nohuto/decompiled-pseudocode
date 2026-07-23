/*
 * XREFs of sub_1403A4CC0 @ 0x1403A4CC0
 * Callers:
 *     sub_1403A4B90 @ 0x1403A4B90 (sub_1403A4B90.c)
 * Callees:
 *     sub_1403A4DCC @ 0x1403A4DCC (sub_1403A4DCC.c)
 *     sub_1403A4EC4 @ 0x1403A4EC4 (sub_1403A4EC4.c)
 *     sub_1403B11B0 @ 0x1403B11B0 (sub_1403B11B0.c)
 *     sub_1403B1624 @ 0x1403B1624 (sub_1403B1624.c)
 *     sub_1403B19D4 @ 0x1403B19D4 (sub_1403B19D4.c)
 *     sub_140419AAC @ 0x140419AAC (sub_140419AAC.c)
 */

__int64 __fastcall sub_1403A4CC0(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rsi
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rdi

  v3 = *(IRP **)(a1 + 16);
  v4 = a1;
  v5 = *(volatile signed __int32 **)(a1 + 200);
  if ( *(_BYTE *)(a1 + 184) == 2 && *(_DWORD *)(a1 + 188) == 1 && v5 )
  {
    if ( KeGetCurrentIrql() )
    {
      if ( *(_BYTE *)(a1 + 209) )
      {
        if ( *(_DWORD *)(a1 + 192) != 1 )
          return sub_1403B19D4(a1, v4 + 248);
        _m_prefetchw((const void *)(v5 + 8));
        a1 = *((unsigned int *)v5 + 8);
        if ( (_InterlockedOr(v5 + 8, 0) & 2) != 0 )
          return sub_1403B19D4(a1, v4 + 248);
      }
    }
    if ( *(_BYTE *)(v4 + 209) )
    {
      if ( *(_DWORD *)(v4 + 192) != 1
        || (_m_prefetchw((const void *)(v5 + 8)), (_InterlockedAnd(v5 + 8, 0xFFFFFFFD) & 2) != 0) )
      {
        LOBYTE(a3) = 1;
        sub_1403B1624(*((_QWORD *)v5 + 7), *(unsigned int *)(v4 + 192), a3, *(unsigned int *)(v4 + 280));
        sub_1403B11B0(*((_QWORD *)v5 + 6), *(unsigned int *)(v4 + 192));
      }
    }
    sub_140419AAC(v5, *(unsigned int *)(v4 + 192));
  }
  sub_1403A4EC4(v3);
  return sub_1403A4DCC(v3);
}
