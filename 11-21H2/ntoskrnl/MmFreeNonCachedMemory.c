/*
 * XREFs of MmFreeNonCachedMemory @ 0x14096A680
 * Callers:
 *     sub_140616EB0 @ 0x140616EB0 (sub_140616EB0.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     sub_14026E548 @ 0x14026E548 (sub_14026E548.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140416A74 @ 0x140416A74 (sub_140416A74.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall MmFreeNonCachedMemory(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  _QWORD *v3; // rdi
  struct _MDL *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = (_QWORD *)sub_140313C70((unsigned __int64)BaseAddress);
  v8 = sub_140317A10((unsigned __int64)v3);
  v4 = *(struct _MDL **)(48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v8) >> 12) & 0xFFFFFFFFFFLL)
                       - 0x220000000000LL
                       + 16);
  v6 = sub_14026E548(4, v5);
  sub_140416A74(v7, v6);
  MmFreePagesFromMdl(v4);
  ExFreePoolWithTag(v4, 0);
  sub_1402BB6D0((__int64)&qword_140C534C0, v3, (NumberOfBytes >> 12) + ((NumberOfBytes & 0xFFF) != 0));
}
