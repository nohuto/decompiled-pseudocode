/*
 * XREFs of sub_140385180 @ 0x140385180
 * Callers:
 *     sub_1402B2E40 @ 0x1402B2E40 (sub_1402B2E40.c)
 * Callees:
 *     sub_1403851F0 @ 0x1403851F0 (sub_1403851F0.c)
 *     sub_1403852C0 @ 0x1403852C0 (sub_1403852C0.c)
 */

__int64 __fastcall sub_140385180(unsigned int a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v1 = 0xFFFFFFFFLL;
  for ( i = 0LL; (unsigned int)sub_1403851F0(i, &v6, &v5); ++i )
  {
    v1 = sub_1403852C0(a1, v6, v5);
    if ( v1 != 0xFFFFFFFFLL )
      break;
  }
  return v1;
}
