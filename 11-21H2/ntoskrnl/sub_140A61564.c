/*
 * XREFs of sub_140A61564 @ 0x140A61564
 * Callers:
 *     sub_140A5A6CC @ 0x140A5A6CC (sub_140A5A6CC.c)
 *     sub_140A61424 @ 0x140A61424 (sub_140A61424.c)
 * Callees:
 *     sub_1403AACB4 @ 0x1403AACB4 (sub_1403AACB4.c)
 *     sub_140506CA4 @ 0x140506CA4 (sub_140506CA4.c)
 *     sub_1405071C4 @ 0x1405071C4 (sub_1405071C4.c)
 *     sub_14050745C @ 0x14050745C (sub_14050745C.c)
 *     sub_140A5A9F8 @ 0x140A5A9F8 (sub_140A5A9F8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140A61564(__int64 a1, _DWORD *a2, __int64 a3)
{
  char v5; // r14
  _DWORD *v6; // rdi
  _DWORD *Pool2; // rax
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v5 = a1;
  if ( (int)sub_1403AACB4(a1, a3) >= 0 )
  {
    if ( a2 )
    {
      v6 = a2;
    }
    else
    {
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, 372LL, 1466720584LL);
      v6 = Pool2;
      if ( !Pool2 )
        return;
      sub_140A5A9F8(Pool2);
    }
    while ( (int)sub_1405071C4(17, (__int64)(v6 + 20), &v8, 0LL, a3) >= 0 )
    {
      if ( v5 )
      {
        v6[5] = v8;
        v6[3] = 1;
        sub_14050745C((__int64)v6, (__int64)(v6 + 20), a3);
      }
      sub_140506CA4((__int64)(v6 + 20), a3);
    }
    if ( !a2 )
      ExFreePoolWithTag(v6, 0x576C6148u);
  }
}
