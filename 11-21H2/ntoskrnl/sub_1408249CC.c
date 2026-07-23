/*
 * XREFs of sub_1408249CC @ 0x1408249CC
 * Callers:
 *     sub_140824960 @ 0x140824960 (sub_140824960.c)
 *     sub_14090A1A0 @ 0x14090A1A0 (sub_14090A1A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void *__fastcall sub_1408249CC(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rdi
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  Pool2 = 0LL;
  if ( qword_140C4ABB0 )
  {
    if ( (unsigned int)sub_14042A5E0(0LL, &v7) == -1073741789 )
    {
      v7 = (v7 + 4095) & 0xFFFFF000;
      Pool2 = (void *)ExAllocatePool2(a2, v7, 1668047176LL);
      if ( Pool2 )
      {
        v8 = v7;
        if ( (int)sub_14042A5E0(Pool2, &v8) < 0 )
        {
          ExFreePoolWithTag(Pool2, 0x636C6148u);
          Pool2 = 0LL;
        }
        else
        {
          v2 = v7;
        }
      }
    }
  }
  *a1 = v2;
  return Pool2;
}
