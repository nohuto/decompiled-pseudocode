/*
 * XREFs of sub_140A7C0B8 @ 0x140A7C0B8
 * Callers:
 *     sub_140A7C024 @ 0x140A7C024 (sub_140A7C024.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140209930 (RtlNumberOfClearBits.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A7BF74 @ 0x140A7BF74 (sub_140A7BF74.c)
 *     sub_140A7C18C @ 0x140A7C18C (sub_140A7C18C.c)
 */

__int64 __fastcall sub_140A7C0B8(char *BaseOfImage, __int64 a2, __int64 a3, _RTL_BITMAP *a4, __int64 *a5)
{
  unsigned int v8; // ebx
  ULONG v9; // eax
  __int64 v10; // rbp
  void *Pool2; // rax
  __int64 v12; // r8

  v8 = 1;
  v9 = RtlNumberOfClearBits(a4);
  v10 = v9;
  if ( v9 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 24LL * v9, 0x54496656u);
    *a5 = (__int64)Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 24 * v10);
      if ( !(unsigned int)sub_140A7BF74(BaseOfImage, a2, v12, a4, v10, *a5) )
        sub_140A7C18C(a5);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return v8;
}
