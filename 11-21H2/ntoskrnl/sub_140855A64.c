/*
 * XREFs of sub_140855A64 @ 0x140855A64
 * Callers:
 *     ntoskrnl_20 @ 0x1406A71F0 (ntoskrnl_20.c)
 * Callees:
 *     sub_140855AB0 @ 0x140855AB0 (sub_140855AB0.c)
 */

__int64 __fastcall sub_140855A64(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( a1 )
  {
    v4 = *a1;
    sub_140855AB0(&v4);
    *a1 = v4;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
