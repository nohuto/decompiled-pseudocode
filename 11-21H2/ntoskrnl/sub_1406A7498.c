/*
 * XREFs of sub_1406A7498 @ 0x1406A7498
 * Callers:
 *     sub_140639B54 @ 0x140639B54 (sub_140639B54.c)
 *     ntoskrnl_20 @ 0x1406A71F0 (ntoskrnl_20.c)
 *     ntoskrnl_21 @ 0x1406A73E0 (ntoskrnl_21.c)
 * Callees:
 *     sub_1406A74E4 @ 0x1406A74E4 (sub_1406A74E4.c)
 */

__int64 __fastcall sub_1406A7498(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_1406A74E4(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
