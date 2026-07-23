/*
 * XREFs of sub_14095846C @ 0x14095846C
 * Callers:
 *     sub_140767EFC @ 0x140767EFC (sub_140767EFC.c)
 * Callees:
 *     sub_1406E3A88 @ 0x1406E3A88 (sub_1406E3A88.c)
 *     sub_140767594 @ 0x140767594 (sub_140767594.c)
 *     sub_140767650 @ 0x140767650 (sub_140767650.c)
 *     sub_140767EFC @ 0x140767EFC (sub_140767EFC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14095846C(unsigned int **a1)
{
  unsigned int *v1; // rdi
  unsigned int v2; // ebx
  unsigned int *v4; // rax
  unsigned int i; // esi
  int v7; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+38h] BYREF
  void *v9; // [rsp+70h] [rbp+40h] BYREF
  unsigned int *v10; // [rsp+78h] [rbp+48h] BYREF

  v1 = *a1;
  v2 = 0;
  v9 = 0LL;
  v8 = 0;
  v7 = 0;
  v4 = sub_140767594(v1[3], 2 * v1[1]);
  v10 = v4;
  if ( v4 )
  {
    for ( i = 0; i < *v1; ++i )
    {
      sub_1406E3A88(v1, i, &v9, &v8, &v7);
      sub_140767EFC(&v10, v9, v8, v7);
    }
    sub_140767650(v1);
    ExFreePoolWithTag(v1, 0);
    v4 = v10;
  }
  else
  {
    v2 = -1073741670;
  }
  *a1 = v4;
  return v2;
}
