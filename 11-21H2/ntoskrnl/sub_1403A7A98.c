/*
 * XREFs of sub_1403A7A98 @ 0x1403A7A98
 * Callers:
 *     sub_140AAB88C @ 0x140AAB88C (sub_140AAB88C.c)
 *     sub_140AAB930 @ 0x140AAB930 (sub_140AAB930.c)
 * Callees:
 *     sub_140AABA50 @ 0x140AABA50 (sub_140AABA50.c)
 */

__int64 __fastcall sub_1403A7A98(__int64 a1)
{
  __int64 v1; // r9
  unsigned int *v2; // rax
  unsigned int v3; // r10d
  int v4; // eax
  int v5; // r10d
  unsigned int *v6; // rax
  int v7; // eax
  int v8; // r10d

  v1 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 72) & 1) == 0 )
    return 0LL;
  v2 = *(unsigned int **)(a1 + 24);
  v3 = 112;
  if ( v2 )
  {
    v4 = sub_140AABA50(*v2, v2[1], v2[2], a1);
    v3 = v4 + v5;
  }
  v6 = *(unsigned int **)(v1 + 32);
  if ( v6 )
  {
    v7 = sub_140AABA50(*v6, v6[1], v6[2], v1);
    return (unsigned int)(v7 + v8);
  }
  return v3;
}
