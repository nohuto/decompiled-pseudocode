/*
 * XREFs of sub_14099FFFC @ 0x14099FFFC
 * Callers:
 *     sub_1405DE9D4 @ 0x1405DE9D4 (sub_1405DE9D4.c)
 * Callees:
 *     sub_14099FE80 @ 0x14099FE80 (sub_14099FE80.c)
 *     sub_1409A00F0 @ 0x1409A00F0 (sub_1409A00F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14099FFFC(char *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // rbx
  int v9; // edi
  __int64 Pool2; // rax
  void *v11; // rcx
  __int64 result; // rax

  v4 = 0LL;
  if ( (unsigned __int64)(a1 + 52) <= a3 )
  {
    Pool2 = ExAllocatePool2(64LL, 64LL, 1817210704LL);
    v4 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      v9 = sub_1409A00F0(Pool2, *(unsigned int *)a1, a2, a3);
      if ( v9 >= 0 )
      {
        v4[2] = 0LL;
        v9 = sub_14099FE80((__int64)v4, a1 + 8, *((unsigned int *)a1 + 1), a2, a3, v4 + 6, v4 + 7);
        if ( v9 >= 0 )
          goto LABEL_11;
        v11 = (void *)v4[1];
        if ( v11 )
          ExFreePoolWithTag(v11, 0x6C506F50u);
        *(_OWORD *)v4 = 0LL;
      }
      ExFreePoolWithTag(v4, 0x6C506F50u);
      v4 = 0LL;
      goto LABEL_11;
    }
    v9 = -1073741670;
  }
  else
  {
    v9 = -1073741306;
  }
LABEL_11:
  result = (unsigned int)v9;
  *a4 = v4;
  return result;
}
