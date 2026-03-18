/*
 * XREFs of _ALIGN_MEM @ 0x1C015853A
 * Callers:
 *     BuildBltAAInfo @ 0x1C0259950 (BuildBltAAInfo.c)
 *     BuildExpandAAInfo @ 0x1C0259B30 (BuildExpandAAInfo.c)
 *     BuildShrinkAAInfo @ 0x1C025A6D0 (BuildShrinkAAInfo.c)
 *     BuildTileAAInfo @ 0x1C025ADF0 (BuildTileAAInfo.c)
 *     SetupAAHeader @ 0x1C025B898 (SetupAAHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ALIGN_MEM(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  __int64 result; // rax

  v2 = a2 + 8;
  v3 = -1;
  if ( a2 + 8 >= a2 )
    v3 = a2 + 8;
  result = v2 < a2 ? 0x80070216 : 0;
  *a1 = v3;
  if ( v2 >= a2 )
    *a1 = v3 & 0xFFFFFFF8;
  return result;
}
