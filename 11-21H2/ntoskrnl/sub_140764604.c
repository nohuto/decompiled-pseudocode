/*
 * XREFs of sub_140764604 @ 0x140764604
 * Callers:
 *     sub_140763500 @ 0x140763500 (sub_140763500.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_1409539A8 @ 0x1409539A8 (sub_1409539A8.c)
 * Callees:
 *     sub_1407646C0 @ 0x1407646C0 (sub_1407646C0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140764604(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 *a5)
{
  unsigned int v5; // edi
  __int64 Pool2; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  void *v13; // rcx
  __int64 v14; // rbp

  v5 = 0;
  *a4 = 0;
  *a5 = 0LL;
  if ( a2 && a1 )
  {
    if ( !is_mul_ok(a1, 0x30uLL) )
      return (unsigned int)-1073741675;
    Pool2 = ExAllocatePool2(256LL, 48LL * a1, 1466986064LL);
    *a5 = Pool2;
    if ( Pool2 )
    {
      v11 = 0LL;
      if ( !a1 )
        return v5;
      while ( 1 )
      {
        v5 = sub_1407646C0(a2 + 48 * v11, v10, 48 * v11 + *a5);
        if ( (v5 & 0x80000000) != 0 )
          break;
        ++*a4;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= a1 )
          return v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    v13 = (void *)*a5;
    if ( *a5 )
    {
      v14 = 0LL;
      if ( *a4 )
      {
        do
        {
          ExFreePoolWithTag(*(PVOID *)(*a5 + 48 * v14 + 40), 0x57706E50u);
          v14 = (unsigned int)(v14 + 1);
        }
        while ( (unsigned int)v14 < *a4 );
        v13 = (void *)*a5;
      }
      ExFreePoolWithTag(v13, 0x57706E50u);
      *a4 = 0;
      *a5 = 0LL;
    }
  }
  return v5;
}
