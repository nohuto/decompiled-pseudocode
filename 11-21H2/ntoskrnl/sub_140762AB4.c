/*
 * XREFs of sub_140762AB4 @ 0x140762AB4
 * Callers:
 *     sub_140762A68 @ 0x140762A68 (sub_140762A68.c)
 *     sub_140810E2C @ 0x140810E2C (sub_140810E2C.c)
 *     sub_1408193BC @ 0x1408193BC (sub_1408193BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140762AB4(int a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  char v3; // dl

  v1 = qword_140C23030;
  v2 = 0LL;
  v3 = 0;
  while ( (__int64 *)v1 != &qword_140C23030 )
  {
    v2 = v1;
    if ( *(_DWORD *)(v1 + 24) == a1 )
    {
      v3 = 1;
      return v2 & -(__int64)(v3 != 0);
    }
    v1 = *(_QWORD *)v1;
  }
  return v2 & -(__int64)(v3 != 0);
}
