/*
 * XREFs of sub_1407ED964 @ 0x1407ED964
 * Callers:
 *     sub_1407ED930 @ 0x1407ED930 (sub_1407ED930.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     sub_14036972C @ 0x14036972C (sub_14036972C.c)
 */

__int64 __fastcall sub_1407ED964(__int64 a1)
{
  unsigned int v1; // edx
  unsigned __int64 v3; // rbx
  __int64 i; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  for ( i = qword_140C22B60; qword_140C22B60 + 50000000 <= v3; i = qword_140C22B60 )
  {
    sub_14036972C(0x20u);
    v1 = ExBlockOnAddressPushLock((__int64)&qword_140C22B68, &qword_140C22B60, &i, 8uLL, a1);
    if ( v1 == 258 )
      break;
  }
  return v1;
}
