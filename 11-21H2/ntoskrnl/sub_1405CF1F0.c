/*
 * XREFs of sub_1405CF1F0 @ 0x1405CF1F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1405CF1F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned int i; // r9d
  __int64 v5; // r8
  char v6; // al

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 72);
  if ( !v2 || !*(_QWORD *)(v2 + 104) )
    return 3221225474LL;
  for ( i = 0;
        i < *(_DWORD *)(a2 + 4);
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v5) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16 * v5) + 72LL) )
  {
    v5 = i++;
  }
  if ( byte_140D04898 )
    goto LABEL_9;
  v6 = sub_14042A5E0(v3, 31LL);
  if ( !v6 )
    byte_140D04898 = 1;
  if ( byte_140D04898 )
LABEL_9:
    v6 = sub_14042A5E0(v3, 14LL);
  return v6 == 0 ? 0xC00000BB : 0;
}
