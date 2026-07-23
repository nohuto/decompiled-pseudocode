/*
 * XREFs of sub_1405FDEFC @ 0x1405FDEFC
 * Callers:
 *     sub_140604224 @ 0x140604224 (sub_140604224.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1405FDEFC(__int64 a1)
{
  __int64 v1; // r8
  char v3; // r9
  __int64 v4; // r10

  v1 = 0LL;
  if ( !a1 )
    return 0;
  if ( !(_DWORD)qword_140C1B2D0 )
    return 0;
  v3 = 1;
  *(_DWORD *)a1 = BugCheckCode;
  *(_QWORD *)(a1 + 8) = BugCheckParameter1;
  v4 = 2LL;
  *(_QWORD *)(a1 + 16) = qword_140D57540;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&xmmword_140D57548;
  do
  {
    *(_DWORD *)(v1 + *(_QWORD *)(a1 + 40)) = *(_DWORD *)((char *)&qword_140C1B2D0 + v1);
    v1 += 4LL;
    --v4;
  }
  while ( v4 );
  *(_DWORD *)(a1 + 48) = dword_140C1AA7C;
  *(_DWORD *)(a1 + 52) = dword_140C1AA88;
  *(_DWORD *)(a1 + 56) = dword_140C1ACA0;
  return v3;
}
