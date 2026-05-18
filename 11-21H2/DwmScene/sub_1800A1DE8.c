/*
 * XREFs of sub_1800A1DE8 @ 0x1800A1DE8
 * Callers:
 *     sub_1800A30A0 @ 0x1800A30A0 (sub_1800A30A0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800120F4 @ 0x1800120F4 (sub_1800120F4.c)
 */

_QWORD *__fastcall sub_1800A1DE8(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v9 = 0LL;
  if ( !v3 )
LABEL_7:
    sub_1800120F4();
  v5 = *(_DWORD *)(v3 + 8);
  do
  {
    if ( !v5 )
      goto LABEL_7;
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 8), v5 + 1, v5);
  }
  while ( v6 != v5 );
  v7 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v9 + 1) = 0LL;
  a2[1] = v7;
  *a2 = a1 + 1876;
  sub_180010910((__int64)&v9);
  return a2;
}
