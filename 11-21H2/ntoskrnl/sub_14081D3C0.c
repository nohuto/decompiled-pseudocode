/*
 * XREFs of sub_14081D3C0 @ 0x14081D3C0
 * Callers:
 *     sub_1407EF430 @ 0x1407EF430 (sub_1407EF430.c)
 *     sub_140AF33B0 @ 0x140AF33B0 (sub_140AF33B0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14081D3C0(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax
  void *v3; // rdi
  PVOID v4; // rsi

  if ( dword_140C1F390 )
  {
    if ( 2 * dword_140C1F390 <= a1 )
      v1 = (a1 + 8) >> 3;
    else
      v1 = (unsigned int)dword_140C1F390 >> 2;
  }
  else
  {
    v1 = 8;
  }
  result = ExAllocatePool2(256LL, v1, 1936020304LL);
  v3 = (void *)result;
  if ( result )
  {
    v4 = qword_140C1F378;
    if ( qword_140C1F378 )
    {
      memmove((void *)result, qword_140C1F378, (unsigned __int64)(unsigned int)dword_140C1F390 >> 3);
      ExFreePoolWithTag(v4, 0x73655350u);
    }
    result = 8 * v1;
    qword_140C1F378 = v3;
    dword_140C1F390 = 8 * v1;
    stru_140C1F380.SizeOfBitMap = 8 * v1;
    stru_140C1F380.Buffer = (PULONG)v3;
  }
  else
  {
    dword_140C1F390 = 0;
  }
  return result;
}
