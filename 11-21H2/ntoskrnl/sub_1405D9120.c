/*
 * XREFs of sub_1405D9120 @ 0x1405D9120
 * Callers:
 *     sub_1403C1E60 @ 0x1403C1E60 (sub_1403C1E60.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405D9120(_QWORD *a1)
{
  _DWORD *Pool2; // rax
  _DWORD *v3; // rdx
  __int64 v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rax
  unsigned int v7; // edi
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  if ( a1[4266] )
    return 0;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(4 * *((_DWORD *)qword_140D06998 + 1) + 4), 1884115024LL);
  a1[4266] = Pool2;
  if ( Pool2 )
  {
    v3 = qword_140D06998;
    *Pool2 = *((_DWORD *)qword_140D06998 + 1);
    v4 = (unsigned int)(8 * v3[1] + 8);
    v5 = (_DWORD *)ExAllocatePool2(64LL, v4, 1884115024LL);
    a1[4267] = v5;
    if ( v5 )
    {
      *v5 = *((_DWORD *)qword_140D06998 + 1);
      v6 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)v4, 1884115024LL);
      a1[4268] = v6;
      if ( v6 )
      {
        *v6 = *((_DWORD *)qword_140D06998 + 1);
        return 0;
      }
    }
  }
  v9 = (void *)a1[4266];
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x704D5050u);
    a1[4266] = 0LL;
  }
  v10 = (void *)a1[4267];
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x704D5050u);
    a1[4267] = 0LL;
  }
  v11 = (void *)a1[4268];
  v7 = -1073741670;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x704D5050u);
    a1[4268] = 0LL;
  }
  return v7;
}
