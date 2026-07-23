/*
 * XREFs of sub_1409898D8 @ 0x1409898D8
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409898D8(_QWORD *a1, unsigned int *a2)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  int v6; // esi
  unsigned int v7; // r9d
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  _DWORD *Pool2; // rax
  _OWORD *v12; // rbp
  __int64 v13; // r14
  size_t v14; // rbx

  v2 = qword_140C23030;
  v3 = 0;
  v6 = 0;
  v7 = 4;
  while ( (__int64 *)v2 != &qword_140C23030 )
  {
    ++v6;
    v8 = v7 + 16;
    if ( v7 + 16 < v7 )
      return (unsigned int)-1073741675;
    v7 = v8 + *(_DWORD *)(v2 + 28);
    if ( v7 < v8 )
      return (unsigned int)-1073741675;
    v2 = *(_QWORD *)v2;
  }
  v9 = v7 + 16;
  if ( v6 )
    v9 = v7;
  v10 = v9;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v9, 1718968931LL);
  if ( Pool2 )
  {
    *a2 = v10;
    v12 = Pool2 + 1;
    *a1 = Pool2;
    *Pool2 = v10;
    if ( v6 )
    {
      v13 = qword_140C23030;
      while ( (__int64 *)v13 != &qword_140C23030 && v6 )
      {
        v14 = (unsigned int)(*(_DWORD *)(v13 + 28) + 16);
        memmove(v12, (const void *)(v13 + 16), v14);
        v13 = *(_QWORD *)v13;
        v12 = (_OWORD *)((char *)v12 + v14);
        --v6;
      }
    }
    else
    {
      *v12 = 0LL;
      Pool2[3] = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
