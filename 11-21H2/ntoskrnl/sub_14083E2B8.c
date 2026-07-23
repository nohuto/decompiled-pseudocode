/*
 * XREFs of sub_14083E2B8 @ 0x14083E2B8
 * Callers:
 *     sub_14083E1A0 @ 0x14083E1A0 (sub_14083E1A0.c)
 * Callees:
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14083E2B8(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7)
{
  int v10; // edx
  int v11; // ebx
  __int64 Pool2; // rax
  __int64 v13; // rdi
  __int64 v14; // r13
  unsigned int v15; // eax
  unsigned int v16; // eax
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v18[0] = 0LL;
  *a7 = 0;
  if ( a6 )
    *a5 = 0;
  if ( a2 == 2 )
  {
    v10 = 7;
  }
  else
  {
    if ( a2 != 4 )
      return (unsigned int)-1073741811;
    v10 = 8;
  }
  v11 = sub_14078014C(a1, v10, (__int64)v18);
  if ( v11 >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 48LL, 1380994640LL);
    v13 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = 0LL;
      *(_DWORD *)(Pool2 + 44) = 0;
      *(_QWORD *)(Pool2 + 24) = a4;
      v14 = v18[0];
      *(_DWORD *)Pool2 = a2;
      *(_QWORD *)(Pool2 + 16) = a3;
      *(_QWORD *)(Pool2 + 32) = a5;
      *(_DWORD *)(Pool2 + 40) = a6;
      v11 = sub_14083EAEC(a1, v14, &sub_14084C530, Pool2);
      if ( v11 >= 0 )
      {
        if ( a2 != 4
          || !*(_BYTE *)(a1 + 4)
          || (*(_QWORD *)(v13 + 8) = v14, v11 = sub_14078014C(a1, 9, (__int64)v18), v11 >= 0)
          && (v18[0] == *(_QWORD *)(v13 + 8) || (v11 = sub_14083EAEC(a1, v18[0], &sub_14084C530, v13), v11 >= 0)) )
        {
          v15 = *(_DWORD *)(v13 + 44);
          *a7 = v15;
          if ( v15 )
          {
            v16 = v15 + 1;
            *a7 = v16;
            if ( a5 && a6 >= v16 )
              a5[v16 - 1] = 0;
            else
              v11 = -1073741789;
          }
        }
      }
      ExFreePoolWithTag((PVOID)v13, 0);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v11;
}
