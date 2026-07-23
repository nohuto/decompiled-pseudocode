/*
 * XREFs of sub_140A33A58 @ 0x140A33A58
 * Callers:
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 * Callees:
 *     sub_140A33600 @ 0x140A33600 (sub_140A33600.c)
 *     sub_140A33AD0 @ 0x140A33AD0 (sub_140A33AD0.c)
 *     sub_140A33D28 @ 0x140A33D28 (sub_140A33D28.c)
 */

char __fastcall sub_140A33A58(unsigned int *a1, LARGE_INTEGER *a2)
{
  __int64 v3; // rdx
  char v5; // cl
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a1;
  v7 = 0LL;
  if ( !(_DWORD)v3 || (int)sub_140A33D28(*((_QWORD *)a1 + 1), v3, &v7, (char *)&v7 + 8) < 0 )
    return 0;
  v5 = **((_BYTE **)a1 + 1);
  if ( v5 == 23 )
    return sub_140A33AD0(&v7, a2);
  if ( v5 == 24 )
    return sub_140A33600((__int64)&v7, a2);
  else
    return 0;
}
