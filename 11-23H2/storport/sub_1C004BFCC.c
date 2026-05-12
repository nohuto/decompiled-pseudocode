/*
 * XREFs of sub_1C004BFCC @ 0x1C004BFCC
 * Callers:
 *     sub_1C004C4E8 @ 0x1C004C4E8 (sub_1C004C4E8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1C004BFCC(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // rcx

  result = -1LL;
  v2 = (unsigned __int64 *)(a1 + 48);
  v3 = 3LL;
  do
  {
    v4 = *v2++;
    if ( v4 >= result )
      v4 = result;
    result = v4;
    --v3;
  }
  while ( v3 );
  return result;
}
