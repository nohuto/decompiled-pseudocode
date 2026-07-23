/*
 * XREFs of sub_14040BBDC @ 0x14040BBDC
 * Callers:
 *     sub_140400FB0 @ 0x140400FB0 (sub_140400FB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040BBDC(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // rcx

  v2 = 0LL;
  v3 = 16 * *(_DWORD *)(a1 + 4);
  if ( v3 )
  {
    v4 = v3;
    do
    {
      v2 = *a2++ | (unsigned int)v2;
      --v4;
    }
    while ( v4 );
  }
  return (unsigned int)~((unsigned __int64)-v2 >> 32);
}
