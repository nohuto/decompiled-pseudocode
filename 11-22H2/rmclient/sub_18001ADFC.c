/*
 * XREFs of sub_18001ADFC @ 0x18001ADFC
 * Callers:
 *     sub_18001BC8C @ 0x18001BC8C (sub_18001BC8C.c)
 *     sub_18001BE48 @ 0x18001BE48 (sub_18001BE48.c)
 * Callees:
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 */

volatile signed __int32 **__fastcall sub_18001ADFC(volatile signed __int32 **a1, char *a2)
{
  volatile signed __int32 *v3; // rax
  volatile signed __int32 *v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *(volatile signed __int32 **)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    sub_180004C40(v4);
  return a1;
}
