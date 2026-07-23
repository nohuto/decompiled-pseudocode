/*
 * XREFs of sub_1407F0FC0 @ 0x1407F0FC0
 * Callers:
 *     sub_1407F0C38 @ 0x1407F0C38 (sub_1407F0C38.c)
 * Callees:
 *     sub_140208C24 @ 0x140208C24 (sub_140208C24.c)
 *     sub_14036BFE0 @ 0x14036BFE0 (sub_14036BFE0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407F0FC0(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v4; // edi
  void *Pool2; // rax
  void *v6; // rbp
  const void *v7; // rdx
  int v8; // edx

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v4 = *a1 + *a2 + 8;
  if ( v4 > 0xFFFF )
    return (unsigned int)-1073741811;
  if ( a1[1] < v4 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v4, 1414616912LL);
    v6 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v7 = (const void *)*((_QWORD *)a1 + 1);
    if ( v7 )
    {
      memmove(Pool2, v7, *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0x54515750u);
    }
    *((_QWORD *)a1 + 1) = v6;
    a1[1] = v4;
  }
  v8 = sub_14036BFE0(a1, L" (");
  if ( v8 >= 0 )
  {
    v8 = sub_140208C24(a1, a2);
    if ( v8 >= 0 )
    {
      v8 = sub_14036BFE0(a1, qword_14086CB30);
      if ( v8 >= 0 )
        *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)) = 0;
    }
  }
  return (unsigned int)v8;
}
