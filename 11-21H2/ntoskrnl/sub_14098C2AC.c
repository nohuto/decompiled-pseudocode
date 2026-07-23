/*
 * XREFs of sub_14098C2AC @ 0x14098C2AC
 * Callers:
 *     sub_140845880 @ 0x140845880 (sub_140845880.c)
 *     sub_14098BC1C @ 0x14098BC1C (sub_14098BC1C.c)
 * Callees:
 *     sub_1405CB970 @ 0x1405CB970 (sub_1405CB970.c)
 *     sub_1405DD8E4 @ 0x1405DD8E4 (sub_1405DD8E4.c)
 *     sub_14098BB94 @ 0x14098BB94 (sub_14098BB94.c)
 *     sub_14098C27C @ 0x14098C27C (sub_14098C27C.c)
 *     sub_140A4A768 @ 0x140A4A768 (sub_140A4A768.c)
 */

char __fastcall sub_14098C2AC(signed __int32 *a1, char a2)
{
  __int64 v4; // rbp
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int16 v7; // di
  signed __int32 v8; // eax
  signed __int32 v9; // ett

  v4 = MEMORY[0xFFFFF78000000008];
  _m_prefetchw(a1);
  v5 = *a1;
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange(a1, v5, v5);
  }
  while ( v6 != v5 );
  v7 = v5;
  if ( (v5 & 0x10) != 0 )
  {
    *((_BYTE *)a1 + 85) = 1;
    sub_140A4A768(a1 + 15);
    _InterlockedOr(a1, 0x20u);
  }
  if ( (v7 & 0x80u) != 0 )
    sub_14098BB94();
  if ( !a2 && (v7 & 0x200) == 0 )
  {
    _m_prefetchw(&dword_140C1CB40);
    v8 = dword_140C1CB40;
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange(&dword_140C1CB40, v8, v8);
    }
    while ( v9 != v8 );
    if ( !v8 )
      sub_1405CB970();
  }
  _InterlockedAnd(a1, 0xFFFFFF6F);
  if ( !a2 )
    sub_14098C27C(a1);
  return sub_1405DD8E4(0, 0, (MEMORY[0xFFFFF78000000008] - v4) / 0x989680uLL);
}
