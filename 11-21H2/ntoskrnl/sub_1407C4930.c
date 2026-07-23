/*
 * XREFs of sub_1407C4930 @ 0x1407C4930
 * Callers:
 *     sub_140680100 @ 0x140680100 (sub_140680100.c)
 *     sub_1406E137C @ 0x1406E137C (sub_1406E137C.c)
 *     sub_1407C3850 @ 0x1407C3850 (sub_1407C3850.c)
 *     sub_1407C8830 @ 0x1407C8830 (sub_1407C8830.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407C4930(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx
  int v3; // eax

  v1 = 0;
  while ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 && *(_QWORD *)(a1 + 72) )
    {
      a1 = *(_QWORD *)(a1 + 72);
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 80);
      v3 = *(unsigned __int16 *)(v2 + 24);
      if ( (*(_DWORD *)v2 & 1) != 0 )
        v3 *= 2;
      a1 = *(_QWORD *)(a1 + 72);
      v1 += v3 + 2;
    }
  }
  return v1;
}
