/*
 * XREFs of sub_14025CB30 @ 0x14025CB30
 * Callers:
 *     sub_14025DAE4 @ 0x14025DAE4 (sub_14025DAE4.c)
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 *     sub_140297430 @ 0x140297430 (sub_140297430.c)
 *     sub_140298378 @ 0x140298378 (sub_140298378.c)
 *     sub_1402F444C @ 0x1402F444C (sub_1402F444C.c)
 *     sub_14057C724 @ 0x14057C724 (sub_14057C724.c)
 *     sub_1405E7C30 @ 0x1405E7C30 (sub_1405E7C30.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_14025CB30(_DWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r10
  __int64 v6; // rbx
  int v8; // esi
  __int64 v9; // r9
  char *v10; // rdx
  unsigned int v11; // ecx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r11
  __int64 v15; // rax
  _DWORD *v16; // r8

  v4 = a2;
  if ( a2 - 2 > 0x3D )
    return 0LL;
  v6 = 1LL << a2;
  if ( ((*(_QWORD *)a3 | *(_QWORD *)(a3 + 816)) & (1LL << a2)) == 0 )
    return 0LL;
  v8 = *(_DWORD *)(a3 + 20);
  if ( (v8 & 0xFFFFFFF8) != 0 )
    return 0LL;
  v9 = (int)a1[4];
  if ( *a1 > (int)v9 )
    return 0LL;
  if ( a1[1] + *a1 < (int)v9 + a1[5] )
    return 0LL;
  v10 = (char *)a1 + v9;
  if ( !(_DWORD *)((char *)a1 + v9) )
    return 0LL;
  v11 = 2;
  if ( a4 )
  {
    if ( (v8 & 2) != 0 )
      v12 = *(_DWORD *)(a3 + 4 * v4 + 556);
    else
      v12 = *(_DWORD *)(a3 + 8 * v4 + 28);
    *a4 = v12;
  }
  if ( (*(_DWORD *)(a3 + 20) & 2) != 0 )
  {
    v13 = *((_QWORD *)v10 + 1);
    if ( (v6 & v13) != 0 )
    {
      v14 = *(_QWORD *)(a3 + 544);
      v15 = 576LL;
      if ( (unsigned int)v4 > 2 )
      {
        v16 = (_DWORD *)(a3 + 564);
        do
        {
          if ( ((1LL << v11) & v13) != 0 )
          {
            if ( ((1LL << v11) & v14) != 0 )
              LODWORD(v15) = (v15 + 63) & 0xFFFFFFC0;
            v15 = (unsigned int)(*v16 + v15);
          }
          ++v11;
          ++v16;
        }
        while ( v11 < (unsigned int)v4 );
      }
      if ( (v6 & v14) != 0 )
        v15 = ((_DWORD)v15 + 63) & 0xFFFFFFC0;
      return &v10[v15 - 512];
    }
    return 0LL;
  }
  v15 = *(unsigned int *)(a3 + 8 * v4 + 24);
  return &v10[v15 - 512];
}
