/*
 * XREFs of sub_14096EC0C @ 0x14096EC0C
 * Callers:
 *     sub_140753C58 @ 0x140753C58 (sub_140753C58.c)
 *     sub_14096ECCC @ 0x14096ECCC (sub_14096ECCC.c)
 * Callees:
 *     sub_14059A668 @ 0x14059A668 (sub_14059A668.c)
 *     sub_14096EBB0 @ 0x14096EBB0 (sub_14096EBB0.c)
 *     sub_14096EBDC @ 0x14096EBDC (sub_14096EBDC.c)
 */

__int64 __fastcall sub_14096EC0C(unsigned __int64 a1, __int64 a2)
{
  __int16 v3; // di
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax

  v3 = a1;
  v4 = 0;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  v6 = sub_14059A668(a1, *(const signed __int64 **)a2);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
      return (v3 & 0xF) == (unsigned __int64)*(unsigned int *)(a2 + 24);
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
        return 1;
    }
    else
    {
      if ( !sub_14096EBB0(v5) && v9 == *(_DWORD *)(a2 + 24) )
        return 1;
      if ( !sub_14096EBDC(v10) )
      {
        v12 = *(unsigned int *)(a2 + 24);
        if ( v11 == v12 && (v3 & 0xFFF) != v12 )
          return 1;
      }
    }
  }
  return v4;
}
