/*
 * XREFs of sub_140A28D58 @ 0x140A28D58
 * Callers:
 *     sub_14076E224 @ 0x14076E224 (sub_14076E224.c)
 *     sub_140A297B0 @ 0x140A297B0 (sub_140A297B0.c)
 * Callees:
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_140788ED4 @ 0x140788ED4 (sub_140788ED4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A28D58(__int64 a1, const WCHAR *a2, __int64 a3)
{
  _WORD *Pool2; // rax
  void *v7; // rdi
  int v8; // ebx
  int v10; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v11[3]; // [rsp+64h] [rbp-14h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = 0;
  v10 = 0;
  v11[0] = 200;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 400LL, 1380994640LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    v8 = sub_140788ED4(a1, a2, Pool2, v11);
    if ( v8 >= 0 )
    {
      v8 = sub_14077DA5C(a1, (__int64)v7, 1, 0, 0LL, (__int64)&qword_140010A78, (__int64)&v12, a3, 16, (__int64)&v10, 0);
      if ( v8 >= 0 && (v12 != 13 || v10 != 16) )
        v8 = -1073741823;
    }
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
