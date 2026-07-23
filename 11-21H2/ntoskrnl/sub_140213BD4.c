/*
 * XREFs of sub_140213BD4 @ 0x140213BD4
 * Callers:
 *     sub_140213908 @ 0x140213908 (sub_140213908.c)
 *     sub_140213AC0 @ 0x140213AC0 (sub_140213AC0.c)
 *     sub_140AF9A94 @ 0x140AF9A94 (sub_140AF9A94.c)
 * Callees:
 *     strncmp @ 0x1403E0910 (strncmp.c)
 */

__int64 __fastcall sub_140213BD4(int a1, const char *a2, const char *a3)
{
  __int64 v3; // rdi
  __int64 v7; // rbx

  v3 = qword_140CE2210;
  v7 = 0LL;
  while ( (__int64 *)v3 != &qword_140CE2210 )
  {
    if ( *(_DWORD *)(v3 + 24) == a1
      && (!a2 || !strncmp(a2, (const char *)(v3 + 34), 6uLL))
      && (!a3 || !strncmp(a3, (const char *)(v3 + 40), 8uLL)) )
    {
      return v3 + 24;
    }
    v3 = *(_QWORD *)v3;
  }
  return v7;
}
