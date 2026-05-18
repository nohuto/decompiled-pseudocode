/*
 * XREFs of sub_180058724 @ 0x180058724
 * Callers:
 *     sub_18005B3E0 @ 0x18005B3E0 (sub_18005B3E0.c)
 * Callees:
 *     sub_18001F810 @ 0x18001F810 (sub_18001F810.c)
 */

char __fastcall sub_180058724(__int64 **a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 *v3; // r10
  __int64 v4; // rbx
  char v5; // r11
  _WORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10

  v2 = a1[1];
  v3 = *a1;
  if ( ((((char *)v2 - (char *)*a1) ^ (a2[1] - *a2)) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
    return 1;
  v4 = *a2 - (_QWORD)v3;
  v5 = 0;
  while ( v3 != v2 )
  {
    v6 = (_WORD *)((char *)v3 + v4);
    if ( *(unsigned __int64 *)((char *)v3 + v4 + 24) >= 8 )
      v6 = *(_WORD **)v6;
    v7 = (__int64)v3;
    v8 = v3[2];
    if ( (unsigned __int64)v3[3] >= 8 )
      v7 = *v3;
    if ( v8 != *(__int64 *)((char *)v3 + v4 + 16) || (unsigned int)sub_18001F810(v7, v6, v8) )
      return 1;
    v3 = (__int64 *)(v9 + 32);
  }
  return v5;
}
