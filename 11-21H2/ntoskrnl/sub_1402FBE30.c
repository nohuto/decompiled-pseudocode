/*
 * XREFs of sub_1402FBE30 @ 0x1402FBE30
 * Callers:
 *     sub_1402F9614 @ 0x1402F9614 (sub_1402F9614.c)
 *     sub_1403761D8 @ 0x1403761D8 (sub_1403761D8.c)
 *     sub_1406B539C @ 0x1406B539C (sub_1406B539C.c)
 *     sub_1406F884C @ 0x1406F884C (sub_1406F884C.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1407B3CD0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1407B4BA0 (SeAdjustAccessStateForAccessConstraints.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402FBE30(__int64 a1)
{
  __int16 v1; // r10
  unsigned int v2; // r11d
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // r9d

  v1 = *(_WORD *)(a1 + 2);
  v2 = 0;
  while ( (v1 & 0x10) != 0 )
  {
    if ( v1 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v5 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v5 )
        return 0LL;
      v6 = a1 + v5;
    }
    if ( !v6 )
      break;
    result = v6 + 8;
    v7 = 0;
    if ( !*(_WORD *)(v6 + 4) )
      break;
    while ( v7 < v2 || *(_BYTE *)result != 20 )
    {
      ++v7;
      result += *(unsigned __int16 *)(result + 2);
      if ( v7 >= *(unsigned __int16 *)(v6 + 4) )
        return 0LL;
    }
    if ( (*(_BYTE *)(result + 1) & 8) != 0 )
    {
      v2 = v7 + 1;
      if ( result )
        continue;
    }
    return result;
  }
  return 0LL;
}
