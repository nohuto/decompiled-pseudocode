/*
 * XREFs of sub_140A0A574 @ 0x140A0A574
 * Callers:
 *     sub_140A0A644 @ 0x140A0A644 (sub_140A0A644.c)
 *     sub_140A0A848 @ 0x140A0A848 (sub_140A0A848.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x14041BCA0 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140A0A7C4 @ 0x140A0A7C4 (sub_140A0A7C4.c)
 *     sub_140A0AA8C @ 0x140A0AA8C (sub_140A0AA8C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0A574(__int64 a1, _QWORD *a2, size_t *a3)
{
  int v5; // ebx
  __int64 v6; // rax
  size_t v7; // rsi
  char *v8; // r14
  void *Pool2; // rax
  void *v10; // rbp
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v12[0] = 0LL;
  BaseAddress = 0LL;
  v5 = ((__int64 (__fastcall *)(__int64, __int64, PVOID *, _QWORD *))sub_140A0AA8C)(a1, a1, &BaseAddress, v12);
  if ( v5 >= 0 )
  {
    v6 = sub_140A0A7C4(BaseAddress);
    if ( v6 )
    {
      v7 = *(unsigned int *)(v6 + 16);
      v8 = (char *)BaseAddress + *(unsigned int *)(v6 + 20);
      Pool2 = (void *)ExAllocatePool2(256LL, v7, 1751339841LL);
      v10 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v8, v7);
        *a2 = v10;
        *a3 = v7;
      }
      else
      {
        v5 = -1073741801;
      }
    }
    else
    {
      v5 = -1073741701;
    }
  }
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return (unsigned int)v5;
}
