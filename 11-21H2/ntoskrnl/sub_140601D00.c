/*
 * XREFs of sub_140601D00 @ 0x140601D00
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A9A640 @ 0x140A9A640 (sub_140A9A640.c)
 */

__int64 __fastcall sub_140601D00(void *a1, size_t Size, unsigned int *a3, int a4)
{
  unsigned int v7; // eax
  unsigned int v8; // esi
  __int64 Pool2; // rax
  void *v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // eax

  *a3 = 0;
  v7 = 10485760;
  if ( (unsigned int)Size <= 0xA00000 )
    v7 = Size;
  v8 = v7;
  Pool2 = ExAllocatePool2(64LL, v7, 1886213206LL);
  v10 = (void *)Pool2;
  if ( Pool2 )
  {
    v11 = sub_140A9A640(Pool2, v8, (_DWORD)a3, (_DWORD)a1, a4);
    v12 = *a3;
    if ( *a3 > v8 )
      v12 = v8;
    memmove(a1, v10, v12);
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v11;
}
