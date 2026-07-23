/*
 * XREFs of sub_1408454C0 @ 0x1408454C0
 * Callers:
 *     sub_140B1BC34 @ 0x140B1BC34 (sub_140B1BC34.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14085F954 @ 0x14085F954 (sub_14085F954.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408454C0(__int64 a1, __int64 a2)
{
  _DWORD *Pool2; // rax
  _DWORD *v3; // rbx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edi
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v8 = a2;
  qword_140C22010 = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 64LL, 1667458128LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x40uLL);
    v8 = 0LL;
    *v3 = 1667458128;
    v3[8] = 68;
    v6 = sub_14085F954(v5, v4, (_DWORD)v3, (unsigned int)&v8);
    if ( v6 )
      ExFreePoolWithTag(v3, 0);
    else
      qword_140C22010 = (__int64)v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
