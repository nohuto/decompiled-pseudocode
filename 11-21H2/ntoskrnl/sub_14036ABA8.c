/*
 * XREFs of sub_14036ABA8 @ 0x14036ABA8
 * Callers:
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_140863534 @ 0x140863534 (sub_140863534.c)
 * Callees:
 *     sub_14036AC64 @ 0x14036AC64 (sub_14036AC64.c)
 *     sub_14036AF00 @ 0x14036AF00 (sub_14036AF00.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14036ABA8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 Pool2; // rax
  __int64 v7; // r9
  _DWORD *v8; // rdi
  int v9; // ebx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  LOBYTE(a4) = 1;
  sub_14036AC64(*(_QWORD *)(a1 + 96), 0LL, &v11, a4);
  v5 = v11;
  Pool2 = ExAllocatePool2(256LL, v11 + 16, 1869638997LL);
  v8 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    LOBYTE(v7) = 1;
    v9 = sub_14036AC64(*(_QWORD *)(a1 + 96), Pool2 + 16, &v11, v7);
    if ( v9 >= 0 )
    {
      *v8 = 8;
      v8[2] = *(_DWORD *)(a1 + 36);
      v9 = sub_14036AF00(v8, v5 + 16);
    }
    ExFreePoolWithTag(v8, 0x6F706D55u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}
