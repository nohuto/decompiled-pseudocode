/*
 * XREFs of sub_14025A078 @ 0x14025A078
 * Callers:
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_1407730FC @ 0x1407730FC (sub_1407730FC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14025A078(__int64 a1)
{
  int v1; // edx
  __int64 v2; // r8
  int v3; // eax
  __int64 result; // rax

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 52);
      v2 = *(_QWORD *)(v2 + 24);
      result = v3 & 0x40000;
      v1 |= result;
    }
    while ( v2 );
    if ( v1 )
    {
      do
      {
        *(_DWORD *)(a1 + 52) |= v1;
        a1 = *(_QWORD *)(a1 + 24);
      }
      while ( a1 );
    }
  }
  return result;
}
