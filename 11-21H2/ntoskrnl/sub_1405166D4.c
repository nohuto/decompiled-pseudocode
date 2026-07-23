/*
 * XREFs of sub_1405166D4 @ 0x1405166D4
 * Callers:
 *     sub_140515EA0 @ 0x140515EA0 (sub_140515EA0.c)
 *     sub_140515F20 @ 0x140515F20 (sub_140515F20.c)
 *     sub_140516360 @ 0x140516360 (sub_140516360.c)
 *     sub_1405163D0 @ 0x1405163D0 (sub_1405163D0.c)
 * Callees:
 *     sub_140516878 @ 0x140516878 (sub_140516878.c)
 *     sub_140516B1C @ 0x140516B1C (sub_140516B1C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405166D4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        char *P,
        unsigned int a12,
        _QWORD *a13)
{
  __int64 *v13; // rbx
  int v15; // ebx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  char *Pool2; // rbp
  char *v22; // rdi

  v13 = a4;
  if ( a4 )
  {
    if ( a13 )
      *a13 = 0LL;
    while ( 1 )
    {
      v17 = *((unsigned int *)v13 + 10);
      if ( a5 < v17 )
        break;
      v13 = (__int64 *)*v13;
      a5 -= v17;
      if ( !v13 )
        return (unsigned int)-1073741811;
    }
    v18 = sub_140516B1C(v13, a5, a6);
    v19 = 3LL * v18;
    v20 = 24LL * v18 + 120;
    if ( P )
    {
      if ( a12 < v20 )
        return (unsigned int)-1073741789;
      Pool2 = P;
    }
    else
    {
      Pool2 = (char *)ExAllocatePool2(66LL, v20, 1147953480LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    v22 = &Pool2[8 * v19 + 16];
    v22[97] = P == 0LL;
    *((_QWORD *)v22 + 3) = a1;
    *((_QWORD *)v22 + 4) = a2;
    *((_QWORD *)v22 + 5) = *(_QWORD *)(a2 + 32);
    *((_QWORD *)v22 + 8) = a8;
    *((_QWORD *)v22 + 9) = a9;
    *((_DWORD *)v22 + 15) = a5;
    *((_DWORD *)v22 + 14) = a6;
    *((_QWORD *)v22 + 6) = v13;
    *((_QWORD *)v22 + 10) = Pool2;
    v22[96] = a7 & 1;
    *((_DWORD *)v22 + 4) = 1;
    v22[98] = 0;
    *((_QWORD *)v22 + 11) = 0LL;
    if ( a3 )
    {
      *(_QWORD *)(a3 + 88) = v22;
      *((_QWORD *)v22 + 11) = a3 + 8;
    }
    v15 = sub_140516878(v22);
    if ( v15 < 0 )
    {
      if ( v22[97] )
        ExFreePoolWithTag(Pool2, 0);
    }
    else if ( a13 )
    {
      *a13 = Pool2;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v15;
}
