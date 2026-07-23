/*
 * XREFs of sub_14054E1F4 @ 0x14054E1F4
 * Callers:
 *     sub_140758C68 @ 0x140758C68 (sub_140758C68.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_1403A0EB4 @ 0x1403A0EB4 (sub_1403A0EB4.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14054E1F4(__int64 a1, __int64 a2, void **a3, ULONG *a4)
{
  void *v8; // rbx
  struct _MDL *i; // rdx
  int v10; // edi
  __int64 Pool2; // rax
  __int64 *v13[10]; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v14[14]; // [rsp+80h] [rbp-49h] BYREF

  memset(v14, 0, 0x68uLL);
  memset(v13, 0, 0x48uLL);
  v8 = *a3;
  for ( i = (struct _MDL *)*a3; ; i = (struct _MDL *)Pool2 )
  {
    v10 = sub_1403A0F08((__int64)v13, i, *a4, 2, 0);
    if ( v10 < 0 )
      break;
    v14[1] = *(_QWORD *)(a1 + 992);
    v14[4] = v13[7];
    v14[3] = v13[0];
    v14[2] = a2;
    v10 = sub_140358A20(2u, 17, 0, (__int64)v14);
    sub_1403A0EB4(v13);
    *a4 = v14[5];
    if ( v10 >= 0 )
    {
      *a3 = v8;
      return (unsigned int)v10;
    }
    if ( v10 != -1073741789 )
      break;
    if ( v8 != *a3 )
      ExFreePoolWithTag(v8, 0);
    Pool2 = ExAllocatePool2(256LL, *a4, 1416850774LL);
    v8 = (void *)Pool2;
    if ( !Pool2 )
    {
      v10 = -1073741670;
      break;
    }
  }
  if ( v8 != *a3 && v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v10;
}
