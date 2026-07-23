/*
 * XREFs of sub_1402F1004 @ 0x1402F1004
 * Callers:
 *     sub_1402F09D8 @ 0x1402F09D8 (sub_1402F09D8.c)
 *     sub_1402F0B30 @ 0x1402F0B30 (sub_1402F0B30.c)
 * Callees:
 *     <none>
 */

__int16 *__fastcall sub_1402F1004(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r11
  __int16 *v3; // r8

  v1 = 0LL;
  v2 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v3 = *(__int16 **)(v2 + 32);
  if ( ((unsigned __int8)v3 & 1) == 0 )
  {
    if ( (__int64)v3 < 0 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( ((unsigned __int8)v3 & 2) != 0 )
  {
    if ( (*(_DWORD *)(v2 + 176) & *(_DWORD *)(*(unsigned __int16 *)(v2 + 180) + a1)) != *(_DWORD *)(v2 + 176) )
    {
      v3 = (__int16 *)((char *)v3 - 3);
LABEL_3:
      v3 = (__int16 *)((char *)v3 + a1);
      goto LABEL_4;
    }
    v3 = *(__int16 **)(*(unsigned __int16 *)(v2 + 182) + a1);
  }
  else
  {
    v3 = *(__int16 **)((char *)v3 + a1 - 1);
  }
LABEL_4:
  if ( v3 != &word_140C24FA0 )
    return v3;
  return (__int16 *)v1;
}
