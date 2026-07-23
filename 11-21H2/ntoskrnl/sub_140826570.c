/*
 * XREFs of sub_140826570 @ 0x140826570
 * Callers:
 *     sub_140826000 @ 0x140826000 (sub_140826000.c)
 * Callees:
 *     sub_1408265D0 @ 0x1408265D0 (sub_1408265D0.c)
 */

__int64 __fastcall sub_140826570(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // di
  int v5; // edx

  v3 = qword_140C445B0;
  v4 = a1;
  v5 = 0;
  while ( (__int64 *)v3 != &qword_140C445B0 )
  {
    if ( (*(_DWORD *)(v3 + 64) & 2) == 0 )
    {
      LOBYTE(a3) = v4;
      v5 = sub_1408265D0(a1, *(_QWORD *)(v3 + 24), a3);
      if ( v5 < 0 )
        break;
    }
    v3 = *(_QWORD *)v3;
  }
  return (unsigned int)v5;
}
