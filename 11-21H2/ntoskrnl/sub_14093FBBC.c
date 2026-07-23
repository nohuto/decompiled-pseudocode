/*
 * XREFs of sub_14093FBBC @ 0x14093FBBC
 * Callers:
 *     sub_1406CDACC @ 0x1406CDACC (sub_1406CDACC.c)
 * Callees:
 *     sub_1406CE7A8 @ 0x1406CE7A8 (sub_1406CE7A8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093FBBC(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int v4; // ebx
  void *Pool2; // rax
  void *v6; // rdi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = HIDWORD(a1);
  v8 = 0;
  v3 = sub_1406CE7A8((__int64)sub_14080AA70, 0LL, 0, &v8);
  v4 = v3;
  if ( v3 == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v8, 1146318665LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      v4 = sub_1406CE7A8((__int64)sub_14080AA70, Pool2, v8, &v8);
      if ( v4 >= 0 )
        *a2 = v6;
      else
        ExFreePoolWithTag(v6, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( v3 >= 0 )
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v4;
}
