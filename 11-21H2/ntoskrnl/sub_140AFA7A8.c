/*
 * XREFs of sub_140AFA7A8 @ 0x140AFA7A8
 * Callers:
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 * Callees:
 *     sub_140213A40 @ 0x140213A40 (sub_140213A40.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

int __fastcall sub_140AFA7A8(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebp
  int *v3; // rbx
  _DWORD *v4; // rdi
  int v6; // esi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = 0;
  v3 = &dword_140B5873C;
  v4 = 0LL;
  do
  {
    v6 = *(v3 - 1);
    if ( v6 != v2 )
    {
      v1 = (_UNKNOWN **)sub_140213A40(a1, v6, 0, 0);
      v4 = v1;
      v2 = v6;
    }
    if ( v4 )
    {
      if ( *(_BYTE *)v3 != 1
        || (LODWORD(v1) = memcmp((char *)v4 + 10, *(const void **)(v3 + 1), (unsigned int)v3[3]), !(_DWORD)v1)
        && (*((_BYTE *)v3 + 16) != 1
         || (LODWORD(v1) = memcmp(v4 + 4, *(const void **)(v3 + 5), (unsigned int)v3[7]), !(_DWORD)v1)
         && (*((_BYTE *)v3 + 32) != 1 || (LODWORD(v1) = v3[9], v4[6] == (_DWORD)v1))) )
      {
        LODWORD(v1) = sub_14042A5E0(v3 - 3, v4);
      }
    }
    v3 += 14;
  }
  while ( *(_QWORD *)(v3 - 3) );
  return (int)v1;
}
