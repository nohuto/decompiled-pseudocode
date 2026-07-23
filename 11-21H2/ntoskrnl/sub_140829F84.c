/*
 * XREFs of sub_140829F84 @ 0x140829F84
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_1406373F4 @ 0x1406373F4 (sub_1406373F4.c)
 *     sub_14082A090 @ 0x14082A090 (sub_14082A090.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140829F84(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rdi
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  if ( qword_140D05008 )
  {
    Pool2 = ExAllocatePool2(64LL, 448LL, 1886876741LL);
    v3 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v4 = sub_14082A090(Pool2);
      if ( v4 >= 0 )
      {
        v5 = ExAllocatePool2(72LL, 8LL * *(unsigned int *)(qword_140D05008 + 16), 1635218501LL);
        v3[41] = v5;
        if ( v5 )
        {
          v6 = ExAllocatePool2(72LL, 8LL * *(unsigned int *)(qword_140D05008 + 16), 1635218501LL);
          v3[40] = v6;
          if ( v6 )
          {
            v7 = ExAllocatePool2(72LL, 8LL * *(unsigned int *)(qword_140D05008 + 16), 1635218501LL);
            v3[42] = v7;
            if ( v7 )
            {
              *(_QWORD *)(a1 + 34472) = v3;
              return (unsigned int)v4;
            }
          }
        }
        v4 = -1073741801;
      }
      v9 = (void *)v3[41];
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
      v10 = (void *)v3[40];
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      v11 = (void *)v3[42];
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      sub_1406373F4((__int64)v3);
      ExFreePoolWithTag(v3, 0);
      *(_QWORD *)(a1 + 34472) = 0LL;
      return (unsigned int)v4;
    }
    return (unsigned int)-1073741801;
  }
  return 0LL;
}
