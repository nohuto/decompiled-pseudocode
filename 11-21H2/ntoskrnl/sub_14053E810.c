/*
 * XREFs of sub_14053E810 @ 0x14053E810
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_14053E810(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // edi
  _QWORD **v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  _QWORD *v14; // rax

  if ( a3[29] )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = (_QWORD **)(a3[29] + 16LL * v4);
        v6 = *v5;
        if ( *v5 == v5 )
          break;
        if ( (_QWORD **)v6[1] != v5 || (v14 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
          __fastfail(3u);
        *v5 = v14;
        v14[1] = v5;
        ExFreePoolWithTag(v6, 0x71576343u);
      }
      ++v4;
    }
    while ( v4 <= dword_140C49B10 );
  }
  v7 = (void *)a3[32];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x71576343u);
    a3[32] = 0LL;
  }
  v8 = (void *)a3[33];
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x71576343u);
    a3[33] = 0LL;
  }
  v9 = (void *)a3[35];
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x71576343u);
    a3[35] = 0LL;
  }
  v10 = (void *)a3[34];
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x71576343u);
    a3[34] = 0LL;
  }
  v11 = (void *)a3[30];
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x71576343u);
    a3[30] = 0LL;
  }
  v12 = (void *)a3[31];
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x71576343u);
    a3[31] = 0LL;
  }
  return 1;
}
