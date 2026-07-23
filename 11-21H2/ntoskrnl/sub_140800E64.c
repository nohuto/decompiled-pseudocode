/*
 * XREFs of sub_140800E64 @ 0x140800E64
 * Callers:
 *     sub_140800BAC @ 0x140800BAC (sub_140800BAC.c)
 *     sub_14099D244 @ 0x14099D244 (sub_14099D244.c)
 * Callees:
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140800E64(int a1, int a2, _QWORD *a3, _DWORD *a4)
{
  void *Pool2; // rdi
  int v9; // r8d
  int v10; // ebx
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0;
  if ( (unsigned int)sub_140812D44(a1, a2, (_DWORD)a3, 0, (__int64)v12) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v12[0], 1684226640LL);
    if ( Pool2 )
    {
      v10 = sub_140812D44(a1, a2, v9, (_DWORD)Pool2, (__int64)v12);
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        v10 = 0;
        *a4 = v12[0];
        *a3 = Pool2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v10;
}
