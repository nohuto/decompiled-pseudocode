/*
 * XREFs of sub_14099EDDC @ 0x14099EDDC
 * Callers:
 *     sub_14099EE9C @ 0x14099EE9C (sub_14099EE9C.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14099EDDC(int a1, _WORD *a2, _QWORD *a3, unsigned int *a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // edi
  int v9; // esi
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 Pool2; // rax
  _DWORD *v13; // r14

  v4 = 2 * a1;
  v6 = 2 * a1 + 8;
  v9 = a1;
  if ( (unsigned int)(2 * a1) >= 0xFFFFFFF8 )
    return (unsigned int)-1073741675;
  v10 = 0;
  if ( a1 )
  {
    v11 = (unsigned int)(a1 - 1);
    if ( !a2[v11] )
    {
      v9 = v11;
      goto LABEL_7;
    }
  }
  if ( v6 + 2 < v6 )
    return (unsigned int)-1073741675;
  v6 += 2;
LABEL_7:
  Pool2 = ExAllocatePool2(256LL, v6, 1297433668LL);
  v13 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    memmove((void *)(Pool2 + 8), a2, v4);
    *v13 = 0;
    v13[1] = v9;
    *a3 = v13;
    if ( a4 )
      *a4 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v10;
}
