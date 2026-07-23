/*
 * XREFs of sub_1405CF170 @ 0x1405CF170
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CF170(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  __int64 v4; // rcx
  __int64 v5; // r9

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 || !*(_QWORD *)(v2 + 104) )
    return 3221225474LL;
  if ( *(_DWORD *)a2 )
  {
    do
    {
      v5 = v3++;
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16 * v5) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 16 * v5) + 72LL);
    }
    while ( v3 < *(_DWORD *)a2 );
  }
  return (unsigned __int8)sub_14042A5E0(v4, 32LL) == 0 ? 0xC00000BB : 0;
}
