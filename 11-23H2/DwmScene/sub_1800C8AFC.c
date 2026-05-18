/*
 * XREFs of sub_1800C8AFC @ 0x1800C8AFC
 * Callers:
 *     sub_1800CA57C @ 0x1800CA57C (sub_1800CA57C.c)
 * Callees:
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 */

__int64 __fastcall sub_1800C8AFC(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r10
  __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  v5 = *a1;
  v3 = a1;
  if ( a2 )
  {
    do
      sub_18001D3F8(&v5);
    while ( v4 != 1 );
    result = v5;
  }
  *v3 = result;
  return result;
}
